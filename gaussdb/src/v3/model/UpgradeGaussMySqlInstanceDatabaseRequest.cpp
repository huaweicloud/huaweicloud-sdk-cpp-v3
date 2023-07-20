

#include "huaweicloud/gaussdb/v3/model/UpgradeGaussMySqlInstanceDatabaseRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpgradeGaussMySqlInstanceDatabaseRequest::UpgradeGaussMySqlInstanceDatabaseRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpgradeGaussMySqlInstanceDatabaseRequest::~UpgradeGaussMySqlInstanceDatabaseRequest() = default;

void UpgradeGaussMySqlInstanceDatabaseRequest::validate()
{
}

web::json::value UpgradeGaussMySqlInstanceDatabaseRequest::toJson() const
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

bool UpgradeGaussMySqlInstanceDatabaseRequest::fromJson(const web::json::value& val)
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
            UpgradeDatabaseRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpgradeGaussMySqlInstanceDatabaseRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpgradeGaussMySqlInstanceDatabaseRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpgradeGaussMySqlInstanceDatabaseRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpgradeGaussMySqlInstanceDatabaseRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpgradeGaussMySqlInstanceDatabaseRequest::getInstanceId() const
{
    return instanceId_;
}

void UpgradeGaussMySqlInstanceDatabaseRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpgradeGaussMySqlInstanceDatabaseRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpgradeGaussMySqlInstanceDatabaseRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpgradeDatabaseRequest UpgradeGaussMySqlInstanceDatabaseRequest::getBody() const
{
    return body_;
}

void UpgradeGaussMySqlInstanceDatabaseRequest::setBody(const UpgradeDatabaseRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpgradeGaussMySqlInstanceDatabaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpgradeGaussMySqlInstanceDatabaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


