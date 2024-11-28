

#include "huaweicloud/gaussdb/v3/model/UpdateMultiTenantRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateMultiTenantRequest::UpdateMultiTenantRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateMultiTenantRequest::~UpdateMultiTenantRequest() = default;

void UpdateMultiTenantRequest::validate()
{
}

web::json::value UpdateMultiTenantRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateMultiTenantRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            OperateMultiTenantReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateMultiTenantRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateMultiTenantRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateMultiTenantRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateMultiTenantRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateMultiTenantRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateMultiTenantRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateMultiTenantRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateMultiTenantRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

OperateMultiTenantReq UpdateMultiTenantRequest::getBody() const
{
    return body_;
}

void UpdateMultiTenantRequest::setBody(const OperateMultiTenantReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateMultiTenantRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateMultiTenantRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


