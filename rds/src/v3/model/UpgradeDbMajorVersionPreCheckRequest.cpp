

#include "huaweicloud/rds/v3/model/UpgradeDbMajorVersionPreCheckRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpgradeDbMajorVersionPreCheckRequest::UpgradeDbMajorVersionPreCheckRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpgradeDbMajorVersionPreCheckRequest::~UpgradeDbMajorVersionPreCheckRequest() = default;

void UpgradeDbMajorVersionPreCheckRequest::validate()
{
}

web::json::value UpgradeDbMajorVersionPreCheckRequest::toJson() const
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
bool UpgradeDbMajorVersionPreCheckRequest::fromJson(const web::json::value& val)
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
            PostgresqlPreCheckUpgradeMajorVersionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpgradeDbMajorVersionPreCheckRequest::getInstanceId() const
{
    return instanceId_;
}

void UpgradeDbMajorVersionPreCheckRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpgradeDbMajorVersionPreCheckRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpgradeDbMajorVersionPreCheckRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpgradeDbMajorVersionPreCheckRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpgradeDbMajorVersionPreCheckRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpgradeDbMajorVersionPreCheckRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpgradeDbMajorVersionPreCheckRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

PostgresqlPreCheckUpgradeMajorVersionReq UpgradeDbMajorVersionPreCheckRequest::getBody() const
{
    return body_;
}

void UpgradeDbMajorVersionPreCheckRequest::setBody(const PostgresqlPreCheckUpgradeMajorVersionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpgradeDbMajorVersionPreCheckRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpgradeDbMajorVersionPreCheckRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


