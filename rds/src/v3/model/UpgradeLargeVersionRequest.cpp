

#include "huaweicloud/rds/v3/model/UpgradeLargeVersionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpgradeLargeVersionRequest::UpgradeLargeVersionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpgradeLargeVersionRequest::~UpgradeLargeVersionRequest() = default;

void UpgradeLargeVersionRequest::validate()
{
}

web::json::value UpgradeLargeVersionRequest::toJson() const
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
bool UpgradeLargeVersionRequest::fromJson(const web::json::value& val)
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
            CustomerUpgradeMajorVersionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpgradeLargeVersionRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpgradeLargeVersionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpgradeLargeVersionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpgradeLargeVersionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpgradeLargeVersionRequest::getInstanceId() const
{
    return instanceId_;
}

void UpgradeLargeVersionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpgradeLargeVersionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpgradeLargeVersionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CustomerUpgradeMajorVersionReq UpgradeLargeVersionRequest::getBody() const
{
    return body_;
}

void UpgradeLargeVersionRequest::setBody(const CustomerUpgradeMajorVersionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpgradeLargeVersionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpgradeLargeVersionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


