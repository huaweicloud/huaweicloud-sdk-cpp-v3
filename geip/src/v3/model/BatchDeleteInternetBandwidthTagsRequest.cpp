

#include "huaweicloud/geip/v3/model/BatchDeleteInternetBandwidthTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchDeleteInternetBandwidthTagsRequest::BatchDeleteInternetBandwidthTagsRequest()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteInternetBandwidthTagsRequest::~BatchDeleteInternetBandwidthTagsRequest() = default;

void BatchDeleteInternetBandwidthTagsRequest::validate()
{
}

web::json::value BatchDeleteInternetBandwidthTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDeleteInternetBandwidthTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchDeleteV2RequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteInternetBandwidthTagsRequest::getResourceId() const
{
    return resourceId_;
}

void BatchDeleteInternetBandwidthTagsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool BatchDeleteInternetBandwidthTagsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void BatchDeleteInternetBandwidthTagsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

BatchDeleteV2RequestBody BatchDeleteInternetBandwidthTagsRequest::getBody() const
{
    return body_;
}

void BatchDeleteInternetBandwidthTagsRequest::setBody(const BatchDeleteV2RequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteInternetBandwidthTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteInternetBandwidthTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


