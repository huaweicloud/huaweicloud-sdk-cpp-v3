

#include "huaweicloud/smn/v2/model/ListResourceTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListResourceTagsRequest::ListResourceTagsRequest()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
}

ListResourceTagsRequest::~ListResourceTagsRequest() = default;

void ListResourceTagsRequest::validate()
{
}

web::json::value ListResourceTagsRequest::toJson() const
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
bool ListResourceTagsRequest::fromJson(const web::json::value& val)
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


std::string ListResourceTagsRequest::getResourceType() const
{
    return resourceType_;
}

void ListResourceTagsRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ListResourceTagsRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ListResourceTagsRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string ListResourceTagsRequest::getResourceId() const
{
    return resourceId_;
}

void ListResourceTagsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ListResourceTagsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ListResourceTagsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

}
}
}
}
}


