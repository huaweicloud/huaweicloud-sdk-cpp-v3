
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_HouseholdRegisterContent_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_HouseholdRegisterContent_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_OCR_V1_EXPORT  HouseholdRegisterContent
    : public ModelBase
{
public:
    HouseholdRegisterContent();
    virtual ~HouseholdRegisterContent();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HouseholdRegisterContent members

    /// <summary>
    /// 姓名。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 户主或与户主关系。 
    /// </summary>

    std::string getHouseholderRelationship() const;
    bool householderRelationshipIsSet() const;
    void unsethouseholderRelationship();
    void setHouseholderRelationship(const std::string& value);

    /// <summary>
    /// 曾用名。 
    /// </summary>

    std::string getFormerName() const;
    bool formerNameIsSet() const;
    void unsetformerName();
    void setFormerName(const std::string& value);

    /// <summary>
    /// 性别。 
    /// </summary>

    std::string getSex() const;
    bool sexIsSet() const;
    void unsetsex();
    void setSex(const std::string& value);

    /// <summary>
    /// 出生地。 
    /// </summary>

    std::string getBirthplace() const;
    bool birthplaceIsSet() const;
    void unsetbirthplace();
    void setBirthplace(const std::string& value);

    /// <summary>
    /// 民族。 
    /// </summary>

    std::string getEthnicity() const;
    bool ethnicityIsSet() const;
    void unsetethnicity();
    void setEthnicity(const std::string& value);

    /// <summary>
    /// 籍贯。 
    /// </summary>

    std::string getOriginPlace() const;
    bool originPlaceIsSet() const;
    void unsetoriginPlace();
    void setOriginPlace(const std::string& value);

    /// <summary>
    /// 出生日期。 
    /// </summary>

    std::string getBirthDate() const;
    bool birthDateIsSet() const;
    void unsetbirthDate();
    void setBirthDate(const std::string& value);

    /// <summary>
    /// 本市(县)其他住址。 
    /// </summary>

    std::string getOtherAddress() const;
    bool otherAddressIsSet() const;
    void unsetotherAddress();
    void setOtherAddress(const std::string& value);

    /// <summary>
    /// 宗教信仰。 
    /// </summary>

    std::string getReligiousBelief() const;
    bool religiousBeliefIsSet() const;
    void unsetreligiousBelief();
    void setReligiousBelief(const std::string& value);

    /// <summary>
    /// 公民身份证件编号。 
    /// </summary>

    std::string getIdCardNumber() const;
    bool idCardNumberIsSet() const;
    void unsetidCardNumber();
    void setIdCardNumber(const std::string& value);

    /// <summary>
    /// 身高。 
    /// </summary>

    std::string getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(const std::string& value);

    /// <summary>
    /// 血型。 
    /// </summary>

    std::string getBloodType() const;
    bool bloodTypeIsSet() const;
    void unsetbloodType();
    void setBloodType(const std::string& value);

    /// <summary>
    /// 文化程度。 
    /// </summary>

    std::string getEducation() const;
    bool educationIsSet() const;
    void unseteducation();
    void setEducation(const std::string& value);

    /// <summary>
    /// 婚姻状况。   
    /// </summary>

    std::string getMaritalStatus() const;
    bool maritalStatusIsSet() const;
    void unsetmaritalStatus();
    void setMaritalStatus(const std::string& value);

    /// <summary>
    /// 兵役情况。 
    /// </summary>

    std::string getMilitaryServiceStatus() const;
    bool militaryServiceStatusIsSet() const;
    void unsetmilitaryServiceStatus();
    void setMilitaryServiceStatus(const std::string& value);

    /// <summary>
    /// 服务处所。 
    /// </summary>

    std::string getWorkPlace() const;
    bool workPlaceIsSet() const;
    void unsetworkPlace();
    void setWorkPlace(const std::string& value);

    /// <summary>
    /// 职业。 
    /// </summary>

    std::string getOccupation() const;
    bool occupationIsSet() const;
    void unsetoccupation();
    void setOccupation(const std::string& value);

    /// <summary>
    /// 何时由何地迁来本市(县)。 
    /// </summary>

    std::string getMigratedToCity() const;
    bool migratedToCityIsSet() const;
    void unsetmigratedToCity();
    void setMigratedToCity(const std::string& value);

    /// <summary>
    /// 何时由何地迁来本址。 
    /// </summary>

    std::string getMigratedToAddress() const;
    bool migratedToAddressIsSet() const;
    void unsetmigratedToAddress();
    void setMigratedToAddress(const std::string& value);

    /// <summary>
    /// 承办人签章。 
    /// </summary>

    std::string getRegistrarSignatureSeal() const;
    bool registrarSignatureSealIsSet() const;
    void unsetregistrarSignatureSeal();
    void setRegistrarSignatureSeal(const std::string& value);

    /// <summary>
    /// 登记日期。 
    /// </summary>

    std::string getRegistrationDate() const;
    bool registrationDateIsSet() const;
    void unsetregistrationDate();
    void setRegistrationDate(const std::string& value);

    /// <summary>
    /// 户别。 
    /// </summary>

    std::string getHouseholdType() const;
    bool householdTypeIsSet() const;
    void unsethouseholdType();
    void setHouseholdType(const std::string& value);

    /// <summary>
    /// 户号。 
    /// </summary>

    std::string getHouseholdNumber() const;
    bool householdNumberIsSet() const;
    void unsethouseholdNumber();
    void setHouseholdNumber(const std::string& value);

    /// <summary>
    /// 户主姓名。当type参数为“首页”时，返回此参数。 
    /// </summary>

    std::string getHouseholderName() const;
    bool householderNameIsSet() const;
    void unsethouseholderName();
    void setHouseholderName(const std::string& value);

    /// <summary>
    /// 社区。当type参数为“首页”时，返回此参数。 
    /// </summary>

    std::string getCommunity() const;
    bool communityIsSet() const;
    void unsetcommunity();
    void setCommunity(const std::string& value);

    /// <summary>
    /// 住址。当type参数为“首页”时，返回此参数。 
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// 签发日期。当type参数为“首页”时，返回此参数。 
    /// </summary>

    std::string getIssueDate() const;
    bool issueDateIsSet() const;
    void unsetissueDate();
    void setIssueDate(const std::string& value);

    /// <summary>
    /// 户口登记机关。当type参数为“首页”时，返回此参数。 
    /// </summary>

    std::string getPoliceStation() const;
    bool policeStationIsSet() const;
    void unsetpoliceStation();
    void setPoliceStation(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string householderRelationship_;
    bool householderRelationshipIsSet_;
    std::string formerName_;
    bool formerNameIsSet_;
    std::string sex_;
    bool sexIsSet_;
    std::string birthplace_;
    bool birthplaceIsSet_;
    std::string ethnicity_;
    bool ethnicityIsSet_;
    std::string originPlace_;
    bool originPlaceIsSet_;
    std::string birthDate_;
    bool birthDateIsSet_;
    std::string otherAddress_;
    bool otherAddressIsSet_;
    std::string religiousBelief_;
    bool religiousBeliefIsSet_;
    std::string idCardNumber_;
    bool idCardNumberIsSet_;
    std::string height_;
    bool heightIsSet_;
    std::string bloodType_;
    bool bloodTypeIsSet_;
    std::string education_;
    bool educationIsSet_;
    std::string maritalStatus_;
    bool maritalStatusIsSet_;
    std::string militaryServiceStatus_;
    bool militaryServiceStatusIsSet_;
    std::string workPlace_;
    bool workPlaceIsSet_;
    std::string occupation_;
    bool occupationIsSet_;
    std::string migratedToCity_;
    bool migratedToCityIsSet_;
    std::string migratedToAddress_;
    bool migratedToAddressIsSet_;
    std::string registrarSignatureSeal_;
    bool registrarSignatureSealIsSet_;
    std::string registrationDate_;
    bool registrationDateIsSet_;
    std::string householdType_;
    bool householdTypeIsSet_;
    std::string householdNumber_;
    bool householdNumberIsSet_;
    std::string householderName_;
    bool householderNameIsSet_;
    std::string community_;
    bool communityIsSet_;
    std::string address_;
    bool addressIsSet_;
    std::string issueDate_;
    bool issueDateIsSet_;
    std::string policeStation_;
    bool policeStationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_HouseholdRegisterContent_H_
