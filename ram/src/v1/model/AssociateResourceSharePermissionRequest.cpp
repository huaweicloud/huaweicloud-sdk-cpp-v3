

#include "huaweicloud/ram/v1/model/AssociateResourceSharePermissionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




AssociateResourceSharePermissionRequest::AssociateResourceSharePermissionRequest()
{
    resourceShareId_ = "";
    resourceShareIdIsSet_ = false;
    bodyIsSet_ = false;
}

AssociateResourceSharePermissionRequest::~AssociateResourceSharePermissionRequest() = default;

void AssociateResourceSharePermissionRequest::validate()
{
}

web::json::value AssociateResourceSharePermissionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceShareIdIsSet_) {
        val[utility::conversions::to_string_t("resource_share_id")] = ModelBase::toJson(resourceShareId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AssociateResourceSharePermissionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_share_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_share_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceShareId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AssociatePermissionReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AssociateResourceSharePermissionRequest::getResourceShareId() const
{
    return resourceShareId_;
}

void AssociateResourceSharePermissionRequest::setResourceShareId(const std::string& value)
{
    resourceShareId_ = value;
    resourceShareIdIsSet_ = true;
}

bool AssociateResourceSharePermissionRequest::resourceShareIdIsSet() const
{
    return resourceShareIdIsSet_;
}

void AssociateResourceSharePermissionRequest::unsetresourceShareId()
{
    resourceShareIdIsSet_ = false;
}

AssociatePermissionReqBody AssociateResourceSharePermissionRequest::getBody() const
{
    return body_;
}

void AssociateResourceSharePermissionRequest::setBody(const AssociatePermissionReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AssociateResourceSharePermissionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AssociateResourceSharePermissionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


