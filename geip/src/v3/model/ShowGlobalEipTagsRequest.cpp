

#include "huaweicloud/geip/v3/model/ShowGlobalEipTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ShowGlobalEipTagsRequest::ShowGlobalEipTagsRequest()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
}

ShowGlobalEipTagsRequest::~ShowGlobalEipTagsRequest() = default;

void ShowGlobalEipTagsRequest::validate()
{
}

web::json::value ShowGlobalEipTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }

    return val;
}
bool ShowGlobalEipTagsRequest::fromJson(const web::json::value& val)
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


std::string ShowGlobalEipTagsRequest::getResourceId() const
{
    return resourceId_;
}

void ShowGlobalEipTagsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ShowGlobalEipTagsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ShowGlobalEipTagsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

}
}
}
}
}


