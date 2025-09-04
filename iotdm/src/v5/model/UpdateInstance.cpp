

#include "huaweicloud/iotdm/v5/model/UpdateInstance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




UpdateInstance::UpdateInstance()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    operateWindowIsSet_ = false;
    forwardingInfoIsSet_ = false;
    accessInfoIsSet_ = false;
}

UpdateInstance::~UpdateInstance() = default;

void UpdateInstance::validate()
{
}

web::json::value UpdateInstance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(operateWindowIsSet_) {
        val[utility::conversions::to_string_t("operate_window")] = ModelBase::toJson(operateWindow_);
    }
    if(forwardingInfoIsSet_) {
        val[utility::conversions::to_string_t("forwarding_info")] = ModelBase::toJson(forwardingInfo_);
    }
    if(accessInfoIsSet_) {
        val[utility::conversions::to_string_t("access_info")] = ModelBase::toJson(accessInfo_);
    }

    return val;
}
bool UpdateInstance::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operate_window"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate_window"));
        if(!fieldValue.is_null())
        {
            OperateWindow refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateWindow(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("forwarding_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("forwarding_info"));
        if(!fieldValue.is_null())
        {
            UpdateForwardingInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForwardingInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_info"));
        if(!fieldValue.is_null())
        {
            UpdateAccessInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessInfo(refVal);
        }
    }
    return ok;
}


std::string UpdateInstance::getName() const
{
    return name_;
}

void UpdateInstance::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateInstance::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateInstance::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateInstance::getDescription() const
{
    return description_;
}

void UpdateInstance::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateInstance::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateInstance::unsetdescription()
{
    descriptionIsSet_ = false;
}

OperateWindow UpdateInstance::getOperateWindow() const
{
    return operateWindow_;
}

void UpdateInstance::setOperateWindow(const OperateWindow& value)
{
    operateWindow_ = value;
    operateWindowIsSet_ = true;
}

bool UpdateInstance::operateWindowIsSet() const
{
    return operateWindowIsSet_;
}

void UpdateInstance::unsetoperateWindow()
{
    operateWindowIsSet_ = false;
}

UpdateForwardingInfo UpdateInstance::getForwardingInfo() const
{
    return forwardingInfo_;
}

void UpdateInstance::setForwardingInfo(const UpdateForwardingInfo& value)
{
    forwardingInfo_ = value;
    forwardingInfoIsSet_ = true;
}

bool UpdateInstance::forwardingInfoIsSet() const
{
    return forwardingInfoIsSet_;
}

void UpdateInstance::unsetforwardingInfo()
{
    forwardingInfoIsSet_ = false;
}

UpdateAccessInfo UpdateInstance::getAccessInfo() const
{
    return accessInfo_;
}

void UpdateInstance::setAccessInfo(const UpdateAccessInfo& value)
{
    accessInfo_ = value;
    accessInfoIsSet_ = true;
}

bool UpdateInstance::accessInfoIsSet() const
{
    return accessInfoIsSet_;
}

void UpdateInstance::unsetaccessInfo()
{
    accessInfoIsSet_ = false;
}

}
}
}
}
}


