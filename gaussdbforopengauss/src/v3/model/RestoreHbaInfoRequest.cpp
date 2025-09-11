

#include "huaweicloud/gaussdbforopengauss/v3/model/RestoreHbaInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




RestoreHbaInfoRequest::RestoreHbaInfoRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

RestoreHbaInfoRequest::~RestoreHbaInfoRequest() = default;

void RestoreHbaInfoRequest::validate()
{
}

web::json::value RestoreHbaInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool RestoreHbaInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RestoreHbaInfoRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RestoreHbaInfoRequest::getInstanceId() const
{
    return instanceId_;
}

void RestoreHbaInfoRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RestoreHbaInfoRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RestoreHbaInfoRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string RestoreHbaInfoRequest::getXLanguage() const
{
    return xLanguage_;
}

void RestoreHbaInfoRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool RestoreHbaInfoRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void RestoreHbaInfoRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

RestoreHbaInfoRequestBody RestoreHbaInfoRequest::getBody() const
{
    return body_;
}

void RestoreHbaInfoRequest::setBody(const RestoreHbaInfoRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RestoreHbaInfoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RestoreHbaInfoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


