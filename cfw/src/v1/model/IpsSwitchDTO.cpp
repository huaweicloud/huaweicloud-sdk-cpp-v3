

#include "huaweicloud/cfw/v1/model/IpsSwitchDTO.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




IpsSwitchDTO::IpsSwitchDTO()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    ipsType_ = 0;
    ipsTypeIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

IpsSwitchDTO::~IpsSwitchDTO() = default;

void IpsSwitchDTO::validate()
{
}

web::json::value IpsSwitchDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(ipsTypeIsSet_) {
        val[utility::conversions::to_string_t("ips_type")] = ModelBase::toJson(ipsType_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}

bool IpsSwitchDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsType(refVal);
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

std::string IpsSwitchDTO::getObjectId() const
{
    return objectId_;
}

void IpsSwitchDTO::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool IpsSwitchDTO::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void IpsSwitchDTO::unsetobjectId()
{
    objectIdIsSet_ = false;
}

int32_t IpsSwitchDTO::getIpsType() const
{
    return ipsType_;
}

void IpsSwitchDTO::setIpsType(int32_t value)
{
    ipsType_ = value;
    ipsTypeIsSet_ = true;
}

bool IpsSwitchDTO::ipsTypeIsSet() const
{
    return ipsTypeIsSet_;
}

void IpsSwitchDTO::unsetipsType()
{
    ipsTypeIsSet_ = false;
}

int32_t IpsSwitchDTO::getStatus() const
{
    return status_;
}

void IpsSwitchDTO::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool IpsSwitchDTO::statusIsSet() const
{
    return statusIsSet_;
}

void IpsSwitchDTO::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


