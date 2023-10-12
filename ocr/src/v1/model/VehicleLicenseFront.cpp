

#include "huaweicloud/ocr/v1/model/VehicleLicenseFront.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




VehicleLicenseFront::VehicleLicenseFront()
{
    number_ = "";
    numberIsSet_ = false;
    vehicleType_ = "";
    vehicleTypeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    useCharacter_ = "";
    useCharacterIsSet_ = false;
    model_ = "";
    modelIsSet_ = false;
    vin_ = "";
    vinIsSet_ = false;
    engineNo_ = "";
    engineNoIsSet_ = false;
    registerDate_ = "";
    registerDateIsSet_ = false;
    issueDate_ = "";
    issueDateIsSet_ = false;
    issuingAuthority_ = "";
    issuingAuthorityIsSet_ = false;
    textLocationIsSet_ = false;
}

VehicleLicenseFront::~VehicleLicenseFront() = default;

void VehicleLicenseFront::validate()
{
}

web::json::value VehicleLicenseFront::toJson() const
{
    web::json::value val = web::json::value::object();

    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(vehicleTypeIsSet_) {
        val[utility::conversions::to_string_t("vehicle_type")] = ModelBase::toJson(vehicleType_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(useCharacterIsSet_) {
        val[utility::conversions::to_string_t("use_character")] = ModelBase::toJson(useCharacter_);
    }
    if(modelIsSet_) {
        val[utility::conversions::to_string_t("model")] = ModelBase::toJson(model_);
    }
    if(vinIsSet_) {
        val[utility::conversions::to_string_t("vin")] = ModelBase::toJson(vin_);
    }
    if(engineNoIsSet_) {
        val[utility::conversions::to_string_t("engine_no")] = ModelBase::toJson(engineNo_);
    }
    if(registerDateIsSet_) {
        val[utility::conversions::to_string_t("register_date")] = ModelBase::toJson(registerDate_);
    }
    if(issueDateIsSet_) {
        val[utility::conversions::to_string_t("issue_date")] = ModelBase::toJson(issueDate_);
    }
    if(issuingAuthorityIsSet_) {
        val[utility::conversions::to_string_t("issuing_authority")] = ModelBase::toJson(issuingAuthority_);
    }
    if(textLocationIsSet_) {
        val[utility::conversions::to_string_t("text_location")] = ModelBase::toJson(textLocation_);
    }

    return val;
}
bool VehicleLicenseFront::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vehicle_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vehicle_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVehicleType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("use_character"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("use_character"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUseCharacter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vin"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_no"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("register_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("register_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegisterDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issuing_authority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issuing_authority"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuingAuthority(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_location"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextLocation(refVal);
        }
    }
    return ok;
}


std::string VehicleLicenseFront::getNumber() const
{
    return number_;
}

void VehicleLicenseFront::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool VehicleLicenseFront::numberIsSet() const
{
    return numberIsSet_;
}

void VehicleLicenseFront::unsetnumber()
{
    numberIsSet_ = false;
}

std::string VehicleLicenseFront::getVehicleType() const
{
    return vehicleType_;
}

void VehicleLicenseFront::setVehicleType(const std::string& value)
{
    vehicleType_ = value;
    vehicleTypeIsSet_ = true;
}

bool VehicleLicenseFront::vehicleTypeIsSet() const
{
    return vehicleTypeIsSet_;
}

void VehicleLicenseFront::unsetvehicleType()
{
    vehicleTypeIsSet_ = false;
}

std::string VehicleLicenseFront::getName() const
{
    return name_;
}

void VehicleLicenseFront::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool VehicleLicenseFront::nameIsSet() const
{
    return nameIsSet_;
}

void VehicleLicenseFront::unsetname()
{
    nameIsSet_ = false;
}

std::string VehicleLicenseFront::getAddress() const
{
    return address_;
}

void VehicleLicenseFront::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool VehicleLicenseFront::addressIsSet() const
{
    return addressIsSet_;
}

void VehicleLicenseFront::unsetaddress()
{
    addressIsSet_ = false;
}

std::string VehicleLicenseFront::getUseCharacter() const
{
    return useCharacter_;
}

void VehicleLicenseFront::setUseCharacter(const std::string& value)
{
    useCharacter_ = value;
    useCharacterIsSet_ = true;
}

bool VehicleLicenseFront::useCharacterIsSet() const
{
    return useCharacterIsSet_;
}

void VehicleLicenseFront::unsetuseCharacter()
{
    useCharacterIsSet_ = false;
}

std::string VehicleLicenseFront::getModel() const
{
    return model_;
}

void VehicleLicenseFront::setModel(const std::string& value)
{
    model_ = value;
    modelIsSet_ = true;
}

bool VehicleLicenseFront::modelIsSet() const
{
    return modelIsSet_;
}

void VehicleLicenseFront::unsetmodel()
{
    modelIsSet_ = false;
}

std::string VehicleLicenseFront::getVin() const
{
    return vin_;
}

void VehicleLicenseFront::setVin(const std::string& value)
{
    vin_ = value;
    vinIsSet_ = true;
}

bool VehicleLicenseFront::vinIsSet() const
{
    return vinIsSet_;
}

void VehicleLicenseFront::unsetvin()
{
    vinIsSet_ = false;
}

std::string VehicleLicenseFront::getEngineNo() const
{
    return engineNo_;
}

void VehicleLicenseFront::setEngineNo(const std::string& value)
{
    engineNo_ = value;
    engineNoIsSet_ = true;
}

bool VehicleLicenseFront::engineNoIsSet() const
{
    return engineNoIsSet_;
}

void VehicleLicenseFront::unsetengineNo()
{
    engineNoIsSet_ = false;
}

std::string VehicleLicenseFront::getRegisterDate() const
{
    return registerDate_;
}

void VehicleLicenseFront::setRegisterDate(const std::string& value)
{
    registerDate_ = value;
    registerDateIsSet_ = true;
}

bool VehicleLicenseFront::registerDateIsSet() const
{
    return registerDateIsSet_;
}

void VehicleLicenseFront::unsetregisterDate()
{
    registerDateIsSet_ = false;
}

std::string VehicleLicenseFront::getIssueDate() const
{
    return issueDate_;
}

void VehicleLicenseFront::setIssueDate(const std::string& value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool VehicleLicenseFront::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void VehicleLicenseFront::unsetissueDate()
{
    issueDateIsSet_ = false;
}

std::string VehicleLicenseFront::getIssuingAuthority() const
{
    return issuingAuthority_;
}

void VehicleLicenseFront::setIssuingAuthority(const std::string& value)
{
    issuingAuthority_ = value;
    issuingAuthorityIsSet_ = true;
}

bool VehicleLicenseFront::issuingAuthorityIsSet() const
{
    return issuingAuthorityIsSet_;
}

void VehicleLicenseFront::unsetissuingAuthority()
{
    issuingAuthorityIsSet_ = false;
}

Object VehicleLicenseFront::getTextLocation() const
{
    return textLocation_;
}

void VehicleLicenseFront::setTextLocation(const Object& value)
{
    textLocation_ = value;
    textLocationIsSet_ = true;
}

bool VehicleLicenseFront::textLocationIsSet() const
{
    return textLocationIsSet_;
}

void VehicleLicenseFront::unsettextLocation()
{
    textLocationIsSet_ = false;
}

}
}
}
}
}


