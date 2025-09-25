

#include "huaweicloud/gaussdbforopengauss/v3/model/UpdateInstanceVersionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpdateInstanceVersionsRequest::UpdateInstanceVersionsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateInstanceVersionsRequest::~UpdateInstanceVersionsRequest() = default;

void UpdateInstanceVersionsRequest::validate()
{
}

web::json::value UpdateInstanceVersionsRequest::toJson() const
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
bool UpdateInstanceVersionsRequest::fromJson(const web::json::value& val)
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
            UpgradeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateInstanceVersionsRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateInstanceVersionsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateInstanceVersionsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateInstanceVersionsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateInstanceVersionsRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateInstanceVersionsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateInstanceVersionsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateInstanceVersionsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpgradeRequestBody UpdateInstanceVersionsRequest::getBody() const
{
    return body_;
}

void UpdateInstanceVersionsRequest::setBody(const UpgradeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateInstanceVersionsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateInstanceVersionsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


