

#include "huaweicloud/dbss/v1/model/ListAuditOperateLogsNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditOperateLogsNewRequest::ListAuditOperateLogsNewRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListAuditOperateLogsNewRequest::~ListAuditOperateLogsNewRequest() = default;

void ListAuditOperateLogsNewRequest::validate()
{
}

web::json::value ListAuditOperateLogsNewRequest::toJson() const
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
bool ListAuditOperateLogsNewRequest::fromJson(const web::json::value& val)
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
            OperateLogGetRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListAuditOperateLogsNewRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAuditOperateLogsNewRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAuditOperateLogsNewRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAuditOperateLogsNewRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

OperateLogGetRequest ListAuditOperateLogsNewRequest::getBody() const
{
    return body_;
}

void ListAuditOperateLogsNewRequest::setBody(const OperateLogGetRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListAuditOperateLogsNewRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListAuditOperateLogsNewRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


