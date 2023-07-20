

#include "huaweicloud/gaussdbfornosql/v3/model/ModifyPublicIpRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ModifyPublicIpRequestBody::ModifyPublicIpRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
    publicIp_ = "";
    publicIpIsSet_ = false;
    publicIpId_ = "";
    publicIpIdIsSet_ = false;
}

ModifyPublicIpRequestBody::~ModifyPublicIpRequestBody() = default;

void ModifyPublicIpRequestBody::validate()
{
}

web::json::value ModifyPublicIpRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(publicIpIsSet_) {
        val[utility::conversions::to_string_t("public_ip")] = ModelBase::toJson(publicIp_);
    }
    if(publicIpIdIsSet_) {
        val[utility::conversions::to_string_t("public_ip_id")] = ModelBase::toJson(publicIpId_);
    }

    return val;
}

bool ModifyPublicIpRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIpId(refVal);
        }
    }
    return ok;
}

std::string ModifyPublicIpRequestBody::getAction() const
{
    return action_;
}

void ModifyPublicIpRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ModifyPublicIpRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void ModifyPublicIpRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::string ModifyPublicIpRequestBody::getPublicIp() const
{
    return publicIp_;
}

void ModifyPublicIpRequestBody::setPublicIp(const std::string& value)
{
    publicIp_ = value;
    publicIpIsSet_ = true;
}

bool ModifyPublicIpRequestBody::publicIpIsSet() const
{
    return publicIpIsSet_;
}

void ModifyPublicIpRequestBody::unsetpublicIp()
{
    publicIpIsSet_ = false;
}

std::string ModifyPublicIpRequestBody::getPublicIpId() const
{
    return publicIpId_;
}

void ModifyPublicIpRequestBody::setPublicIpId(const std::string& value)
{
    publicIpId_ = value;
    publicIpIdIsSet_ = true;
}

bool ModifyPublicIpRequestBody::publicIpIdIsSet() const
{
    return publicIpIdIsSet_;
}

void ModifyPublicIpRequestBody::unsetpublicIpId()
{
    publicIpIdIsSet_ = false;
}

}
}
}
}
}


