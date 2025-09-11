

#include "huaweicloud/dbss/v1/model/UpdateAuditTopicReportSchedulerConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UpdateAuditTopicReportSchedulerConfigRequest::UpdateAuditTopicReportSchedulerConfigRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAuditTopicReportSchedulerConfigRequest::~UpdateAuditTopicReportSchedulerConfigRequest() = default;

void UpdateAuditTopicReportSchedulerConfigRequest::validate()
{
}

web::json::value UpdateAuditTopicReportSchedulerConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAuditTopicReportSchedulerConfigRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ConfigReportTopicRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAuditTopicReportSchedulerConfigRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateAuditTopicReportSchedulerConfigRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateAuditTopicReportSchedulerConfigRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateAuditTopicReportSchedulerConfigRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ConfigReportTopicRequest UpdateAuditTopicReportSchedulerConfigRequest::getBody() const
{
    return body_;
}

void UpdateAuditTopicReportSchedulerConfigRequest::setBody(const ConfigReportTopicRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAuditTopicReportSchedulerConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAuditTopicReportSchedulerConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


