

#include "huaweicloud/ram/v1/model/DisassociateResourceShareRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




DisassociateResourceShareRequest::DisassociateResourceShareRequest()
{
    resourceShareId_ = "";
    resourceShareIdIsSet_ = false;
    bodyIsSet_ = false;
}

DisassociateResourceShareRequest::~DisassociateResourceShareRequest() = default;

void DisassociateResourceShareRequest::validate()
{
}

web::json::value DisassociateResourceShareRequest::toJson() const
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
bool DisassociateResourceShareRequest::fromJson(const web::json::value& val)
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
            ResourceShareAssociationReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DisassociateResourceShareRequest::getResourceShareId() const
{
    return resourceShareId_;
}

void DisassociateResourceShareRequest::setResourceShareId(const std::string& value)
{
    resourceShareId_ = value;
    resourceShareIdIsSet_ = true;
}

bool DisassociateResourceShareRequest::resourceShareIdIsSet() const
{
    return resourceShareIdIsSet_;
}

void DisassociateResourceShareRequest::unsetresourceShareId()
{
    resourceShareIdIsSet_ = false;
}

ResourceShareAssociationReqBody DisassociateResourceShareRequest::getBody() const
{
    return body_;
}

void DisassociateResourceShareRequest::setBody(const ResourceShareAssociationReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DisassociateResourceShareRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DisassociateResourceShareRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


