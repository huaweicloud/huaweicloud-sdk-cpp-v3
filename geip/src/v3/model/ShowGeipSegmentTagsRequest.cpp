

#include "huaweicloud/geip/v3/model/ShowGeipSegmentTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ShowGeipSegmentTagsRequest::ShowGeipSegmentTagsRequest()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
}

ShowGeipSegmentTagsRequest::~ShowGeipSegmentTagsRequest() = default;

void ShowGeipSegmentTagsRequest::validate()
{
}

web::json::value ShowGeipSegmentTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }

    return val;
}
bool ShowGeipSegmentTagsRequest::fromJson(const web::json::value& val)
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


std::string ShowGeipSegmentTagsRequest::getResourceId() const
{
    return resourceId_;
}

void ShowGeipSegmentTagsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ShowGeipSegmentTagsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ShowGeipSegmentTagsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

}
}
}
}
}


