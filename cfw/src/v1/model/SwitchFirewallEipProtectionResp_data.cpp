

#include "huaweicloud/cfw/v1/model/SwitchFirewallEipProtectionResp_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




SwitchFirewallEipProtectionResp_data::SwitchFirewallEipProtectionResp_data()
{
    protectionStatus_ = 0;
    protectionStatusIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    objectId_ = "";
    objectIdIsSet_ = false;
}

SwitchFirewallEipProtectionResp_data::~SwitchFirewallEipProtectionResp_data() = default;

void SwitchFirewallEipProtectionResp_data::validate()
{
}

web::json::value SwitchFirewallEipProtectionResp_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protectionStatusIsSet_) {
        val[utility::conversions::to_string_t("protection_status")] = ModelBase::toJson(protectionStatus_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }

    return val;
}
bool SwitchFirewallEipProtectionResp_data::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("protection_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protection_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectionStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
        }
    }
    return ok;
}


int32_t SwitchFirewallEipProtectionResp_data::getProtectionStatus() const
{
    return protectionStatus_;
}

void SwitchFirewallEipProtectionResp_data::setProtectionStatus(int32_t value)
{
    protectionStatus_ = value;
    protectionStatusIsSet_ = true;
}

bool SwitchFirewallEipProtectionResp_data::protectionStatusIsSet() const
{
    return protectionStatusIsSet_;
}

void SwitchFirewallEipProtectionResp_data::unsetprotectionStatus()
{
    protectionStatusIsSet_ = false;
}

std::string SwitchFirewallEipProtectionResp_data::getId() const
{
    return id_;
}

void SwitchFirewallEipProtectionResp_data::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SwitchFirewallEipProtectionResp_data::idIsSet() const
{
    return idIsSet_;
}

void SwitchFirewallEipProtectionResp_data::unsetid()
{
    idIsSet_ = false;
}

std::string SwitchFirewallEipProtectionResp_data::getObjectId() const
{
    return objectId_;
}

void SwitchFirewallEipProtectionResp_data::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool SwitchFirewallEipProtectionResp_data::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void SwitchFirewallEipProtectionResp_data::unsetobjectId()
{
    objectIdIsSet_ = false;
}

}
}
}
}
}


