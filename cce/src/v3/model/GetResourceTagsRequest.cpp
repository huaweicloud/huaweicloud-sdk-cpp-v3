

#include "huaweicloud/cce/v3/model/GetResourceTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




GetResourceTagsRequest::GetResourceTagsRequest()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
}

GetResourceTagsRequest::~GetResourceTagsRequest() = default;

void GetResourceTagsRequest::validate()
{
}

web::json::value GetResourceTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }

    return val;
}
bool GetResourceTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
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


std::string GetResourceTagsRequest::getResourceType() const
{
    return resourceType_;
}

void GetResourceTagsRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool GetResourceTagsRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void GetResourceTagsRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string GetResourceTagsRequest::getResourceId() const
{
    return resourceId_;
}

void GetResourceTagsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool GetResourceTagsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void GetResourceTagsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

}
}
}
}
}


