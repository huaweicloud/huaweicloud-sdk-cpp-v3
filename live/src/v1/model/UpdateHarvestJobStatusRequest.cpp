

#include "huaweicloud/live/v1/model/UpdateHarvestJobStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




UpdateHarvestJobStatusRequest::UpdateHarvestJobStatusRequest()
{
    accessControlAllowInternal_ = "";
    accessControlAllowInternalIsSet_ = false;
    accessControlAllowExternal_ = "";
    accessControlAllowExternalIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateHarvestJobStatusRequest::~UpdateHarvestJobStatusRequest() = default;

void UpdateHarvestJobStatusRequest::validate()
{
}

web::json::value UpdateHarvestJobStatusRequest::toJson() const
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
bool UpdateHarvestJobStatusRequest::fromJson(const web::json::value& val)
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
            UpdateHarvestJobStatusRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateHarvestJobStatusRequest::getAccessControlAllowInternal() const
{
    return accessControlAllowInternal_;
}

void UpdateHarvestJobStatusRequest::setAccessControlAllowInternal(const std::string& value)
{
    accessControlAllowInternal_ = value;
    accessControlAllowInternalIsSet_ = true;
}

bool UpdateHarvestJobStatusRequest::accessControlAllowInternalIsSet() const
{
    return accessControlAllowInternalIsSet_;
}

void UpdateHarvestJobStatusRequest::unsetaccessControlAllowInternal()
{
    accessControlAllowInternalIsSet_ = false;
}

std::string UpdateHarvestJobStatusRequest::getAccessControlAllowExternal() const
{
    return accessControlAllowExternal_;
}

void UpdateHarvestJobStatusRequest::setAccessControlAllowExternal(const std::string& value)
{
    accessControlAllowExternal_ = value;
    accessControlAllowExternalIsSet_ = true;
}

bool UpdateHarvestJobStatusRequest::accessControlAllowExternalIsSet() const
{
    return accessControlAllowExternalIsSet_;
}

void UpdateHarvestJobStatusRequest::unsetaccessControlAllowExternal()
{
    accessControlAllowExternalIsSet_ = false;
}

UpdateHarvestJobStatusRequestBody UpdateHarvestJobStatusRequest::getBody() const
{
    return body_;
}

void UpdateHarvestJobStatusRequest::setBody(const UpdateHarvestJobStatusRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateHarvestJobStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateHarvestJobStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


