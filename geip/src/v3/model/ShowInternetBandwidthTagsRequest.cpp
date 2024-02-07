

#include "huaweicloud/geip/v3/model/ShowInternetBandwidthTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ShowInternetBandwidthTagsRequest::ShowInternetBandwidthTagsRequest()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
}

ShowInternetBandwidthTagsRequest::~ShowInternetBandwidthTagsRequest() = default;

void ShowInternetBandwidthTagsRequest::validate()
{
}

web::json::value ShowInternetBandwidthTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }

    return val;
}
bool ShowInternetBandwidthTagsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowInternetBandwidthTagsRequest::getResourceId() const
{
    return resourceId_;
}

void ShowInternetBandwidthTagsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ShowInternetBandwidthTagsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ShowInternetBandwidthTagsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

}
}
}
}
}


