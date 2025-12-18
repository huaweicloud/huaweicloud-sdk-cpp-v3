

#include "huaweicloud/meeting/v1/model/AddDeviceDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AddDeviceDTO::AddDeviceDTO()
{
    name_ = "";
    nameIsSet_ = false;
    model_ = "";
    modelIsSet_ = false;
    sn_ = "";
    snIsSet_ = false;
    prjCodeMode_ = 0;
    prjCodeModeIsSet_ = false;
    deptCode_ = "";
    deptCodeIsSet_ = false;
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
    sendNotify_ = "";
    sendNotifyIsSet_ = false;
}

AddDeviceDTO::~AddDeviceDTO() = default;

void AddDeviceDTO::validate()
{
}

web::json::value AddDeviceDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(modelIsSet_) {
        val[utility::conversions::to_string_t("model")] = ModelBase::toJson(model_);
    }
    if(snIsSet_) {
        val[utility::conversions::to_string_t("sn")] = ModelBase::toJson(sn_);
    }
    if(prjCodeModeIsSet_) {
        val[utility::conversions::to_string_t("prjCodeMode")] = ModelBase::toJson(prjCodeMode_);
    }
    if(deptCodeIsSet_) {
        val[utility::conversions::to_string_t("deptCode")] = ModelBase::toJson(deptCode_);
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
    if(sendNotifyIsSet_) {
        val[utility::conversions::to_string_t("sendNotify")] = ModelBase::toJson(sendNotify_);
    }

    return val;
}
bool AddDeviceDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sendNotify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sendNotify"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSendNotify(refVal);
        }
    }
    return ok;
}


std::string AddDeviceDTO::getName() const
{
    return name_;
}

void AddDeviceDTO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AddDeviceDTO::nameIsSet() const
{
    return nameIsSet_;
}

void AddDeviceDTO::unsetname()
{
    nameIsSet_ = false;
}

std::string AddDeviceDTO::getModel() const
{
    return model_;
}

void AddDeviceDTO::setModel(const std::string& value)
{
    model_ = value;
    modelIsSet_ = true;
}

bool AddDeviceDTO::modelIsSet() const
{
    return modelIsSet_;
}

void AddDeviceDTO::unsetmodel()
{
    modelIsSet_ = false;
}

std::string AddDeviceDTO::getSn() const
{
    return sn_;
}

void AddDeviceDTO::setSn(const std::string& value)
{
    sn_ = value;
    snIsSet_ = true;
}

bool AddDeviceDTO::snIsSet() const
{
    return snIsSet_;
}

void AddDeviceDTO::unsetsn()
{
    snIsSet_ = false;
}

int32_t AddDeviceDTO::getPrjCodeMode() const
{
    return prjCodeMode_;
}

void AddDeviceDTO::setPrjCodeMode(int32_t value)
{
    prjCodeMode_ = value;
    prjCodeModeIsSet_ = true;
}

bool AddDeviceDTO::prjCodeModeIsSet() const
{
    return prjCodeModeIsSet_;
}

void AddDeviceDTO::unsetprjCodeMode()
{
    prjCodeModeIsSet_ = false;
}

std::string AddDeviceDTO::getDeptCode() const
{
    return deptCode_;
}

void AddDeviceDTO::setDeptCode(const std::string& value)
{
    deptCode_ = value;
    deptCodeIsSet_ = true;
}

bool AddDeviceDTO::deptCodeIsSet() const
{
    return deptCodeIsSet_;
}

void AddDeviceDTO::unsetdeptCode()
{
    deptCodeIsSet_ = false;
}

std::string AddDeviceDTO::getPhone() const
{
    return phone_;
}

void AddDeviceDTO::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool AddDeviceDTO::phoneIsSet() const
{
    return phoneIsSet_;
}

void AddDeviceDTO::unsetphone()
{
    phoneIsSet_ = false;
}

std::string AddDeviceDTO::getCountry() const
{
    return country_;
}

void AddDeviceDTO::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool AddDeviceDTO::countryIsSet() const
{
    return countryIsSet_;
}

void AddDeviceDTO::unsetcountry()
{
    countryIsSet_ = false;
}

std::string AddDeviceDTO::getEmail() const
{
    return email_;
}

void AddDeviceDTO::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool AddDeviceDTO::emailIsSet() const
{
    return emailIsSet_;
}

void AddDeviceDTO::unsetemail()
{
    emailIsSet_ = false;
}

std::string AddDeviceDTO::getDescription() const
{
    return description_;
}

void AddDeviceDTO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AddDeviceDTO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AddDeviceDTO::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t AddDeviceDTO::getStatus() const
{
    return status_;
}

void AddDeviceDTO::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AddDeviceDTO::statusIsSet() const
{
    return statusIsSet_;
}

void AddDeviceDTO::unsetstatus()
{
    statusIsSet_ = false;
}

std::string AddDeviceDTO::getSendNotify() const
{
    return sendNotify_;
}

void AddDeviceDTO::setSendNotify(const std::string& value)
{
    sendNotify_ = value;
    sendNotifyIsSet_ = true;
}

bool AddDeviceDTO::sendNotifyIsSet() const
{
    return sendNotifyIsSet_;
}

void AddDeviceDTO::unsetsendNotify()
{
    sendNotifyIsSet_ = false;
}

}
}
}
}
}


