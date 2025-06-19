

#include "huaweicloud/cfw/v1/model/DeleteIpBlacklistRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteIpBlacklistRequest::DeleteIpBlacklistRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteIpBlacklistRequest::~DeleteIpBlacklistRequest() = default;

void DeleteIpBlacklistRequest::validate()
{
}

web::json::value DeleteIpBlacklistRequest::toJson() const
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
bool DeleteIpBlacklistRequest::fromJson(const web::json::value& val)
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
            IpBlacklistDeleteDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteIpBlacklistRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void DeleteIpBlacklistRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool DeleteIpBlacklistRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void DeleteIpBlacklistRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

IpBlacklistDeleteDto DeleteIpBlacklistRequest::getBody() const
{
    return body_;
}

void DeleteIpBlacklistRequest::setBody(const IpBlacklistDeleteDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteIpBlacklistRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteIpBlacklistRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


