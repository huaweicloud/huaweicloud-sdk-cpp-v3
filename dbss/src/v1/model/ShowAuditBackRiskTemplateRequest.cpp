

#include "huaweicloud/dbss/v1/model/ShowAuditBackRiskTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowAuditBackRiskTemplateRequest::ShowAuditBackRiskTemplateRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    dbId_ = "";
    dbIdIsSet_ = false;
}

ShowAuditBackRiskTemplateRequest::~ShowAuditBackRiskTemplateRequest() = default;

void ShowAuditBackRiskTemplateRequest::validate()
{
}

web::json::value ShowAuditBackRiskTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(dbIdIsSet_) {
        val[utility::conversions::to_string_t("db_id")] = ModelBase::toJson(dbId_);
    }

    return val;
}
bool ShowAuditBackRiskTemplateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("db_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbId(refVal);
        }
    }
    return ok;
}


std::string ShowAuditBackRiskTemplateRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowAuditBackRiskTemplateRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowAuditBackRiskTemplateRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowAuditBackRiskTemplateRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowAuditBackRiskTemplateRequest::getDbId() const
{
    return dbId_;
}

void ShowAuditBackRiskTemplateRequest::setDbId(const std::string& value)
{
    dbId_ = value;
    dbIdIsSet_ = true;
}

bool ShowAuditBackRiskTemplateRequest::dbIdIsSet() const
{
    return dbIdIsSet_;
}

void ShowAuditBackRiskTemplateRequest::unsetdbId()
{
    dbIdIsSet_ = false;
}

}
}
}
}
}


