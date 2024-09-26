

#include "huaweicloud/live/v1/model/CreateHarvestTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateHarvestTaskRequest::CreateHarvestTaskRequest()
{
    accessControlAllowInternal_ = "";
    accessControlAllowInternalIsSet_ = false;
    accessControlAllowExternal_ = "";
    accessControlAllowExternalIsSet_ = false;
    bodyIsSet_ = false;
}

CreateHarvestTaskRequest::~CreateHarvestTaskRequest() = default;

void CreateHarvestTaskRequest::validate()
{
}

web::json::value CreateHarvestTaskRequest::toJson() const
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
bool CreateHarvestTaskRequest::fromJson(const web::json::value& val)
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
            CreateHarvestTaskInfoReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateHarvestTaskRequest::getAccessControlAllowInternal() const
{
    return accessControlAllowInternal_;
}

void CreateHarvestTaskRequest::setAccessControlAllowInternal(const std::string& value)
{
    accessControlAllowInternal_ = value;
    accessControlAllowInternalIsSet_ = true;
}

bool CreateHarvestTaskRequest::accessControlAllowInternalIsSet() const
{
    return accessControlAllowInternalIsSet_;
}

void CreateHarvestTaskRequest::unsetaccessControlAllowInternal()
{
    accessControlAllowInternalIsSet_ = false;
}

std::string CreateHarvestTaskRequest::getAccessControlAllowExternal() const
{
    return accessControlAllowExternal_;
}

void CreateHarvestTaskRequest::setAccessControlAllowExternal(const std::string& value)
{
    accessControlAllowExternal_ = value;
    accessControlAllowExternalIsSet_ = true;
}

bool CreateHarvestTaskRequest::accessControlAllowExternalIsSet() const
{
    return accessControlAllowExternalIsSet_;
}

void CreateHarvestTaskRequest::unsetaccessControlAllowExternal()
{
    accessControlAllowExternalIsSet_ = false;
}

CreateHarvestTaskInfoReq CreateHarvestTaskRequest::getBody() const
{
    return body_;
}

void CreateHarvestTaskRequest::setBody(const CreateHarvestTaskInfoReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateHarvestTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateHarvestTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


