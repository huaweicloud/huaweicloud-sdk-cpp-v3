

#include "huaweicloud/gaussdbforopengauss/v3/model/BindServerRouteRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




BindServerRouteRequest::BindServerRouteRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BindServerRouteRequest::~BindServerRouteRequest() = default;

void BindServerRouteRequest::validate()
{
}

web::json::value BindServerRouteRequest::toJson() const
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
bool BindServerRouteRequest::fromJson(const web::json::value& val)
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
            BindServerRouteRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BindServerRouteRequest::getXLanguage() const
{
    return xLanguage_;
}

void BindServerRouteRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BindServerRouteRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BindServerRouteRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string BindServerRouteRequest::getInstanceId() const
{
    return instanceId_;
}

void BindServerRouteRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BindServerRouteRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BindServerRouteRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

BindServerRouteRequestBody BindServerRouteRequest::getBody() const
{
    return body_;
}

void BindServerRouteRequest::setBody(const BindServerRouteRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BindServerRouteRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BindServerRouteRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


