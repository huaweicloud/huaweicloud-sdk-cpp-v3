

#include "huaweicloud/dbss/v1/model/ListAuditAgentNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditAgentNewRequest::ListAuditAgentNewRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    dbId_ = "";
    dbIdIsSet_ = false;
}

ListAuditAgentNewRequest::~ListAuditAgentNewRequest() = default;

void ListAuditAgentNewRequest::validate()
{
}

web::json::value ListAuditAgentNewRequest::toJson() const
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
bool ListAuditAgentNewRequest::fromJson(const web::json::value& val)
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


std::string ListAuditAgentNewRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAuditAgentNewRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAuditAgentNewRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAuditAgentNewRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListAuditAgentNewRequest::getDbId() const
{
    return dbId_;
}

void ListAuditAgentNewRequest::setDbId(const std::string& value)
{
    dbId_ = value;
    dbIdIsSet_ = true;
}

bool ListAuditAgentNewRequest::dbIdIsSet() const
{
    return dbIdIsSet_;
}

void ListAuditAgentNewRequest::unsetdbId()
{
    dbIdIsSet_ = false;
}

}
}
}
}
}


