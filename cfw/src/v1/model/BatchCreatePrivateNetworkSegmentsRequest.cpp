

#include "huaweicloud/cfw/v1/model/BatchCreatePrivateNetworkSegmentsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchCreatePrivateNetworkSegmentsRequest::BatchCreatePrivateNetworkSegmentsRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreatePrivateNetworkSegmentsRequest::~BatchCreatePrivateNetworkSegmentsRequest() = default;

void BatchCreatePrivateNetworkSegmentsRequest::validate()
{
}

web::json::value BatchCreatePrivateNetworkSegmentsRequest::toJson() const
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
bool BatchCreatePrivateNetworkSegmentsRequest::fromJson(const web::json::value& val)
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
            EwPrivateNetworkSegmentsDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchCreatePrivateNetworkSegmentsRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void BatchCreatePrivateNetworkSegmentsRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool BatchCreatePrivateNetworkSegmentsRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void BatchCreatePrivateNetworkSegmentsRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

EwPrivateNetworkSegmentsDto BatchCreatePrivateNetworkSegmentsRequest::getBody() const
{
    return body_;
}

void BatchCreatePrivateNetworkSegmentsRequest::setBody(const EwPrivateNetworkSegmentsDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreatePrivateNetworkSegmentsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreatePrivateNetworkSegmentsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


