

#include "huaweicloud/rds/v3/model/ListInstancesNoIndexTablesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListInstancesNoIndexTablesRequest::ListInstancesNoIndexTablesRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    newest_ = false;
    newestIsSet_ = false;
    tableType_ = "";
    tableTypeIsSet_ = false;
}

ListInstancesNoIndexTablesRequest::~ListInstancesNoIndexTablesRequest() = default;

void ListInstancesNoIndexTablesRequest::validate()
{
}

web::json::value ListInstancesNoIndexTablesRequest::toJson() const
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

    return val;
}
bool ListInstancesNoIndexTablesRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListInstancesNoIndexTablesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListInstancesNoIndexTablesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListInstancesNoIndexTablesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListInstancesNoIndexTablesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

bool ListInstancesNoIndexTablesRequest::isNewest() const
{
    return newest_;
}

void ListInstancesNoIndexTablesRequest::setNewest(bool value)
{
    newest_ = value;
    newestIsSet_ = true;
}

bool ListInstancesNoIndexTablesRequest::newestIsSet() const
{
    return newestIsSet_;
}

void ListInstancesNoIndexTablesRequest::unsetnewest()
{
    newestIsSet_ = false;
}

std::string ListInstancesNoIndexTablesRequest::getTableType() const
{
    return tableType_;
}

void ListInstancesNoIndexTablesRequest::setTableType(const std::string& value)
{
    tableType_ = value;
    tableTypeIsSet_ = true;
}

bool ListInstancesNoIndexTablesRequest::tableTypeIsSet() const
{
    return tableTypeIsSet_;
}

void ListInstancesNoIndexTablesRequest::unsettableType()
{
    tableTypeIsSet_ = false;
}

}
}
}
}
}


