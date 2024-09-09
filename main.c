#include <stdio.h>

typedef struct
{
    int jour;
    int mois;
    int annee;
} dates;
dates deadline;
typedef struct
{
    int Mat[10];
    char Titre[20];
    char description[500];
    dates deadline;
    char status[100];
} data;
data Tasks[1000];
int count = 0;
void Ajouter()
{
    for (int i = 0; i < count; i++)
    {
        int Nmat;
        printf("entre la Matricule : ");
        scanf("%d", &Nmat);
        if (Tasks[i].Mat == &Nmat)
        {
            printf("la matricule existe deja");
            return;
        }
       
    }

    printf("entrer la Matricule : ");
    scanf("%d", &Tasks[count].Mat);
        printf("entrer le Titre : ");
        scanf("%s", Tasks[count].Titre);
        printf("entrer la description : ");
        scanf("%s", Tasks[count].description);
        printf("entrer la date : ");
        scanf("%d", &Tasks[count].deadline.jour);
        scanf("%d", &Tasks[count].deadline.mois);
        scanf("%d", &Tasks[count].deadline.annee);
        count++;
}
void Afficher()
{
    
    for(int i=0;i<count;i++){
        printf("identifient est : %d\n",Tasks->Mat);
        printf("Titre est : %s\n",Tasks->Titre);
        printf("description est : %s\n",Tasks->description);
        printf("date est : %d/%d/%d\n",Tasks->deadline.jour,Tasks->deadline.mois,Tasks->deadline.annee);
    }
}
void Modifier()
{
    printf("modifie");
}
void Supprimer()
{
    printf("supprime");
}
void Rechercher()
{
    printf("recherche");
}
void Statistiques()
{
    printf("statistique");
}

int main()
{
    int choice;

    do
    {
        printf("-------------------Systeme Gestion de Tâches ToDo--------------------\n");
        printf("1.Ajouter\n2.Afficher\n3.Modifier\n4.Supprimer\n5.Rechercher\n6.Statistiques\n");
        printf("what do you want to do?\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Ajouter();
            break;
        case 2:
        int choix;
    printf("Choisir la methode de affichage :");
    printf("entre 0 pour affichage simple\n \
    entre 1 pour affichage ASC\n \
    entre 2 pour affichage DESC\n");
    if(choix==0){
                    Afficher();

    }
            break;
        case 3:
            Modifier();
            break;
        case 4:
            Supprimer();
            break;
        case 5:
            Rechercher();
            break;
        case 6:
            Statistiques();
            break;
        default:
            break;
        }
       
    } while (choice != 0);

    return 0;
}