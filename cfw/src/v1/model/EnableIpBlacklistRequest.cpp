

#include "huaweicloud/cfw/v1/model/EnableIpBlacklistRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




EnableIpBlacklistRequest::EnableIpBlacklistRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

EnableIpBlacklistRequest::~EnableIpBlacklistRequest() = default;

void EnableIpBlacklistRequest::validate()
{
}

web::json::value EnableIpBlacklistRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool EnableIpBlacklistRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            IpBlacklistEnableDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string EnableIpBlacklistRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void EnableIpBlacklistRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool EnableIpBlacklistRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void EnableIpBlacklistRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

IpBlacklistEnableDto EnableIpBlacklistRequest::getBody() const
{
    return body_;
}

void EnableIpBlacklistRequest::setBody(const IpBlacklistEnableDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool EnableIpBlacklistRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void EnableIpBlacklistRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


