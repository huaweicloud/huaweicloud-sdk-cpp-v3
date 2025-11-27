

#include "huaweicloud/rds/v3/model/GetInstancesNoIndexTablesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




GetInstancesNoIndexTablesRequest::GetInstancesNoIndexTablesRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    newest_ = false;
    newestIsSet_ = false;
    tableType_ = "";
    tableTypeIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
}

GetInstancesNoIndexTablesRequest::~GetInstancesNoIndexTablesRequest() = default;

void GetInstancesNoIndexTablesRequest::validate()
{
}

web::json::value GetInstancesNoIndexTablesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(newestIsSet_) {
        val[utility::conversions::to_string_t("newest")] = ModelBase::toJson(newest_);
    }
    if(tableTypeIsSet_) {
        val[utility::conversions::to_string_t("table_type")] = ModelBase::toJson(tableType_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool GetInstancesNoIndexTablesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("newest"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("newest"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewest(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string GetInstancesNoIndexTablesRequest::getInstanceId() const
{
    return instanceId_;
}

void GetInstancesNoIndexTablesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool GetInstancesNoIndexTablesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void GetInstancesNoIndexTablesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

bool GetInstancesNoIndexTablesRequest::isNewest() const
{
    return newest_;
}

void GetInstancesNoIndexTablesRequest::setNewest(bool value)
{
    newest_ = value;
    newestIsSet_ = true;
}

bool GetInstancesNoIndexTablesRequest::newestIsSet() const
{
    return newestIsSet_;
}

void GetInstancesNoIndexTablesRequest::unsetnewest()
{
    newestIsSet_ = false;
}

std::string GetInstancesNoIndexTablesRequest::getTableType() const
{
    return tableType_;
}

void GetInstancesNoIndexTablesRequest::setTableType(const std::string& value)
{
    tableType_ = value;
    tableTypeIsSet_ = true;
}

bool GetInstancesNoIndexTablesRequest::tableTypeIsSet() const
{
    return tableTypeIsSet_;
}

void GetInstancesNoIndexTablesRequest::unsettableType()
{
    tableTypeIsSet_ = false;
}

std::string GetInstancesNoIndexTablesRequest::getOffset() const
{
    return offset_;
}

void GetInstancesNoIndexTablesRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool GetInstancesNoIndexTablesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void GetInstancesNoIndexTablesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string GetInstancesNoIndexTablesRequest::getLimit() const
{
    return limit_;
}

void GetInstancesNoIndexTablesRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool GetInstancesNoIndexTablesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void GetInstancesNoIndexTablesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


