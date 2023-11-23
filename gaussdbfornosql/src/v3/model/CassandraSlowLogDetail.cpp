

#include "huaweicloud/gaussdbfornosql/v3/model/CassandraSlowLogDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CassandraSlowLogDetail::CassandraSlowLogDetail()
{
    nodeName_ = "";
    nodeNameIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    wholeMessage_ = "";
    wholeMessageIsSet_ = false;
    operateType_ = "";
    operateTypeIsSet_ = false;
    costTime_ = 0;
    costTimeIsSet_ = false;
    keyspace_ = "";
    keyspaceIsSet_ = false;
    table_ = "";
    tableIsSet_ = false;
    logTime_ = "";
    logTimeIsSet_ = false;
    lineNum_ = "";
    lineNumIsSet_ = false;
}

CassandraSlowLogDetail::~CassandraSlowLogDetail() = default;

void CassandraSlowLogDetail::validate()
{
}

web::json::value CassandraSlowLogDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeNameIsSet_) {
        val[utility::conversions::to_string_t("node_name")] = ModelBase::toJson(nodeName_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(wholeMessageIsSet_) {
        val[utility::conversions::to_string_t("whole_message")] = ModelBase::toJson(wholeMessage_);
    }
    if(operateTypeIsSet_) {
        val[utility::conversions::to_string_t("operate_type")] = ModelBase::toJson(operateType_);
    }
    if(costTimeIsSet_) {
        val[utility::conversions::to_string_t("cost_time")] = ModelBase::toJson(costTime_);
    }
    if(keyspaceIsSet_) {
        val[utility::conversions::to_string_t("keyspace")] = ModelBase::toJson(keyspace_);
    }
    if(tableIsSet_) {
        val[utility::conversions::to_string_t("table")] = ModelBase::toJson(table_);
    }
    if(logTimeIsSet_) {
        val[utility::conversions::to_string_t("log_time")] = ModelBase::toJson(logTime_);
    }
    if(lineNumIsSet_) {
        val[utility::conversions::to_string_t("line_num")] = ModelBase::toJson(lineNum_);
    }

    return val;
}
bool CassandraSlowLogDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("whole_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("whole_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWholeMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operate_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cost_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cost_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCostTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keyspace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keyspace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyspace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("line_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineNum(refVal);
        }
    }
    return ok;
}


std::string CassandraSlowLogDetail::getNodeName() const
{
    return nodeName_;
}

void CassandraSlowLogDetail::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool CassandraSlowLogDetail::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void CassandraSlowLogDetail::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

std::string CassandraSlowLogDetail::getNodeId() const
{
    return nodeId_;
}

void CassandraSlowLogDetail::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool CassandraSlowLogDetail::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void CassandraSlowLogDetail::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string CassandraSlowLogDetail::getWholeMessage() const
{
    return wholeMessage_;
}

void CassandraSlowLogDetail::setWholeMessage(const std::string& value)
{
    wholeMessage_ = value;
    wholeMessageIsSet_ = true;
}

bool CassandraSlowLogDetail::wholeMessageIsSet() const
{
    return wholeMessageIsSet_;
}

void CassandraSlowLogDetail::unsetwholeMessage()
{
    wholeMessageIsSet_ = false;
}

std::string CassandraSlowLogDetail::getOperateType() const
{
    return operateType_;
}

void CassandraSlowLogDetail::setOperateType(const std::string& value)
{
    operateType_ = value;
    operateTypeIsSet_ = true;
}

bool CassandraSlowLogDetail::operateTypeIsSet() const
{
    return operateTypeIsSet_;
}

void CassandraSlowLogDetail::unsetoperateType()
{
    operateTypeIsSet_ = false;
}

int32_t CassandraSlowLogDetail::getCostTime() const
{
    return costTime_;
}

void CassandraSlowLogDetail::setCostTime(int32_t value)
{
    costTime_ = value;
    costTimeIsSet_ = true;
}

bool CassandraSlowLogDetail::costTimeIsSet() const
{
    return costTimeIsSet_;
}

void CassandraSlowLogDetail::unsetcostTime()
{
    costTimeIsSet_ = false;
}

std::string CassandraSlowLogDetail::getKeyspace() const
{
    return keyspace_;
}

void CassandraSlowLogDetail::setKeyspace(const std::string& value)
{
    keyspace_ = value;
    keyspaceIsSet_ = true;
}

bool CassandraSlowLogDetail::keyspaceIsSet() const
{
    return keyspaceIsSet_;
}

void CassandraSlowLogDetail::unsetkeyspace()
{
    keyspaceIsSet_ = false;
}

std::string CassandraSlowLogDetail::getTable() const
{
    return table_;
}

void CassandraSlowLogDetail::setTable(const std::string& value)
{
    table_ = value;
    tableIsSet_ = true;
}

bool CassandraSlowLogDetail::tableIsSet() const
{
    return tableIsSet_;
}

void CassandraSlowLogDetail::unsettable()
{
    tableIsSet_ = false;
}

std::string CassandraSlowLogDetail::getLogTime() const
{
    return logTime_;
}

void CassandraSlowLogDetail::setLogTime(const std::string& value)
{
    logTime_ = value;
    logTimeIsSet_ = true;
}

bool CassandraSlowLogDetail::logTimeIsSet() const
{
    return logTimeIsSet_;
}

void CassandraSlowLogDetail::unsetlogTime()
{
    logTimeIsSet_ = false;
}

std::string CassandraSlowLogDetail::getLineNum() const
{
    return lineNum_;
}

void CassandraSlowLogDetail::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool CassandraSlowLogDetail::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void CassandraSlowLogDetail::unsetlineNum()
{
    lineNumIsSet_ = false;
}

}
}
}
}
}


