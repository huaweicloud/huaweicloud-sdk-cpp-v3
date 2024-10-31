

#include "huaweicloud/gaussdbforopengauss/v3/model/ListNodeLimitSqlModelRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListNodeLimitSqlModelRequest::ListNodeLimitSqlModelRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    sqlModel_ = "";
    sqlModelIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListNodeLimitSqlModelRequest::~ListNodeLimitSqlModelRequest() = default;

void ListNodeLimitSqlModelRequest::validate()
{
}

web::json::value ListNodeLimitSqlModelRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(sqlModelIsSet_) {
        val[utility::conversions::to_string_t("sql_model")] = ModelBase::toJson(sqlModel_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListNodeLimitSqlModelRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_model"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlModel(refVal);
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


std::string ListNodeLimitSqlModelRequest::getInstanceId() const
{
    return instanceId_;
}

void ListNodeLimitSqlModelRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListNodeLimitSqlModelRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListNodeLimitSqlModelRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListNodeLimitSqlModelRequest::getNodeId() const
{
    return nodeId_;
}

void ListNodeLimitSqlModelRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListNodeLimitSqlModelRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListNodeLimitSqlModelRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ListNodeLimitSqlModelRequest::getSqlModel() const
{
    return sqlModel_;
}

void ListNodeLimitSqlModelRequest::setSqlModel(const std::string& value)
{
    sqlModel_ = value;
    sqlModelIsSet_ = true;
}

bool ListNodeLimitSqlModelRequest::sqlModelIsSet() const
{
    return sqlModelIsSet_;
}

void ListNodeLimitSqlModelRequest::unsetsqlModel()
{
    sqlModelIsSet_ = false;
}

int32_t ListNodeLimitSqlModelRequest::getOffset() const
{
    return offset_;
}

void ListNodeLimitSqlModelRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListNodeLimitSqlModelRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListNodeLimitSqlModelRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListNodeLimitSqlModelRequest::getLimit() const
{
    return limit_;
}

void ListNodeLimitSqlModelRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListNodeLimitSqlModelRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListNodeLimitSqlModelRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


