

#include "huaweicloud/dbss/v1/model/ShowAuditTopicReportSchedulerConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowAuditTopicReportSchedulerConfigRequest::ShowAuditTopicReportSchedulerConfigRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

ShowAuditTopicReportSchedulerConfigRequest::~ShowAuditTopicReportSchedulerConfigRequest() = default;

void ShowAuditTopicReportSchedulerConfigRequest::validate()
{
}

web::json::value ShowAuditTopicReportSchedulerConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool ShowAuditTopicReportSchedulerConfigRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string ShowAuditTopicReportSchedulerConfigRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowAuditTopicReportSchedulerConfigRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowAuditTopicReportSchedulerConfigRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowAuditTopicReportSchedulerConfigRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowAuditTopicReportSchedulerConfigRequest::getId() const
{
    return id_;
}

void ShowAuditTopicReportSchedulerConfigRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowAuditTopicReportSchedulerConfigRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowAuditTopicReportSchedulerConfigRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


