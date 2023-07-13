

#include "huaweicloud/cfw/v1/model/ListFlowLogsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListFlowLogsRequest::ListFlowLogsRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    direction_ = "";
    directionIsSet_ = false;
    logType_ = "";
    logTypeIsSet_ = false;
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
    nextDate_ = 0L;
    nextDateIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

ListFlowLogsRequest::~ListFlowLogsRequest() = default;

void ListFlowLogsRequest::validate()
{
}

web::json::value ListFlowLogsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(directionIsSet_) {
        val[utility::conversions::to_string_t("direction")] = ModelBase::toJson(direction_);
    }
    if(logTypeIsSet_) {
        val[utility::conversions::to_string_t("log_type")] = ModelBase::toJson(logType_);
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
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}

bool ListFlowLogsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("direction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDirection(refVal);
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
            int64_t refVal;
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

std::string ListFlowLogsRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListFlowLogsRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListFlowLogsRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListFlowLogsRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string ListFlowLogsRequest::getDirection() const
{
    return direction_;
}

void ListFlowLogsRequest::setDirection(const std::string& value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool ListFlowLogsRequest::directionIsSet() const
{
    return directionIsSet_;
}

void ListFlowLogsRequest::unsetdirection()
{
    directionIsSet_ = false;
}

std::string ListFlowLogsRequest::getLogType() const
{
    return logType_;
}

void ListFlowLogsRequest::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool ListFlowLogsRequest::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void ListFlowLogsRequest::unsetlogType()
{
    logTypeIsSet_ = false;
}

int64_t ListFlowLogsRequest::getStartTime() const
{
    return startTime_;
}

void ListFlowLogsRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListFlowLogsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListFlowLogsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ListFlowLogsRequest::getEndTime() const
{
    return endTime_;
}

void ListFlowLogsRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListFlowLogsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListFlowLogsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListFlowLogsRequest::getSrcIp() const
{
    return srcIp_;
}

void ListFlowLogsRequest::setSrcIp(const std::string& value)
{
    srcIp_ = value;
    srcIpIsSet_ = true;
}

bool ListFlowLogsRequest::srcIpIsSet() const
{
    return srcIpIsSet_;
}

void ListFlowLogsRequest::unsetsrcIp()
{
    srcIpIsSet_ = false;
}

int32_t ListFlowLogsRequest::getSrcPort() const
{
    return srcPort_;
}

void ListFlowLogsRequest::setSrcPort(int32_t value)
{
    srcPort_ = value;
    srcPortIsSet_ = true;
}

bool ListFlowLogsRequest::srcPortIsSet() const
{
    return srcPortIsSet_;
}

void ListFlowLogsRequest::unsetsrcPort()
{
    srcPortIsSet_ = false;
}

std::string ListFlowLogsRequest::getDstIp() const
{
    return dstIp_;
}

void ListFlowLogsRequest::setDstIp(const std::string& value)
{
    dstIp_ = value;
    dstIpIsSet_ = true;
}

bool ListFlowLogsRequest::dstIpIsSet() const
{
    return dstIpIsSet_;
}

void ListFlowLogsRequest::unsetdstIp()
{
    dstIpIsSet_ = false;
}

int32_t ListFlowLogsRequest::getDstPort() const
{
    return dstPort_;
}

void ListFlowLogsRequest::setDstPort(int32_t value)
{
    dstPort_ = value;
    dstPortIsSet_ = true;
}

bool ListFlowLogsRequest::dstPortIsSet() const
{
    return dstPortIsSet_;
}

void ListFlowLogsRequest::unsetdstPort()
{
    dstPortIsSet_ = false;
}

std::string ListFlowLogsRequest::getProtocol() const
{
    return protocol_;
}

void ListFlowLogsRequest::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool ListFlowLogsRequest::protocolIsSet() const
{
    return protocolIsSet_;
}

void ListFlowLogsRequest::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string ListFlowLogsRequest::getApp() const
{
    return app_;
}

void ListFlowLogsRequest::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ListFlowLogsRequest::appIsSet() const
{
    return appIsSet_;
}

void ListFlowLogsRequest::unsetapp()
{
    appIsSet_ = false;
}

std::string ListFlowLogsRequest::getLogId() const
{
    return logId_;
}

void ListFlowLogsRequest::setLogId(const std::string& value)
{
    logId_ = value;
    logIdIsSet_ = true;
}

bool ListFlowLogsRequest::logIdIsSet() const
{
    return logIdIsSet_;
}

void ListFlowLogsRequest::unsetlogId()
{
    logIdIsSet_ = false;
}

int64_t ListFlowLogsRequest::getNextDate() const
{
    return nextDate_;
}

void ListFlowLogsRequest::setNextDate(int64_t value)
{
    nextDate_ = value;
    nextDateIsSet_ = true;
}

bool ListFlowLogsRequest::nextDateIsSet() const
{
    return nextDateIsSet_;
}

void ListFlowLogsRequest::unsetnextDate()
{
    nextDateIsSet_ = false;
}

int32_t ListFlowLogsRequest::getOffset() const
{
    return offset_;
}

void ListFlowLogsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListFlowLogsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListFlowLogsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListFlowLogsRequest::getLimit() const
{
    return limit_;
}

void ListFlowLogsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListFlowLogsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListFlowLogsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListFlowLogsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListFlowLogsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListFlowLogsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListFlowLogsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


