

#include "huaweicloud/geip/v3/model/AssociateInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




AssociateInstanceRequest::AssociateInstanceRequest()
{
    bindingInstanceService_ = "";
    bindingInstanceServiceIsSet_ = false;
    globalEipId_ = "";
    globalEipIdIsSet_ = false;
    bodyIsSet_ = false;
}

AssociateInstanceRequest::~AssociateInstanceRequest() = default;

void AssociateInstanceRequest::validate()
{
}

web::json::value AssociateInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bindingInstanceServiceIsSet_) {
        val[utility::conversions::to_string_t("binding-instance-service")] = ModelBase::toJson(bindingInstanceService_);
    }
    if(globalEipIdIsSet_) {
        val[utility::conversions::to_string_t("global_eip_id")] = ModelBase::toJson(globalEipId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AssociateInstanceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("binding-instance-service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("binding-instance-service"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBindingInstanceService(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("global_eip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global_eip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalEipId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AssociateInstanceGlobalEipRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AssociateInstanceRequest::getBindingInstanceService() const
{
    return bindingInstanceService_;
}

void AssociateInstanceRequest::setBindingInstanceService(const std::string& value)
{
    bindingInstanceService_ = value;
    bindingInstanceServiceIsSet_ = true;
}

bool AssociateInstanceRequest::bindingInstanceServiceIsSet() const
{
    return bindingInstanceServiceIsSet_;
}

void AssociateInstanceRequest::unsetbindingInstanceService()
{
    bindingInstanceServiceIsSet_ = false;
}

std::string AssociateInstanceRequest::getGlobalEipId() const
{
    return globalEipId_;
}

void AssociateInstanceRequest::setGlobalEipId(const std::string& value)
{
    globalEipId_ = value;
    globalEipIdIsSet_ = true;
}

bool AssociateInstanceRequest::globalEipIdIsSet() const
{
    return globalEipIdIsSet_;
}

void AssociateInstanceRequest::unsetglobalEipId()
{
    globalEipIdIsSet_ = false;
}

AssociateInstanceGlobalEipRequestBody AssociateInstanceRequest::getBody() const
{
    return body_;
}

void AssociateInstanceRequest::setBody(const AssociateInstanceGlobalEipRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AssociateInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AssociateInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


