

#include "huaweicloud/dbss/v1/model/ListProjectResourceTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListProjectResourceTagsRequest::ListProjectResourceTagsRequest()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
}

ListProjectResourceTagsRequest::~ListProjectResourceTagsRequest() = default;

void ListProjectResourceTagsRequest::validate()
{
}

web::json::value ListProjectResourceTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }

    return val;
}
bool ListProjectResourceTagsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListProjectResourceTagsRequest::getResourceType() const
{
    return resourceType_;
}

void ListProjectResourceTagsRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ListProjectResourceTagsRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ListProjectResourceTagsRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

}
}
}
}
}


