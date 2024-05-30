

#include "huaweicloud/organizations/v1/model/UntagResourceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




UntagResourceRequest::UntagResourceRequest()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UntagResourceRequest::~UntagResourceRequest() = default;

void UntagResourceRequest::validate()
{
}

web::json::value UntagResourceRequest::toJson() const
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
bool UntagResourceRequest::fromJson(const web::json::value& val)
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
            UntagResourceReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UntagResourceRequest::getResourceId() const
{
    return resourceId_;
}

void UntagResourceRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool UntagResourceRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void UntagResourceRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

UntagResourceReqBody UntagResourceRequest::getBody() const
{
    return body_;
}

void UntagResourceRequest::setBody(const UntagResourceReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UntagResourceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UntagResourceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


