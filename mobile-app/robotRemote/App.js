
import React, { Component } from 'react';
import { Container, Header, Title, Content, Footer, FooterTab, Button, Left, Right, Body, Icon, Text } from 'native-base';

const App = () => {
  return (
    <Container>
        <Header>
          <Left />
          <Body>
            <Title>4 dof robotic arm remote control</Title>
          </Body>
          <Right />
        </Header>
        <Content>
        <Button full>
          <Text>
            Light
          </Text>
        </Button>
        </Content>
    </Container>
  );
};

export default App;
