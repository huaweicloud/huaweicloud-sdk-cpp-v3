

#include "huaweicloud/geip/v3/model/AddInternetBandwidthTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




AddInternetBandwidthTagsRequest::AddInternetBandwidthTagsRequest()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddInternetBandwidthTagsRequest::~AddInternetBandwidthTagsRequest() = default;

void AddInternetBandwidthTagsRequest::validate()
{
}

web::json::value AddInternetBandwidthTagsRequest::toJson() const
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
bool AddInternetBandwidthTagsRequest::fromJson(const web::json::value& val)
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
            CreateV2TagRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddInternetBandwidthTagsRequest::getResourceId() const
{
    return resourceId_;
}

void AddInternetBandwidthTagsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool AddInternetBandwidthTagsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void AddInternetBandwidthTagsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

CreateV2TagRequestBody AddInternetBandwidthTagsRequest::getBody() const
{
    return body_;
}

void AddInternetBandwidthTagsRequest::setBody(const CreateV2TagRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddInternetBandwidthTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddInternetBandwidthTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


