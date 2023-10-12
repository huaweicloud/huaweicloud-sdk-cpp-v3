

#include "huaweicloud/gaussdbforopengauss/v3/model/BindEIPRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




BindEIPRequestBody::BindEIPRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
    publicIp_ = "";
    publicIpIsSet_ = false;
    publicIpId_ = "";
    publicIpIdIsSet_ = false;
}

BindEIPRequestBody::~BindEIPRequestBody() = default;

void BindEIPRequestBody::validate()
{
}

web::json::value BindEIPRequestBody::toJson() const
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
bool BindEIPRequestBody::fromJson(const web::json::value& val)
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


std::string BindEIPRequestBody::getAction() const
{
    return action_;
}

void BindEIPRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BindEIPRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void BindEIPRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::string BindEIPRequestBody::getPublicIp() const
{
    return publicIp_;
}

void BindEIPRequestBody::setPublicIp(const std::string& value)
{
    publicIp_ = value;
    publicIpIsSet_ = true;
}

bool BindEIPRequestBody::publicIpIsSet() const
{
    return publicIpIsSet_;
}

void BindEIPRequestBody::unsetpublicIp()
{
    publicIpIsSet_ = false;
}

std::string BindEIPRequestBody::getPublicIpId() const
{
    return publicIpId_;
}

void BindEIPRequestBody::setPublicIpId(const std::string& value)
{
    publicIpId_ = value;
    publicIpIdIsSet_ = true;
}

bool BindEIPRequestBody::publicIpIdIsSet() const
{
    return publicIpIdIsSet_;
}

void BindEIPRequestBody::unsetpublicIpId()
{
    publicIpIdIsSet_ = false;
}

}
}
}
}
}


