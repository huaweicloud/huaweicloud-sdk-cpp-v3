

#include "huaweicloud/meeting/v1/model/ShowDeviceDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowDeviceDetailResponse::ShowDeviceDetailResponse()
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

ShowDeviceDetailResponse::~ShowDeviceDetailResponse() = default;

void ShowDeviceDetailResponse::validate()
{
}

web::json::value ShowDeviceDetailResponse::toJson() const
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
bool ShowDeviceDetailResponse::fromJson(const web::json::value& val)
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


std::string ShowDeviceDetailResponse::getName() const
{
    return name_;
}

void ShowDeviceDetailResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowDeviceDetailResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowDeviceDetailResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowDeviceDetailResponse::getType() const
{
    return type_;
}

void ShowDeviceDetailResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowDeviceDetailResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ShowDeviceDetailResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string ShowDeviceDetailResponse::getModel() const
{
    return model_;
}

void ShowDeviceDetailResponse::setModel(const std::string& value)
{
    model_ = value;
    modelIsSet_ = true;
}

bool ShowDeviceDetailResponse::modelIsSet() const
{
    return modelIsSet_;
}

void ShowDeviceDetailResponse::unsetmodel()
{
    modelIsSet_ = false;
}

std::string ShowDeviceDetailResponse::getSn() const
{
    return sn_;
}

void ShowDeviceDetailResponse::setSn(const std::string& value)
{
    sn_ = value;
    snIsSet_ = true;
}

bool ShowDeviceDetailResponse::snIsSet() const
{
    return snIsSet_;
}

void ShowDeviceDetailResponse::unsetsn()
{
    snIsSet_ = false;
}

std::string ShowDeviceDetailResponse::getAccount() const
{
    return account_;
}

void ShowDeviceDetailResponse::setAccount(const std::string& value)
{
    account_ = value;
    accountIsSet_ = true;
}

bool ShowDeviceDetailResponse::accountIsSet() const
{
    return accountIsSet_;
}

void ShowDeviceDetailResponse::unsetaccount()
{
    accountIsSet_ = false;
}

std::string ShowDeviceDetailResponse::getNumber() const
{
    return number_;
}

void ShowDeviceDetailResponse::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool ShowDeviceDetailResponse::numberIsSet() const
{
    return numberIsSet_;
}

void ShowDeviceDetailResponse::unsetnumber()
{
    numberIsSet_ = false;
}

int32_t ShowDeviceDetailResponse::getPrjCodeMode() const
{
    return prjCodeMode_;
}

void ShowDeviceDetailResponse::setPrjCodeMode(int32_t value)
{
    prjCodeMode_ = value;
    prjCodeModeIsSet_ = true;
}

bool ShowDeviceDetailResponse::prjCodeModeIsSet() const
{
    return prjCodeModeIsSet_;
}

void ShowDeviceDetailResponse::unsetprjCodeMode()
{
    prjCodeModeIsSet_ = false;
}

std::string ShowDeviceDetailResponse::getDeptCode() const
{
    return deptCode_;
}

void ShowDeviceDetailResponse::setDeptCode(const std::string& value)
{
    deptCode_ = value;
    deptCodeIsSet_ = true;
}

bool ShowDeviceDetailResponse::deptCodeIsSet() const
{
    return deptCodeIsSet_;
}

void ShowDeviceDetailResponse::unsetdeptCode()
{
    deptCodeIsSet_ = false;
}

std::string ShowDeviceDetailResponse::getDeptName() const
{
    return deptName_;
}

void ShowDeviceDetailResponse::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool ShowDeviceDetailResponse::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void ShowDeviceDetailResponse::unsetdeptName()
{
    deptNameIsSet_ = false;
}

std::string ShowDeviceDetailResponse::getDeptNamePath() const
{
    return deptNamePath_;
}

void ShowDeviceDetailResponse::setDeptNamePath(const std::string& value)
{
    deptNamePath_ = value;
    deptNamePathIsSet_ = true;
}

bool ShowDeviceDetailResponse::deptNamePathIsSet() const
{
    return deptNamePathIsSet_;
}

void ShowDeviceDetailResponse::unsetdeptNamePath()
{
    deptNamePathIsSet_ = false;
}

std::string ShowDeviceDetailResponse::getPhone() const
{
    return phone_;
}

void ShowDeviceDetailResponse::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool ShowDeviceDetailResponse::phoneIsSet() const
{
    return phoneIsSet_;
}

void ShowDeviceDetailResponse::unsetphone()
{
    phoneIsSet_ = false;
}

std::string ShowDeviceDetailResponse::getCountry() const
{
    return country_;
}

void ShowDeviceDetailResponse::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool ShowDeviceDetailResponse::countryIsSet() const
{
    return countryIsSet_;
}

void ShowDeviceDetailResponse::unsetcountry()
{
    countryIsSet_ = false;
}

std::string ShowDeviceDetailResponse::getEmail() const
{
    return email_;
}

void ShowDeviceDetailResponse::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool ShowDeviceDetailResponse::emailIsSet() const
{
    return emailIsSet_;
}

void ShowDeviceDetailResponse::unsetemail()
{
    emailIsSet_ = false;
}

std::string ShowDeviceDetailResponse::getDescription() const
{
    return description_;
}

void ShowDeviceDetailResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowDeviceDetailResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowDeviceDetailResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t ShowDeviceDetailResponse::getStatus() const
{
    return status_;
}

void ShowDeviceDetailResponse::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowDeviceDetailResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowDeviceDetailResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


