//
// Created by Al-Sh on 10/25/2023.
//

#include "../Headers/Button.h"


namespace EPU {
    ColorSet::ColorSet() {
        this->color = defaultColor;
        this->hover = defaultHover;
        this->press = defaultPress;
    }

    ColorSet::ColorSet(sf::Color color) {
        init(color, color, color);
    }

    ColorSet::ColorSet(sf::Color color, sf::Color hover, sf::Color press) {
        init(color, hover, press);
    }

    void ColorSet::init(sf::Color color, sf::Color hover, sf::Color press) {
        this->color = color;
        this->hover = hover;
        this->press = press;
    }

    void Button::setButtonFont(sf::Font &font) {
        buttonLabel.setFont(font);
    }

    void Button::setButtonColor(sf::Color color) {
        setButtonColor(color, color, color);
    }

    void Button::setButtonColor(sf::Color color, sf::Color hover, sf::Color press) {
        this->buttonColorSet.color = color;
        this->buttonColorSet.hover = hover;
        this->buttonColorSet.press = press;
    }

    void Button::setLabelColor(sf::Color color) {
        setLabelColor(color, color, color);
    }


    void Button::setLabelColor(sf::Color color, sf::Color hover, sf::Color press) {
        this->labelColorSet.color = color;
        this->labelColorSet.hover = hover;
        this->labelColorSet.press = press;
    }

    unsigned int Button::count = 0;
} // EPU