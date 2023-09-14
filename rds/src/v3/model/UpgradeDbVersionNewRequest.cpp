

#include "huaweicloud/rds/v3/model/UpgradeDbVersionNewRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpgradeDbVersionNewRequest::UpgradeDbVersionNewRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpgradeDbVersionNewRequest::~UpgradeDbVersionNewRequest() = default;

void UpgradeDbVersionNewRequest::validate()
{
}

web::json::value UpgradeDbVersionNewRequest::toJson() const
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

bool UpgradeDbVersionNewRequest::fromJson(const web::json::value& val)
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
            CustomerUpgradeDatabaseVersionReqNew refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpgradeDbVersionNewRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpgradeDbVersionNewRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpgradeDbVersionNewRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpgradeDbVersionNewRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpgradeDbVersionNewRequest::getInstanceId() const
{
    return instanceId_;
}

void UpgradeDbVersionNewRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpgradeDbVersionNewRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpgradeDbVersionNewRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CustomerUpgradeDatabaseVersionReqNew UpgradeDbVersionNewRequest::getBody() const
{
    return body_;
}

void UpgradeDbVersionNewRequest::setBody(const CustomerUpgradeDatabaseVersionReqNew& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpgradeDbVersionNewRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpgradeDbVersionNewRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


