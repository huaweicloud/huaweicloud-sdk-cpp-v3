

#include "huaweicloud/dbss/v1/model/ListAuditOperateLogsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditOperateLogsRequest::ListAuditOperateLogsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListAuditOperateLogsRequest::~ListAuditOperateLogsRequest() = default;

void ListAuditOperateLogsRequest::validate()
{
}

web::json::value ListAuditOperateLogsRequest::toJson() const
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
bool ListAuditOperateLogsRequest::fromJson(const web::json::value& val)
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


std::string ListAuditOperateLogsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAuditOperateLogsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAuditOperateLogsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAuditOperateLogsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

OperateLogGetRequest ListAuditOperateLogsRequest::getBody() const
{
    return body_;
}

void ListAuditOperateLogsRequest::setBody(const OperateLogGetRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListAuditOperateLogsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListAuditOperateLogsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


