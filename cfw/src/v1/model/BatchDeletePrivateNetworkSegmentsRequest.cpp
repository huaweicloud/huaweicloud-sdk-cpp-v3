

#include "huaweicloud/cfw/v1/model/BatchDeletePrivateNetworkSegmentsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchDeletePrivateNetworkSegmentsRequest::BatchDeletePrivateNetworkSegmentsRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeletePrivateNetworkSegmentsRequest::~BatchDeletePrivateNetworkSegmentsRequest() = default;

void BatchDeletePrivateNetworkSegmentsRequest::validate()
{
}

web::json::value BatchDeletePrivateNetworkSegmentsRequest::toJson() const
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
bool BatchDeletePrivateNetworkSegmentsRequest::fromJson(const web::json::value& val)
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
            DeletePrivateNetworkSegmentsDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeletePrivateNetworkSegmentsRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void BatchDeletePrivateNetworkSegmentsRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool BatchDeletePrivateNetworkSegmentsRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void BatchDeletePrivateNetworkSegmentsRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

DeletePrivateNetworkSegmentsDto BatchDeletePrivateNetworkSegmentsRequest::getBody() const
{
    return body_;
}

void BatchDeletePrivateNetworkSegmentsRequest::setBody(const DeletePrivateNetworkSegmentsDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeletePrivateNetworkSegmentsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeletePrivateNetworkSegmentsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


