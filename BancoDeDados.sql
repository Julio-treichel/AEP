CREATE DATABASE  IF NOT EXISTS `colculator` /*!40100 DEFAULT CHARACTER SET utf8 */;
USE `colculator`;
-- MySQL dump 10.13  Distrib 8.0.21, for Win64 (x86_64)
--
-- Host: localhost    Database: colculator
-- ------------------------------------------------------
-- Server version	5.7.31

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `motor_carro`
--

DROP TABLE IF EXISTS `motor_carro`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `motor_carro` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `potencia` float NOT NULL,
  `gasto_alcool` float DEFAULT NULL,
  `gasto_gasoli` float DEFAULT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=MyISAM AUTO_INCREMENT=9 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `motor_carro`
--

LOCK TABLES `motor_carro` WRITE;
/*!40000 ALTER TABLE `motor_carro` DISABLE KEYS */;
INSERT INTO `motor_carro` VALUES (1,1,0.86,1.74),(2,1.4,1.3,2.6),(3,1.6,1.33,2.66),(4,2,1.52,3.04),(5,2.2,1.69,3.19),(6,2.6,1.81,3.37),(7,2.8,2.06,3.51),(8,3,2.13,3.92);
/*!40000 ALTER TABLE `motor_carro` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `motor_moto`
--

DROP TABLE IF EXISTS `motor_moto`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `motor_moto` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `cilindrada` int(11) NOT NULL,
  `gasto_alcool` float DEFAULT NULL,
  `gasto_gasoli` float DEFAULT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=MyISAM AUTO_INCREMENT=9 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `motor_moto`
--

LOCK TABLES `motor_moto` WRITE;
/*!40000 ALTER TABLE `motor_moto` DISABLE KEYS */;
INSERT INTO `motor_moto` VALUES (1,100,0.28,0.72),(2,125,0.3,0.76),(3,160,0.34,0.79),(4,250,0.42,0.85),(5,300,0.46,0.94),(6,400,0.6,1.19),(7,500,0.64,1.25),(8,600,0.7,1.32);
/*!40000 ALTER TABLE `motor_moto` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2020-11-20 21:48:03
