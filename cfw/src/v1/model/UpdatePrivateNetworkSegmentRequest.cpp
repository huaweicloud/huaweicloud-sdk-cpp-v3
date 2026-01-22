

#include "huaweicloud/cfw/v1/model/UpdatePrivateNetworkSegmentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdatePrivateNetworkSegmentRequest::UpdatePrivateNetworkSegmentRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePrivateNetworkSegmentRequest::~UpdatePrivateNetworkSegmentRequest() = default;

void UpdatePrivateNetworkSegmentRequest::validate()
{
}

web::json::value UpdatePrivateNetworkSegmentRequest::toJson() const
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
bool UpdatePrivateNetworkSegmentRequest::fromJson(const web::json::value& val)
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
            PrivateNetworkSegmentVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdatePrivateNetworkSegmentRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void UpdatePrivateNetworkSegmentRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool UpdatePrivateNetworkSegmentRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void UpdatePrivateNetworkSegmentRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

PrivateNetworkSegmentVO UpdatePrivateNetworkSegmentRequest::getBody() const
{
    return body_;
}

void UpdatePrivateNetworkSegmentRequest::setBody(const PrivateNetworkSegmentVO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePrivateNetworkSegmentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePrivateNetworkSegmentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


