

#include "huaweicloud/rds/v3/model/UpgradeDbVersionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpgradeDbVersionRequest::UpgradeDbVersionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpgradeDbVersionRequest::~UpgradeDbVersionRequest() = default;

void UpgradeDbVersionRequest::validate()
{
}

web::json::value UpgradeDbVersionRequest::toJson() const
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
bool UpgradeDbVersionRequest::fromJson(const web::json::value& val)
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
            CustomerUpgradeDatabaseVersionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpgradeDbVersionRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpgradeDbVersionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpgradeDbVersionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpgradeDbVersionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpgradeDbVersionRequest::getInstanceId() const
{
    return instanceId_;
}

void UpgradeDbVersionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpgradeDbVersionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpgradeDbVersionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CustomerUpgradeDatabaseVersionReq UpgradeDbVersionRequest::getBody() const
{
    return body_;
}

void UpgradeDbVersionRequest::setBody(const CustomerUpgradeDatabaseVersionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpgradeDbVersionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpgradeDbVersionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


