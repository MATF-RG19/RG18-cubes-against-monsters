#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
#include "figure.h"
#include "pomeranje.h"
void kreirajPijuna(int x,int y,int z){

    glColor3f(0.196078,0.196078,0.8);
     glTranslatef(x,y,z);
     glRotatef(280, 1, 0, 0);
       glutSolidCone(0.2, 1, 50, 50);
     glRotatef(-280, 1, 0, 0);   
    glTranslatef(-x,-y,-z);     
    
}

void kreirajCudovista(int key,int *goaway,int animation_parameter_sphere){
    
    glColor3f(0, 0, 0);
    /*********** Iscrtavanje loptica za nivo 1*********////
    if(key==1){
    if(goaway[1]!=2){
    glPushMatrix();
        glColor3f(0, 0, 0);
        if(!goaway[1])
            glTranslatef(0, 0.7, 0);         
        else
            glTranslatef(0,animation_parameter_sphere,0);
        glutSolidSphere(0.3,10,10);
   glPopMatrix();
    }
    if(goaway[0]!=2){
   glPushMatrix();
        glColor3f(0, 0, 0);
        if(!goaway[0])
                 glTranslatef(-3,0.7,1);
         else
                  glTranslatef(-3,animation_parameter_sphere,1);
       
        glutSolidSphere(0.3,10,10);
    glPopMatrix();
    } 
    if(goaway[3]!=2){
    glPushMatrix();
        glColor3f(0, 0, 0);
        if(!goaway[3])
            glTranslatef(2, 0.7, 5);
        else 
             glTranslatef(2, animation_parameter_sphere, 5);
         
        glutSolidSphere(0.3,10,10);
    glPopMatrix();
   }
   if(goaway[2]!=2){
    glPushMatrix();
        glColor3f(0, 0, 0);
        if(!goaway[2])
        glTranslatef(3, 0.7, 2);
         else 
             glTranslatef(3, animation_parameter_sphere, 2);
        glutSolidSphere(0.3,10,10);
    glPopMatrix();
    }
     if(goaway[4]!=2){
    glPushMatrix();
        glColor3f(0, 0, 0);
        if(!goaway[4])
        glTranslatef(-2, 0.7, 5);
        
        else 
            glTranslatef(-2, animation_parameter_sphere, 5);
        glutSolidSphere(0.3,10,10);
    glPopMatrix();
    }
   }
   /*********** Iscrtavanje loptica za nivo 2*********////
   else if(key==2){
     if(goaway[2]!=2){  
    glPushMatrix();
        glColor3f(0, 0, 0);
        if(!goaway[2])
            glTranslatef(-1, 0.7, 0);
        else glTranslatef(-1,animation_parameter_sphere, 0);
        glutSolidSphere(0.3,10,10);
    glPopMatrix();
    }
    if(goaway[3]!=2){ 
    glPushMatrix();
        glColor3f(0, 0, 0);  
         if(!goaway[3])
            glTranslatef(2, 0.7, 0);
         else glTranslatef(2, animation_parameter_sphere, 0);
        glutSolidSphere(0.3,10,10);
    glPopMatrix();
    }
    if(goaway[4]!=2){
    glPushMatrix();
        glColor3f(0, 0, 0);
        if(!goaway[4])
            glTranslatef(3, 0.7, 2);
        else  glTranslatef(3, animation_parameter_sphere, 2);
        glutSolidSphere(0.3,10,10);
    glPopMatrix();
    }
    if(goaway[5]!=2){
    glPushMatrix();
        glColor3f(0, 0, 0);  
        if(!goaway[5])
            glTranslatef(3, 0.7, 5);
        else glTranslatef(3, animation_parameter_sphere, 5);
        glutSolidSphere(0.3,10,10);
    glPopMatrix();
    }
    if(goaway[6]!=2){
     glPushMatrix();
        glColor3f(0, 0, 0);
        if(!goaway[6])
            glTranslatef(-1, 0.7, 5);
        else glTranslatef(-1, animation_parameter_sphere, 5);
        glutSolidSphere(0.3,10,10);
    glPopMatrix();
    }
    if(goaway[1]!=2){
    glPushMatrix();
        glColor3f(0, 0, 0);
        if(!goaway[1])
            glTranslatef(-3, 0.7, 1);
        else glTranslatef(-3, animation_parameter_sphere, 1);
        glutSolidSphere(0.3,10,10);
   glPopMatrix();
    }
    if(goaway[0]!=2){
    glPushMatrix();
        glColor3f(0, 0, 0);  
        if(!goaway[0])
            glTranslatef(-3, 0.7, 3);
        else glTranslatef(-3, animation_parameter_sphere, 3);
        glutSolidSphere(0.3,10,10);
    glPopMatrix();
    }
    }
    /*********** Iscrtavanje loptica za nivo 3*********////
    else if(key==3){
    if(goaway[0]!=2){
    glPushMatrix();
        glColor3f(0, 0, 0);
        if(!goaway[0])
            glTranslatef(-3, 0.7, 3);
        else glTranslatef(-3,animation_parameter_sphere, 3);
        glutSolidSphere(0.3,10,10);
      glPopMatrix();
    }
    if(goaway[3]!=2){
    glPushMatrix();
        glColor3f(0, 0, 0);
        if(!goaway[3])
            glTranslatef(1, 0.7, 0);
        else  glTranslatef(1, animation_parameter_sphere, 0);
        glutSolidSphere(0.3,10,10);
      glPopMatrix();
    }
    if(goaway[2]!=2){
    glPushMatrix();
        glColor3f(0, 0, 0);
        if(!goaway[2])
            glTranslatef(-2, 0.7, 0);
        else glTranslatef(-2, animation_parameter_sphere, 0);
        glutSolidSphere(0.3,10,10);
      glPopMatrix();
    }
    if(goaway[4]!=2){
     glPushMatrix();
        glColor3f(0, 0, 0);
        if(!goaway[4])
            glTranslatef(3, 0.7, 0);
        else  glTranslatef(3, animation_parameter_sphere, 0);
        glutSolidSphere(0.3,10,10);
      glPopMatrix();
    }
    if(goaway[1]!=2){
     glPushMatrix();
        glColor3f(0, 0, 0);
        if(!goaway[1])
            glTranslatef(-3, 0.7, 1);
        else glTranslatef(-3, animation_parameter_sphere, 1);
        glutSolidSphere(0.3,10,10);
      glPopMatrix();
    }
    if(goaway[5]!=2){
    glPushMatrix();
        glColor3f(0, 0, 0);
        if(!goaway[5])
            glTranslatef(3, 0.7, 2);
        else glTranslatef(3, animation_parameter_sphere, 2);
        glutSolidSphere(0.3,10,10);
    glPopMatrix();
    }
    if(goaway[6]!=2){
    glPushMatrix();
        glColor3f(0, 0, 0);
        if(!goaway[6])
            glTranslatef(3, 0.7, 4);
        else glTranslatef(3, animation_parameter_sphere, 4);
        glutSolidSphere(0.3,10,10);
    glPopMatrix();
    }  
    if(goaway[7]!=2){
    glPushMatrix();
        glColor3f(0, 0, 0);
        if(!goaway[7])
            glTranslatef(1, 0.7, 5);
        else glTranslatef(1, animation_parameter_sphere, 5);
        glutSolidSphere(0.3,10,10);
      glPopMatrix();
    }
    if(goaway[8]!=2){
     glPushMatrix();
        glColor3f(0, 0, 0); 
        if(!goaway[8])
            glTranslatef(-2, 0.7, 5);
        else  glTranslatef(-2, animation_parameter_sphere, 5);
        glutSolidSphere(0.3,10,10);
     glPopMatrix();
    }
}

    
}
int pronadji(int *niz,int n,int vrednost)
{
     int nasao=0;
     int c,poz;
     for(c = 0; c < n; c++)
         if(*(niz+c) == vrednost){
            nasao = 1;
            poz = c;
            break; 
        }
    
    if(nasao)
        return poz;
    else
        return -1;
}


int obrisi_element(int *niz,int n,int vrednost)
{
   int uspesno=0;

    int c, poz;
    
    int nasao = 0; 
    
    for(c = 0; c < n; c++)
    {
        if(*(niz+c) == vrednost)
        {
            nasao = 1;
            poz = c;
            break; 
        }
    }
    if(nasao == 1)
    {
        
            *(niz+poz) = 0;
         uspesno=1;  
    }
    return uspesno;
   
}
