

#include "huaweicloud/dds/v3/model/ErrorLogDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ErrorLogDetail::ErrorLogDetail()
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

ErrorLogDetail::~ErrorLogDetail() = default;

void ErrorLogDetail::validate()
{
}

web::json::value ErrorLogDetail::toJson() const
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
bool ErrorLogDetail::fromJson(const web::json::value& val)
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


std::string ErrorLogDetail::getNodeName() const
{
    return nodeName_;
}

void ErrorLogDetail::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool ErrorLogDetail::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void ErrorLogDetail::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

std::string ErrorLogDetail::getNodeId() const
{
    return nodeId_;
}

void ErrorLogDetail::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ErrorLogDetail::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ErrorLogDetail::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ErrorLogDetail::getRawMessage() const
{
    return rawMessage_;
}

void ErrorLogDetail::setRawMessage(const std::string& value)
{
    rawMessage_ = value;
    rawMessageIsSet_ = true;
}

bool ErrorLogDetail::rawMessageIsSet() const
{
    return rawMessageIsSet_;
}

void ErrorLogDetail::unsetrawMessage()
{
    rawMessageIsSet_ = false;
}

std::string ErrorLogDetail::getSeverity() const
{
    return severity_;
}

void ErrorLogDetail::setSeverity(const std::string& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool ErrorLogDetail::severityIsSet() const
{
    return severityIsSet_;
}

void ErrorLogDetail::unsetseverity()
{
    severityIsSet_ = false;
}

std::string ErrorLogDetail::getLogTime() const
{
    return logTime_;
}

void ErrorLogDetail::setLogTime(const std::string& value)
{
    logTime_ = value;
    logTimeIsSet_ = true;
}

bool ErrorLogDetail::logTimeIsSet() const
{
    return logTimeIsSet_;
}

void ErrorLogDetail::unsetlogTime()
{
    logTimeIsSet_ = false;
}

std::string ErrorLogDetail::getLineNum() const
{
    return lineNum_;
}

void ErrorLogDetail::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool ErrorLogDetail::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void ErrorLogDetail::unsetlineNum()
{
    lineNumIsSet_ = false;
}

}
}
}
}
}


