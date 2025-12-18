

#include "huaweicloud/meeting/v1/model/AddDeviceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AddDeviceResponse::AddDeviceResponse()
{
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    model_ = "";
    modelIsSet_ = false;
    sn_ = "";
    snIsSet_ = false;
    account_ = "";
    accountIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    prjCodeMode_ = 0;
    prjCodeModeIsSet_ = false;
    deptCode_ = "";
    deptCodeIsSet_ = false;
    deptName_ = "";
    deptNameIsSet_ = false;
    deptNamePath_ = "";
    deptNamePathIsSet_ = false;
    phone_ = "";
    phoneIsSet_ = false;
    country_ = "";
    countryIsSet_ = false;
    email_ = "";
    emailIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

AddDeviceResponse::~AddDeviceResponse() = default;

void AddDeviceResponse::validate()
{
}

web::json::value AddDeviceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(modelIsSet_) {
        val[utility::conversions::to_string_t("model")] = ModelBase::toJson(model_);
    }
    if(snIsSet_) {
        val[utility::conversions::to_string_t("sn")] = ModelBase::toJson(sn_);
    }
    if(accountIsSet_) {
        val[utility::conversions::to_string_t("account")] = ModelBase::toJson(account_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(prjCodeModeIsSet_) {
        val[utility::conversions::to_string_t("prjCodeMode")] = ModelBase::toJson(prjCodeMode_);
    }
    if(deptCodeIsSet_) {
        val[utility::conversions::to_string_t("deptCode")] = ModelBase::toJson(deptCode_);
    }
    if(deptNameIsSet_) {
        val[utility::conversions::to_string_t("deptName")] = ModelBase::toJson(deptName_);
    }
    if(deptNamePathIsSet_) {
        val[utility::conversions::to_string_t("deptNamePath")] = ModelBase::toJson(deptNamePath_);
    }
    if(phoneIsSet_) {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(phone_);
    }
    if(countryIsSet_) {
        val[utility::conversions::to_string_t("country")] = ModelBase::toJson(country_);
    }
    if(emailIsSet_) {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(email_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool AddDeviceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("account"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prjCodeMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prjCodeMode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrjCodeMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deptCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptCode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deptName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deptNamePath"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptNamePath"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptNamePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("country"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("country"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCountry(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("email"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string AddDeviceResponse::getName() const
{
    return name_;
}

void AddDeviceResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AddDeviceResponse::nameIsSet() const
{
    return nameIsSet_;
}

void AddDeviceResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string AddDeviceResponse::getType() const
{
    return type_;
}

void AddDeviceResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AddDeviceResponse::typeIsSet() const
{
    return typeIsSet_;
}

void AddDeviceResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string AddDeviceResponse::getModel() const
{
    return model_;
}

void AddDeviceResponse::setModel(const std::string& value)
{
    model_ = value;
    modelIsSet_ = true;
}

bool AddDeviceResponse::modelIsSet() const
{
    return modelIsSet_;
}

void AddDeviceResponse::unsetmodel()
{
    modelIsSet_ = false;
}

std::string AddDeviceResponse::getSn() const
{
    return sn_;
}

void AddDeviceResponse::setSn(const std::string& value)
{
    sn_ = value;
    snIsSet_ = true;
}

bool AddDeviceResponse::snIsSet() const
{
    return snIsSet_;
}

void AddDeviceResponse::unsetsn()
{
    snIsSet_ = false;
}

std::string AddDeviceResponse::getAccount() const
{
    return account_;
}

void AddDeviceResponse::setAccount(const std::string& value)
{
    account_ = value;
    accountIsSet_ = true;
}

bool AddDeviceResponse::accountIsSet() const
{
    return accountIsSet_;
}

void AddDeviceResponse::unsetaccount()
{
    accountIsSet_ = false;
}

std::string AddDeviceResponse::getNumber() const
{
    return number_;
}

void AddDeviceResponse::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool AddDeviceResponse::numberIsSet() const
{
    return numberIsSet_;
}

void AddDeviceResponse::unsetnumber()
{
    numberIsSet_ = false;
}

int32_t AddDeviceResponse::getPrjCodeMode() const
{
    return prjCodeMode_;
}

void AddDeviceResponse::setPrjCodeMode(int32_t value)
{
    prjCodeMode_ = value;
    prjCodeModeIsSet_ = true;
}

bool AddDeviceResponse::prjCodeModeIsSet() const
{
    return prjCodeModeIsSet_;
}

void AddDeviceResponse::unsetprjCodeMode()
{
    prjCodeModeIsSet_ = false;
}

std::string AddDeviceResponse::getDeptCode() const
{
    return deptCode_;
}

void AddDeviceResponse::setDeptCode(const std::string& value)
{
    deptCode_ = value;
    deptCodeIsSet_ = true;
}

bool AddDeviceResponse::deptCodeIsSet() const
{
    return deptCodeIsSet_;
}

void AddDeviceResponse::unsetdeptCode()
{
    deptCodeIsSet_ = false;
}

std::string AddDeviceResponse::getDeptName() const
{
    return deptName_;
}

void AddDeviceResponse::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool AddDeviceResponse::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void AddDeviceResponse::unsetdeptName()
{
    deptNameIsSet_ = false;
}

std::string AddDeviceResponse::getDeptNamePath() const
{
    return deptNamePath_;
}

void AddDeviceResponse::setDeptNamePath(const std::string& value)
{
    deptNamePath_ = value;
    deptNamePathIsSet_ = true;
}

bool AddDeviceResponse::deptNamePathIsSet() const
{
    return deptNamePathIsSet_;
}

void AddDeviceResponse::unsetdeptNamePath()
{
    deptNamePathIsSet_ = false;
}

std::string AddDeviceResponse::getPhone() const
{
    return phone_;
}

void AddDeviceResponse::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool AddDeviceResponse::phoneIsSet() const
{
    return phoneIsSet_;
}

void AddDeviceResponse::unsetphone()
{
    phoneIsSet_ = false;
}

std::string AddDeviceResponse::getCountry() const
{
    return country_;
}

void AddDeviceResponse::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool AddDeviceResponse::countryIsSet() const
{
    return countryIsSet_;
}

void AddDeviceResponse::unsetcountry()
{
    countryIsSet_ = false;
}

std::string AddDeviceResponse::getEmail() const
{
    return email_;
}

void AddDeviceResponse::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool AddDeviceResponse::emailIsSet() const
{
    return emailIsSet_;
}

void AddDeviceResponse::unsetemail()
{
    emailIsSet_ = false;
}

std::string AddDeviceResponse::getDescription() const
{
    return description_;
}

void AddDeviceResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AddDeviceResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AddDeviceResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t AddDeviceResponse::getStatus() const
{
    return status_;
}

void AddDeviceResponse::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AddDeviceResponse::statusIsSet() const
{
    return statusIsSet_;
}

void AddDeviceResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


