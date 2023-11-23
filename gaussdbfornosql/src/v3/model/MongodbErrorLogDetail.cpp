

#include "huaweicloud/gaussdbfornosql/v3/model/MongodbErrorLogDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




MongodbErrorLogDetail::MongodbErrorLogDetail()
{
    nodeName_ = "";
    nodeNameIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    rawMessage_ = "";
    rawMessageIsSet_ = false;
    severity_ = "";
    severityIsSet_ = false;
    logTime_ = "";
    logTimeIsSet_ = false;
    lineNum_ = "";
    lineNumIsSet_ = false;
}

MongodbErrorLogDetail::~MongodbErrorLogDetail() = default;

void MongodbErrorLogDetail::validate()
{
}

web::json::value MongodbErrorLogDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeNameIsSet_) {
        val[utility::conversions::to_string_t("node_name")] = ModelBase::toJson(nodeName_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(rawMessageIsSet_) {
        val[utility::conversions::to_string_t("raw_message")] = ModelBase::toJson(rawMessage_);
    }
    if(severityIsSet_) {
        val[utility::conversions::to_string_t("severity")] = ModelBase::toJson(severity_);
    }
    if(logTimeIsSet_) {
        val[utility::conversions::to_string_t("log_time")] = ModelBase::toJson(logTime_);
    }
    if(lineNumIsSet_) {
        val[utility::conversions::to_string_t("line_num")] = ModelBase::toJson(lineNum_);
    }

    return val;
}
bool MongodbErrorLogDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("raw_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("raw_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRawMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("severity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverity(refVal);
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


std::string MongodbErrorLogDetail::getNodeName() const
{
    return nodeName_;
}

void MongodbErrorLogDetail::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool MongodbErrorLogDetail::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void MongodbErrorLogDetail::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

std::string MongodbErrorLogDetail::getNodeId() const
{
    return nodeId_;
}

void MongodbErrorLogDetail::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool MongodbErrorLogDetail::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void MongodbErrorLogDetail::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string MongodbErrorLogDetail::getRawMessage() const
{
    return rawMessage_;
}

void MongodbErrorLogDetail::setRawMessage(const std::string& value)
{
    rawMessage_ = value;
    rawMessageIsSet_ = true;
}

bool MongodbErrorLogDetail::rawMessageIsSet() const
{
    return rawMessageIsSet_;
}

void MongodbErrorLogDetail::unsetrawMessage()
{
    rawMessageIsSet_ = false;
}

std::string MongodbErrorLogDetail::getSeverity() const
{
    return severity_;
}

void MongodbErrorLogDetail::setSeverity(const std::string& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool MongodbErrorLogDetail::severityIsSet() const
{
    return severityIsSet_;
}

void MongodbErrorLogDetail::unsetseverity()
{
    severityIsSet_ = false;
}

std::string MongodbErrorLogDetail::getLogTime() const
{
    return logTime_;
}

void MongodbErrorLogDetail::setLogTime(const std::string& value)
{
    logTime_ = value;
    logTimeIsSet_ = true;
}

bool MongodbErrorLogDetail::logTimeIsSet() const
{
    return logTimeIsSet_;
}

void MongodbErrorLogDetail::unsetlogTime()
{
    logTimeIsSet_ = false;
}

std::string MongodbErrorLogDetail::getLineNum() const
{
    return lineNum_;
}

void MongodbErrorLogDetail::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool MongodbErrorLogDetail::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void MongodbErrorLogDetail::unsetlineNum()
{
    lineNumIsSet_ = false;
}

}
}
}
}
}


