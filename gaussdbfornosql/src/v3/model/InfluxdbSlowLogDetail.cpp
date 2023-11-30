

#include "huaweicloud/gaussdbfornosql/v3/model/InfluxdbSlowLogDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




InfluxdbSlowLogDetail::InfluxdbSlowLogDetail()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    nodeName_ = "";
    nodeNameIsSet_ = false;
    wholeMessage_ = "";
    wholeMessageIsSet_ = false;
    operateType_ = "";
    operateTypeIsSet_ = false;
    costTime_ = "";
    costTimeIsSet_ = false;
    logTime_ = "";
    logTimeIsSet_ = false;
    database_ = "";
    databaseIsSet_ = false;
    retentionPolicy_ = "";
    retentionPolicyIsSet_ = false;
    lineNum_ = "";
    lineNumIsSet_ = false;
}

InfluxdbSlowLogDetail::~InfluxdbSlowLogDetail() = default;

void InfluxdbSlowLogDetail::validate()
{
}

web::json::value InfluxdbSlowLogDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(nodeNameIsSet_) {
        val[utility::conversions::to_string_t("node_name")] = ModelBase::toJson(nodeName_);
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
    if(logTimeIsSet_) {
        val[utility::conversions::to_string_t("log_time")] = ModelBase::toJson(logTime_);
    }
    if(databaseIsSet_) {
        val[utility::conversions::to_string_t("database")] = ModelBase::toJson(database_);
    }
    if(retentionPolicyIsSet_) {
        val[utility::conversions::to_string_t("retention_policy")] = ModelBase::toJson(retentionPolicy_);
    }
    if(lineNumIsSet_) {
        val[utility::conversions::to_string_t("line_num")] = ModelBase::toJson(lineNum_);
    }

    return val;
}
bool InfluxdbSlowLogDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeName(refVal);
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCostTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("database"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retention_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retention_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetentionPolicy(refVal);
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


std::string InfluxdbSlowLogDetail::getNodeId() const
{
    return nodeId_;
}

void InfluxdbSlowLogDetail::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool InfluxdbSlowLogDetail::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void InfluxdbSlowLogDetail::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string InfluxdbSlowLogDetail::getNodeName() const
{
    return nodeName_;
}

void InfluxdbSlowLogDetail::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool InfluxdbSlowLogDetail::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void InfluxdbSlowLogDetail::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

std::string InfluxdbSlowLogDetail::getWholeMessage() const
{
    return wholeMessage_;
}

void InfluxdbSlowLogDetail::setWholeMessage(const std::string& value)
{
    wholeMessage_ = value;
    wholeMessageIsSet_ = true;
}

bool InfluxdbSlowLogDetail::wholeMessageIsSet() const
{
    return wholeMessageIsSet_;
}

void InfluxdbSlowLogDetail::unsetwholeMessage()
{
    wholeMessageIsSet_ = false;
}

std::string InfluxdbSlowLogDetail::getOperateType() const
{
    return operateType_;
}

void InfluxdbSlowLogDetail::setOperateType(const std::string& value)
{
    operateType_ = value;
    operateTypeIsSet_ = true;
}

bool InfluxdbSlowLogDetail::operateTypeIsSet() const
{
    return operateTypeIsSet_;
}

void InfluxdbSlowLogDetail::unsetoperateType()
{
    operateTypeIsSet_ = false;
}

std::string InfluxdbSlowLogDetail::getCostTime() const
{
    return costTime_;
}

void InfluxdbSlowLogDetail::setCostTime(const std::string& value)
{
    costTime_ = value;
    costTimeIsSet_ = true;
}

bool InfluxdbSlowLogDetail::costTimeIsSet() const
{
    return costTimeIsSet_;
}

void InfluxdbSlowLogDetail::unsetcostTime()
{
    costTimeIsSet_ = false;
}

std::string InfluxdbSlowLogDetail::getLogTime() const
{
    return logTime_;
}

void InfluxdbSlowLogDetail::setLogTime(const std::string& value)
{
    logTime_ = value;
    logTimeIsSet_ = true;
}

bool InfluxdbSlowLogDetail::logTimeIsSet() const
{
    return logTimeIsSet_;
}

void InfluxdbSlowLogDetail::unsetlogTime()
{
    logTimeIsSet_ = false;
}

std::string InfluxdbSlowLogDetail::getDatabase() const
{
    return database_;
}

void InfluxdbSlowLogDetail::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool InfluxdbSlowLogDetail::databaseIsSet() const
{
    return databaseIsSet_;
}

void InfluxdbSlowLogDetail::unsetdatabase()
{
    databaseIsSet_ = false;
}

std::string InfluxdbSlowLogDetail::getRetentionPolicy() const
{
    return retentionPolicy_;
}

void InfluxdbSlowLogDetail::setRetentionPolicy(const std::string& value)
{
    retentionPolicy_ = value;
    retentionPolicyIsSet_ = true;
}

bool InfluxdbSlowLogDetail::retentionPolicyIsSet() const
{
    return retentionPolicyIsSet_;
}

void InfluxdbSlowLogDetail::unsetretentionPolicy()
{
    retentionPolicyIsSet_ = false;
}

std::string InfluxdbSlowLogDetail::getLineNum() const
{
    return lineNum_;
}

void InfluxdbSlowLogDetail::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool InfluxdbSlowLogDetail::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void InfluxdbSlowLogDetail::unsetlineNum()
{
    lineNumIsSet_ = false;
}

}
}
}
}
}


