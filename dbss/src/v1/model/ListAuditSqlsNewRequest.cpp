

#include "huaweicloud/dbss/v1/model/ListAuditSqlsNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditSqlsNewRequest::ListAuditSqlsNewRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListAuditSqlsNewRequest::~ListAuditSqlsNewRequest() = default;

void ListAuditSqlsNewRequest::validate()
{
}

web::json::value ListAuditSqlsNewRequest::toJson() const
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
bool ListAuditSqlsNewRequest::fromJson(const web::json::value& val)
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
            AuditSqlRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListAuditSqlsNewRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAuditSqlsNewRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAuditSqlsNewRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAuditSqlsNewRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AuditSqlRequest ListAuditSqlsNewRequest::getBody() const
{
    return body_;
}

void ListAuditSqlsNewRequest::setBody(const AuditSqlRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListAuditSqlsNewRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListAuditSqlsNewRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


