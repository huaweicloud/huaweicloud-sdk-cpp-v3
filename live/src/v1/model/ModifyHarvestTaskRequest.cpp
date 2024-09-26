

#include "huaweicloud/live/v1/model/ModifyHarvestTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyHarvestTaskRequest::ModifyHarvestTaskRequest()
{
    accessControlAllowInternal_ = "";
    accessControlAllowInternalIsSet_ = false;
    accessControlAllowExternal_ = "";
    accessControlAllowExternalIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyHarvestTaskRequest::~ModifyHarvestTaskRequest() = default;

void ModifyHarvestTaskRequest::validate()
{
}

web::json::value ModifyHarvestTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessControlAllowInternalIsSet_) {
        val[utility::conversions::to_string_t("Access-Control-Allow-Internal")] = ModelBase::toJson(accessControlAllowInternal_);
    }
    if(accessControlAllowExternalIsSet_) {
        val[utility::conversions::to_string_t("Access-Control-Allow-External")] = ModelBase::toJson(accessControlAllowExternal_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ModifyHarvestTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Access-Control-Allow-Internal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Access-Control-Allow-Internal"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessControlAllowInternal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Access-Control-Allow-External"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Access-Control-Allow-External"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessControlAllowExternal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModifyHarvestTaskRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyHarvestTaskRequest::getAccessControlAllowInternal() const
{
    return accessControlAllowInternal_;
}

void ModifyHarvestTaskRequest::setAccessControlAllowInternal(const std::string& value)
{
    accessControlAllowInternal_ = value;
    accessControlAllowInternalIsSet_ = true;
}

bool ModifyHarvestTaskRequest::accessControlAllowInternalIsSet() const
{
    return accessControlAllowInternalIsSet_;
}

void ModifyHarvestTaskRequest::unsetaccessControlAllowInternal()
{
    accessControlAllowInternalIsSet_ = false;
}

std::string ModifyHarvestTaskRequest::getAccessControlAllowExternal() const
{
    return accessControlAllowExternal_;
}

void ModifyHarvestTaskRequest::setAccessControlAllowExternal(const std::string& value)
{
    accessControlAllowExternal_ = value;
    accessControlAllowExternalIsSet_ = true;
}

bool ModifyHarvestTaskRequest::accessControlAllowExternalIsSet() const
{
    return accessControlAllowExternalIsSet_;
}

void ModifyHarvestTaskRequest::unsetaccessControlAllowExternal()
{
    accessControlAllowExternalIsSet_ = false;
}

ModifyHarvestTaskRequestBody ModifyHarvestTaskRequest::getBody() const
{
    return body_;
}

void ModifyHarvestTaskRequest::setBody(const ModifyHarvestTaskRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyHarvestTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyHarvestTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


