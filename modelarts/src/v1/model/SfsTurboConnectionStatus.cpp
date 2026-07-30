

#include "huaweicloud/modelarts/v1/model/SfsTurboConnectionStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




SfsTurboConnectionStatus::SfsTurboConnectionStatus()
{
    name_ = "";
    nameIsSet_ = false;
    sfsId_ = "";
    sfsIdIsSet_ = false;
    connectionType_ = "";
    connectionTypeIsSet_ = false;
    ipAddr_ = "";
    ipAddrIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

SfsTurboConnectionStatus::~SfsTurboConnectionStatus() = default;

void SfsTurboConnectionStatus::validate()
{
}

web::json::value SfsTurboConnectionStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sfsIdIsSet_) {
        val[utility::conversions::to_string_t("sfsId")] = ModelBase::toJson(sfsId_);
    }
    if(connectionTypeIsSet_) {
        val[utility::conversions::to_string_t("connectionType")] = ModelBase::toJson(connectionType_);
    }
    if(ipAddrIsSet_) {
        val[utility::conversions::to_string_t("ipAddr")] = ModelBase::toJson(ipAddr_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SfsTurboConnectionStatus::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sfsId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sfsId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSfsId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("connectionType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connectionType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnectionType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipAddr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipAddr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpAddr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string SfsTurboConnectionStatus::getName() const
{
    return name_;
}

void SfsTurboConnectionStatus::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SfsTurboConnectionStatus::nameIsSet() const
{
    return nameIsSet_;
}

void SfsTurboConnectionStatus::unsetname()
{
    nameIsSet_ = false;
}

std::string SfsTurboConnectionStatus::getSfsId() const
{
    return sfsId_;
}

void SfsTurboConnectionStatus::setSfsId(const std::string& value)
{
    sfsId_ = value;
    sfsIdIsSet_ = true;
}

bool SfsTurboConnectionStatus::sfsIdIsSet() const
{
    return sfsIdIsSet_;
}

void SfsTurboConnectionStatus::unsetsfsId()
{
    sfsIdIsSet_ = false;
}

std::string SfsTurboConnectionStatus::getConnectionType() const
{
    return connectionType_;
}

void SfsTurboConnectionStatus::setConnectionType(const std::string& value)
{
    connectionType_ = value;
    connectionTypeIsSet_ = true;
}

bool SfsTurboConnectionStatus::connectionTypeIsSet() const
{
    return connectionTypeIsSet_;
}

void SfsTurboConnectionStatus::unsetconnectionType()
{
    connectionTypeIsSet_ = false;
}

std::string SfsTurboConnectionStatus::getIpAddr() const
{
    return ipAddr_;
}

void SfsTurboConnectionStatus::setIpAddr(const std::string& value)
{
    ipAddr_ = value;
    ipAddrIsSet_ = true;
}

bool SfsTurboConnectionStatus::ipAddrIsSet() const
{
    return ipAddrIsSet_;
}

void SfsTurboConnectionStatus::unsetipAddr()
{
    ipAddrIsSet_ = false;
}

std::string SfsTurboConnectionStatus::getStatus() const
{
    return status_;
}

void SfsTurboConnectionStatus::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SfsTurboConnectionStatus::statusIsSet() const
{
    return statusIsSet_;
}

void SfsTurboConnectionStatus::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


