

#include "huaweicloud/functiongraph/v2/model/ShowProjectTagsListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowProjectTagsListRequest::ShowProjectTagsListRequest()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ShowProjectTagsListRequest::~ShowProjectTagsListRequest() = default;

void ShowProjectTagsListRequest::validate()
{
}

web::json::value ShowProjectTagsListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ShowProjectTagsListRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


std::string ShowProjectTagsListRequest::getResourceType() const
{
    return resourceType_;
}

void ShowProjectTagsListRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ShowProjectTagsListRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ShowProjectTagsListRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string ShowProjectTagsListRequest::getContentType() const
{
    return contentType_;
}

void ShowProjectTagsListRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ShowProjectTagsListRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ShowProjectTagsListRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


