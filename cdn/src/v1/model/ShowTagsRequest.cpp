

#include "huaweicloud/cdn/v1/model/ShowTagsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




ShowTagsRequest::ShowTagsRequest()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
}

ShowTagsRequest::~ShowTagsRequest() = default;

void ShowTagsRequest::validate()
{
}

web::json::value ShowTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }

    return val;
}

bool ShowTagsRequest::fromJson(const web::json::value& val)
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

std::string ShowTagsRequest::getResourceId() const
{
    return resourceId_;
}

void ShowTagsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ShowTagsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ShowTagsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

}
}
}
}
}


