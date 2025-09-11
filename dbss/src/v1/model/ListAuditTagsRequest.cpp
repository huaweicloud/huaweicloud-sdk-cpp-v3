

#include "huaweicloud/dbss/v1/model/ListAuditTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditTagsRequest::ListAuditTagsRequest()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
}

ListAuditTagsRequest::~ListAuditTagsRequest() = default;

void ListAuditTagsRequest::validate()
{
}

web::json::value ListAuditTagsRequest::toJson() const
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
bool ListAuditTagsRequest::fromJson(const web::json::value& val)
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


std::string ListAuditTagsRequest::getResourceType() const
{
    return resourceType_;
}

void ListAuditTagsRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ListAuditTagsRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ListAuditTagsRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string ListAuditTagsRequest::getResourceId() const
{
    return resourceId_;
}

void ListAuditTagsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ListAuditTagsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ListAuditTagsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

}
}
}
}
}


