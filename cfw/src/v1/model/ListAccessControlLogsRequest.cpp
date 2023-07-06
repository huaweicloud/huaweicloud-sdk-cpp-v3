

#include "huaweicloud/cfw/v1/model/ListAccessControlLogsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListAccessControlLogsRequest::ListAccessControlLogsRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    ruleId_ = "";
    ruleIdIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    srcIp_ = "";
    srcIpIsSet_ = false;
    srcPort_ = 0;
    srcPortIsSet_ = false;
    dstIp_ = "";
    dstIpIsSet_ = false;
    dstPort_ = 0;
    dstPortIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    logId_ = "";
    logIdIsSet_ = false;
    nextDate_ = 0;
    nextDateIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    logType_ = "";
    logTypeIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

ListAccessControlLogsRequest::~ListAccessControlLogsRequest() = default;

void ListAccessControlLogsRequest::validate()
{
}

web::json::value ListAccessControlLogsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(srcIpIsSet_) {
        val[utility::conversions::to_string_t("src_ip")] = ModelBase::toJson(srcIp_);
    }
    if(srcPortIsSet_) {
        val[utility::conversions::to_string_t("src_port")] = ModelBase::toJson(srcPort_);
    }
    if(dstIpIsSet_) {
        val[utility::conversions::to_string_t("dst_ip")] = ModelBase::toJson(dstIp_);
    }
    if(dstPortIsSet_) {
        val[utility::conversions::to_string_t("dst_port")] = ModelBase::toJson(dstPort_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(logIdIsSet_) {
        val[utility::conversions::to_string_t("log_id")] = ModelBase::toJson(logId_);
    }
    if(nextDateIsSet_) {
        val[utility::conversions::to_string_t("next_date")] = ModelBase::toJson(nextDate_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(logTypeIsSet_) {
        val[utility::conversions::to_string_t("log_type")] = ModelBase::toJson(logType_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}

bool ListAccessControlLogsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("next_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next_date"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNextDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("log_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    return ok;
}

std::string ListAccessControlLogsRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListAccessControlLogsRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListAccessControlLogsRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListAccessControlLogsRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string ListAccessControlLogsRequest::getRuleId() const
{
    return ruleId_;
}

void ListAccessControlLogsRequest::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool ListAccessControlLogsRequest::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void ListAccessControlLogsRequest::unsetruleId()
{
    ruleIdIsSet_ = false;
}

int64_t ListAccessControlLogsRequest::getStartTime() const
{
    return startTime_;
}

void ListAccessControlLogsRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListAccessControlLogsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListAccessControlLogsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ListAccessControlLogsRequest::getEndTime() const
{
    return endTime_;
}

void ListAccessControlLogsRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListAccessControlLogsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListAccessControlLogsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListAccessControlLogsRequest::getSrcIp() const
{
    return srcIp_;
}

void ListAccessControlLogsRequest::setSrcIp(const std::string& value)
{
    srcIp_ = value;
    srcIpIsSet_ = true;
}

bool ListAccessControlLogsRequest::srcIpIsSet() const
{
    return srcIpIsSet_;
}

void ListAccessControlLogsRequest::unsetsrcIp()
{
    srcIpIsSet_ = false;
}

int32_t ListAccessControlLogsRequest::getSrcPort() const
{
    return srcPort_;
}

void ListAccessControlLogsRequest::setSrcPort(int32_t value)
{
    srcPort_ = value;
    srcPortIsSet_ = true;
}

bool ListAccessControlLogsRequest::srcPortIsSet() const
{
    return srcPortIsSet_;
}

void ListAccessControlLogsRequest::unsetsrcPort()
{
    srcPortIsSet_ = false;
}

std::string ListAccessControlLogsRequest::getDstIp() const
{
    return dstIp_;
}

void ListAccessControlLogsRequest::setDstIp(const std::string& value)
{
    dstIp_ = value;
    dstIpIsSet_ = true;
}

bool ListAccessControlLogsRequest::dstIpIsSet() const
{
    return dstIpIsSet_;
}

void ListAccessControlLogsRequest::unsetdstIp()
{
    dstIpIsSet_ = false;
}

int32_t ListAccessControlLogsRequest::getDstPort() const
{
    return dstPort_;
}

void ListAccessControlLogsRequest::setDstPort(int32_t value)
{
    dstPort_ = value;
    dstPortIsSet_ = true;
}

bool ListAccessControlLogsRequest::dstPortIsSet() const
{
    return dstPortIsSet_;
}

void ListAccessControlLogsRequest::unsetdstPort()
{
    dstPortIsSet_ = false;
}

std::string ListAccessControlLogsRequest::getProtocol() const
{
    return protocol_;
}

void ListAccessControlLogsRequest::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool ListAccessControlLogsRequest::protocolIsSet() const
{
    return protocolIsSet_;
}

void ListAccessControlLogsRequest::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string ListAccessControlLogsRequest::getApp() const
{
    return app_;
}

void ListAccessControlLogsRequest::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ListAccessControlLogsRequest::appIsSet() const
{
    return appIsSet_;
}

void ListAccessControlLogsRequest::unsetapp()
{
    appIsSet_ = false;
}

std::string ListAccessControlLogsRequest::getLogId() const
{
    return logId_;
}

void ListAccessControlLogsRequest::setLogId(const std::string& value)
{
    logId_ = value;
    logIdIsSet_ = true;
}

bool ListAccessControlLogsRequest::logIdIsSet() const
{
    return logIdIsSet_;
}

void ListAccessControlLogsRequest::unsetlogId()
{
    logIdIsSet_ = false;
}

int32_t ListAccessControlLogsRequest::getNextDate() const
{
    return nextDate_;
}

void ListAccessControlLogsRequest::setNextDate(int32_t value)
{
    nextDate_ = value;
    nextDateIsSet_ = true;
}

bool ListAccessControlLogsRequest::nextDateIsSet() const
{
    return nextDateIsSet_;
}

void ListAccessControlLogsRequest::unsetnextDate()
{
    nextDateIsSet_ = false;
}

int32_t ListAccessControlLogsRequest::getOffset() const
{
    return offset_;
}

void ListAccessControlLogsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAccessControlLogsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAccessControlLogsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListAccessControlLogsRequest::getLimit() const
{
    return limit_;
}

void ListAccessControlLogsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAccessControlLogsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAccessControlLogsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListAccessControlLogsRequest::getLogType() const
{
    return logType_;
}

void ListAccessControlLogsRequest::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool ListAccessControlLogsRequest::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void ListAccessControlLogsRequest::unsetlogType()
{
    logTypeIsSet_ = false;
}

std::string ListAccessControlLogsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListAccessControlLogsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListAccessControlLogsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListAccessControlLogsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


