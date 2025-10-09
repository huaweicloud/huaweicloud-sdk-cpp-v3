

#include "huaweicloud/cce/v3/model/GetCustomizeTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




GetCustomizeTagsRequest::GetCustomizeTagsRequest()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
}

GetCustomizeTagsRequest::~GetCustomizeTagsRequest() = default;

void GetCustomizeTagsRequest::validate()
{
}

web::json::value GetCustomizeTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }

    return val;
}
bool GetCustomizeTagsRequest::fromJson(const web::json::value& val)
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


std::string GetCustomizeTagsRequest::getResourceType() const
{
    return resourceType_;
}

void GetCustomizeTagsRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool GetCustomizeTagsRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void GetCustomizeTagsRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

}
}
}
}
}


