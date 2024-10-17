

#include "huaweicloud/dbss/v1/model/ListAuditSqlsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditSqlsRequest::ListAuditSqlsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListAuditSqlsRequest::~ListAuditSqlsRequest() = default;

void ListAuditSqlsRequest::validate()
{
}

web::json::value ListAuditSqlsRequest::toJson() const
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
bool ListAuditSqlsRequest::fromJson(const web::json::value& val)
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


std::string ListAuditSqlsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAuditSqlsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAuditSqlsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAuditSqlsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AuditSqlRequest ListAuditSqlsRequest::getBody() const
{
    return body_;
}

void ListAuditSqlsRequest::setBody(const AuditSqlRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListAuditSqlsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListAuditSqlsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


