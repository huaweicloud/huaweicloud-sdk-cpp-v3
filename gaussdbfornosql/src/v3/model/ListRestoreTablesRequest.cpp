

#include "huaweicloud/gaussdbfornosql/v3/model/ListRestoreTablesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListRestoreTablesRequest::ListRestoreTablesRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListRestoreTablesRequest::~ListRestoreTablesRequest() = default;

void ListRestoreTablesRequest::validate()
{
}

web::json::value ListRestoreTablesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListRestoreTablesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListRestoreTablesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListRestoreTablesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListRestoreTablesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListRestoreTablesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListRestoreTablesRequest::getDatabaseName() const
{
    return databaseName_;
}

void ListRestoreTablesRequest::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ListRestoreTablesRequest::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ListRestoreTablesRequest::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

int32_t ListRestoreTablesRequest::getOffset() const
{
    return offset_;
}

void ListRestoreTablesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRestoreTablesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRestoreTablesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRestoreTablesRequest::getLimit() const
{
    return limit_;
}

void ListRestoreTablesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRestoreTablesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRestoreTablesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


