

#include "huaweicloud/organizations/v1/model/TagResourceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




TagResourceRequest::TagResourceRequest()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    bodyIsSet_ = false;
}

TagResourceRequest::~TagResourceRequest() = default;

void TagResourceRequest::validate()
{
}

web::json::value TagResourceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool TagResourceRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            TagResourceReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string TagResourceRequest::getResourceId() const
{
    return resourceId_;
}

void TagResourceRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool TagResourceRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void TagResourceRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

TagResourceReqBody TagResourceRequest::getBody() const
{
    return body_;
}

void TagResourceRequest::setBody(const TagResourceReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool TagResourceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void TagResourceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


