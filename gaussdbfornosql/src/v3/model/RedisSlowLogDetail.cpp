

#include "huaweicloud/gaussdbfornosql/v3/model/RedisSlowLogDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




RedisSlowLogDetail::RedisSlowLogDetail()
{
    nodeName_ = "";
    nodeNameIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    wholeMessage_ = "";
    wholeMessageIsSet_ = false;
    operateType_ = "";
    operateTypeIsSet_ = false;
    costTime_ = 0.0;
    costTimeIsSet_ = false;
    logTime_ = "";
    logTimeIsSet_ = false;
    lineNum_ = "";
    lineNumIsSet_ = false;
}

RedisSlowLogDetail::~RedisSlowLogDetail() = default;

void RedisSlowLogDetail::validate()
{
}

web::json::value RedisSlowLogDetail::toJson() const
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
    if(logTimeIsSet_) {
        val[utility::conversions::to_string_t("log_time")] = ModelBase::toJson(logTime_);
    }
    if(lineNumIsSet_) {
        val[utility::conversions::to_string_t("line_num")] = ModelBase::toJson(lineNum_);
    }

    return val;
}
bool RedisSlowLogDetail::fromJson(const web::json::value& val)
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
            double refVal;
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


std::string RedisSlowLogDetail::getNodeName() const
{
    return nodeName_;
}

void RedisSlowLogDetail::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool RedisSlowLogDetail::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void RedisSlowLogDetail::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

std::string RedisSlowLogDetail::getNodeId() const
{
    return nodeId_;
}

void RedisSlowLogDetail::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool RedisSlowLogDetail::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void RedisSlowLogDetail::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string RedisSlowLogDetail::getWholeMessage() const
{
    return wholeMessage_;
}

void RedisSlowLogDetail::setWholeMessage(const std::string& value)
{
    wholeMessage_ = value;
    wholeMessageIsSet_ = true;
}

bool RedisSlowLogDetail::wholeMessageIsSet() const
{
    return wholeMessageIsSet_;
}

void RedisSlowLogDetail::unsetwholeMessage()
{
    wholeMessageIsSet_ = false;
}

std::string RedisSlowLogDetail::getOperateType() const
{
    return operateType_;
}

void RedisSlowLogDetail::setOperateType(const std::string& value)
{
    operateType_ = value;
    operateTypeIsSet_ = true;
}

bool RedisSlowLogDetail::operateTypeIsSet() const
{
    return operateTypeIsSet_;
}

void RedisSlowLogDetail::unsetoperateType()
{
    operateTypeIsSet_ = false;
}

double RedisSlowLogDetail::getCostTime() const
{
    return costTime_;
}

void RedisSlowLogDetail::setCostTime(double value)
{
    costTime_ = value;
    costTimeIsSet_ = true;
}

bool RedisSlowLogDetail::costTimeIsSet() const
{
    return costTimeIsSet_;
}

void RedisSlowLogDetail::unsetcostTime()
{
    costTimeIsSet_ = false;
}

std::string RedisSlowLogDetail::getLogTime() const
{
    return logTime_;
}

void RedisSlowLogDetail::setLogTime(const std::string& value)
{
    logTime_ = value;
    logTimeIsSet_ = true;
}

bool RedisSlowLogDetail::logTimeIsSet() const
{
    return logTimeIsSet_;
}

void RedisSlowLogDetail::unsetlogTime()
{
    logTimeIsSet_ = false;
}

std::string RedisSlowLogDetail::getLineNum() const
{
    return lineNum_;
}

void RedisSlowLogDetail::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool RedisSlowLogDetail::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void RedisSlowLogDetail::unsetlineNum()
{
    lineNumIsSet_ = false;
}

}
}
}
}
}


