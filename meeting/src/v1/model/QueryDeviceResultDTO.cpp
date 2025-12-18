

#include "huaweicloud/meeting/v1/model/QueryDeviceResultDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




QueryDeviceResultDTO::QueryDeviceResultDTO()
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

QueryDeviceResultDTO::~QueryDeviceResultDTO() = default;

void QueryDeviceResultDTO::validate()
{
}

web::json::value QueryDeviceResultDTO::toJson() const
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
bool QueryDeviceResultDTO::fromJson(const web::json::value& val)
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


std::string QueryDeviceResultDTO::getName() const
{
    return name_;
}

void QueryDeviceResultDTO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool QueryDeviceResultDTO::nameIsSet() const
{
    return nameIsSet_;
}

void QueryDeviceResultDTO::unsetname()
{
    nameIsSet_ = false;
}

std::string QueryDeviceResultDTO::getType() const
{
    return type_;
}

void QueryDeviceResultDTO::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool QueryDeviceResultDTO::typeIsSet() const
{
    return typeIsSet_;
}

void QueryDeviceResultDTO::unsettype()
{
    typeIsSet_ = false;
}

std::string QueryDeviceResultDTO::getModel() const
{
    return model_;
}

void QueryDeviceResultDTO::setModel(const std::string& value)
{
    model_ = value;
    modelIsSet_ = true;
}

bool QueryDeviceResultDTO::modelIsSet() const
{
    return modelIsSet_;
}

void QueryDeviceResultDTO::unsetmodel()
{
    modelIsSet_ = false;
}

std::string QueryDeviceResultDTO::getSn() const
{
    return sn_;
}

void QueryDeviceResultDTO::setSn(const std::string& value)
{
    sn_ = value;
    snIsSet_ = true;
}

bool QueryDeviceResultDTO::snIsSet() const
{
    return snIsSet_;
}

void QueryDeviceResultDTO::unsetsn()
{
    snIsSet_ = false;
}

std::string QueryDeviceResultDTO::getAccount() const
{
    return account_;
}

void QueryDeviceResultDTO::setAccount(const std::string& value)
{
    account_ = value;
    accountIsSet_ = true;
}

bool QueryDeviceResultDTO::accountIsSet() const
{
    return accountIsSet_;
}

void QueryDeviceResultDTO::unsetaccount()
{
    accountIsSet_ = false;
}

std::string QueryDeviceResultDTO::getNumber() const
{
    return number_;
}

void QueryDeviceResultDTO::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool QueryDeviceResultDTO::numberIsSet() const
{
    return numberIsSet_;
}

void QueryDeviceResultDTO::unsetnumber()
{
    numberIsSet_ = false;
}

int32_t QueryDeviceResultDTO::getPrjCodeMode() const
{
    return prjCodeMode_;
}

void QueryDeviceResultDTO::setPrjCodeMode(int32_t value)
{
    prjCodeMode_ = value;
    prjCodeModeIsSet_ = true;
}

bool QueryDeviceResultDTO::prjCodeModeIsSet() const
{
    return prjCodeModeIsSet_;
}

void QueryDeviceResultDTO::unsetprjCodeMode()
{
    prjCodeModeIsSet_ = false;
}

std::string QueryDeviceResultDTO::getDeptCode() const
{
    return deptCode_;
}

void QueryDeviceResultDTO::setDeptCode(const std::string& value)
{
    deptCode_ = value;
    deptCodeIsSet_ = true;
}

bool QueryDeviceResultDTO::deptCodeIsSet() const
{
    return deptCodeIsSet_;
}

void QueryDeviceResultDTO::unsetdeptCode()
{
    deptCodeIsSet_ = false;
}

std::string QueryDeviceResultDTO::getDeptName() const
{
    return deptName_;
}

void QueryDeviceResultDTO::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool QueryDeviceResultDTO::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void QueryDeviceResultDTO::unsetdeptName()
{
    deptNameIsSet_ = false;
}

std::string QueryDeviceResultDTO::getDeptNamePath() const
{
    return deptNamePath_;
}

void QueryDeviceResultDTO::setDeptNamePath(const std::string& value)
{
    deptNamePath_ = value;
    deptNamePathIsSet_ = true;
}

bool QueryDeviceResultDTO::deptNamePathIsSet() const
{
    return deptNamePathIsSet_;
}

void QueryDeviceResultDTO::unsetdeptNamePath()
{
    deptNamePathIsSet_ = false;
}

std::string QueryDeviceResultDTO::getPhone() const
{
    return phone_;
}

void QueryDeviceResultDTO::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool QueryDeviceResultDTO::phoneIsSet() const
{
    return phoneIsSet_;
}

void QueryDeviceResultDTO::unsetphone()
{
    phoneIsSet_ = false;
}

std::string QueryDeviceResultDTO::getCountry() const
{
    return country_;
}

void QueryDeviceResultDTO::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool QueryDeviceResultDTO::countryIsSet() const
{
    return countryIsSet_;
}

void QueryDeviceResultDTO::unsetcountry()
{
    countryIsSet_ = false;
}

std::string QueryDeviceResultDTO::getEmail() const
{
    return email_;
}

void QueryDeviceResultDTO::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool QueryDeviceResultDTO::emailIsSet() const
{
    return emailIsSet_;
}

void QueryDeviceResultDTO::unsetemail()
{
    emailIsSet_ = false;
}

std::string QueryDeviceResultDTO::getDescription() const
{
    return description_;
}

void QueryDeviceResultDTO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool QueryDeviceResultDTO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void QueryDeviceResultDTO::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t QueryDeviceResultDTO::getStatus() const
{
    return status_;
}

void QueryDeviceResultDTO::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool QueryDeviceResultDTO::statusIsSet() const
{
    return statusIsSet_;
}

void QueryDeviceResultDTO::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


