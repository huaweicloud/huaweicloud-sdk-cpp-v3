

#include "huaweicloud/dbss/v1/model/CountResourceInstanceByTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CountResourceInstanceByTagRequest::CountResourceInstanceByTagRequest()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CountResourceInstanceByTagRequest::~CountResourceInstanceByTagRequest() = default;

void CountResourceInstanceByTagRequest::validate()
{
}

web::json::value CountResourceInstanceByTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CountResourceInstanceByTagRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ResourceInstanceTagRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CountResourceInstanceByTagRequest::getResourceType() const
{
    return resourceType_;
}

void CountResourceInstanceByTagRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool CountResourceInstanceByTagRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void CountResourceInstanceByTagRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

ResourceInstanceTagRequest CountResourceInstanceByTagRequest::getBody() const
{
    return body_;
}

void CountResourceInstanceByTagRequest::setBody(const ResourceInstanceTagRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CountResourceInstanceByTagRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CountResourceInstanceByTagRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


