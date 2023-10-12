

#include "huaweicloud/smn/v2/model/ListProjectTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListProjectTagsRequest::ListProjectTagsRequest()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
}

ListProjectTagsRequest::~ListProjectTagsRequest() = default;

void ListProjectTagsRequest::validate()
{
}

web::json::value ListProjectTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }

    return val;
}
bool ListProjectTagsRequest::fromJson(const web::json::value& val)
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


std::string ListProjectTagsRequest::getResourceType() const
{
    return resourceType_;
}

void ListProjectTagsRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ListProjectTagsRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ListProjectTagsRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

}
}
}
}
}


