//
//  AppDelegate.h
//  Adapter
//
//  Created by Vasilii on 13.06.17.
//  Copyright © 2017 Vasilii Burenkov. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;


/*Сам паттерн состоит из трех частей: Цели (target), Адаптера (adapter), и адаптируемого (adaptee).
В нашей с вами проблеме:
1. Target – ноутбуксостаройзарядкой
2. Adapter – переходник.
3. Adaptee – розетка с квадртаными дырками.
*/

@end

