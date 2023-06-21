

#include "huaweicloud/cfw/v1/model/ListAttackLogsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListAttackLogsRequest::ListAttackLogsRequest()
{
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
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    direction_ = "";
    directionIsSet_ = false;
    attackType_ = "";
    attackTypeIsSet_ = false;
    attackRule_ = "";
    attackRuleIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    source_ = "";
    sourceIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

ListAttackLogsRequest::~ListAttackLogsRequest() = default;

void ListAttackLogsRequest::validate()
{
}

web::json::value ListAttackLogsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(directionIsSet_) {
        val[utility::conversions::to_string_t("direction")] = ModelBase::toJson(direction_);
    }
    if(attackTypeIsSet_) {
        val[utility::conversions::to_string_t("attack_type")] = ModelBase::toJson(attackType_);
    }
    if(attackRuleIsSet_) {
        val[utility::conversions::to_string_t("attack_rule")] = ModelBase::toJson(attackRule_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}

bool ListAttackLogsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("attack_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttackType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attack_rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack_rule"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttackRule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
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


int64_t ListAttackLogsRequest::getStartTime() const
{
    return startTime_;
}

void ListAttackLogsRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListAttackLogsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListAttackLogsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ListAttackLogsRequest::getEndTime() const
{
    return endTime_;
}

void ListAttackLogsRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListAttackLogsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListAttackLogsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListAttackLogsRequest::getSrcIp() const
{
    return srcIp_;
}

void ListAttackLogsRequest::setSrcIp(const std::string& value)
{
    srcIp_ = value;
    srcIpIsSet_ = true;
}

bool ListAttackLogsRequest::srcIpIsSet() const
{
    return srcIpIsSet_;
}

void ListAttackLogsRequest::unsetsrcIp()
{
    srcIpIsSet_ = false;
}

int32_t ListAttackLogsRequest::getSrcPort() const
{
    return srcPort_;
}

void ListAttackLogsRequest::setSrcPort(int32_t value)
{
    srcPort_ = value;
    srcPortIsSet_ = true;
}

bool ListAttackLogsRequest::srcPortIsSet() const
{
    return srcPortIsSet_;
}

void ListAttackLogsRequest::unsetsrcPort()
{
    srcPortIsSet_ = false;
}

std::string ListAttackLogsRequest::getDstIp() const
{
    return dstIp_;
}

void ListAttackLogsRequest::setDstIp(const std::string& value)
{
    dstIp_ = value;
    dstIpIsSet_ = true;
}

bool ListAttackLogsRequest::dstIpIsSet() const
{
    return dstIpIsSet_;
}

void ListAttackLogsRequest::unsetdstIp()
{
    dstIpIsSet_ = false;
}

int32_t ListAttackLogsRequest::getDstPort() const
{
    return dstPort_;
}

void ListAttackLogsRequest::setDstPort(int32_t value)
{
    dstPort_ = value;
    dstPortIsSet_ = true;
}

bool ListAttackLogsRequest::dstPortIsSet() const
{
    return dstPortIsSet_;
}

void ListAttackLogsRequest::unsetdstPort()
{
    dstPortIsSet_ = false;
}

std::string ListAttackLogsRequest::getProtocol() const
{
    return protocol_;
}

void ListAttackLogsRequest::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool ListAttackLogsRequest::protocolIsSet() const
{
    return protocolIsSet_;
}

void ListAttackLogsRequest::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string ListAttackLogsRequest::getApp() const
{
    return app_;
}

void ListAttackLogsRequest::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ListAttackLogsRequest::appIsSet() const
{
    return appIsSet_;
}

void ListAttackLogsRequest::unsetapp()
{
    appIsSet_ = false;
}

std::string ListAttackLogsRequest::getLogId() const
{
    return logId_;
}

void ListAttackLogsRequest::setLogId(const std::string& value)
{
    logId_ = value;
    logIdIsSet_ = true;
}

bool ListAttackLogsRequest::logIdIsSet() const
{
    return logIdIsSet_;
}

void ListAttackLogsRequest::unsetlogId()
{
    logIdIsSet_ = false;
}

int64_t ListAttackLogsRequest::getNextDate() const
{
    return nextDate_;
}

void ListAttackLogsRequest::setNextDate(int64_t value)
{
    nextDate_ = value;
    nextDateIsSet_ = true;
}

bool ListAttackLogsRequest::nextDateIsSet() const
{
    return nextDateIsSet_;
}

void ListAttackLogsRequest::unsetnextDate()
{
    nextDateIsSet_ = false;
}

int32_t ListAttackLogsRequest::getOffset() const
{
    return offset_;
}

void ListAttackLogsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAttackLogsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAttackLogsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListAttackLogsRequest::getLimit() const
{
    return limit_;
}

void ListAttackLogsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAttackLogsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAttackLogsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListAttackLogsRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListAttackLogsRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListAttackLogsRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListAttackLogsRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string ListAttackLogsRequest::getAction() const
{
    return action_;
}

void ListAttackLogsRequest::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ListAttackLogsRequest::actionIsSet() const
{
    return actionIsSet_;
}

void ListAttackLogsRequest::unsetaction()
{
    actionIsSet_ = false;
}

std::string ListAttackLogsRequest::getDirection() const
{
    return direction_;
}

void ListAttackLogsRequest::setDirection(const std::string& value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool ListAttackLogsRequest::directionIsSet() const
{
    return directionIsSet_;
}

void ListAttackLogsRequest::unsetdirection()
{
    directionIsSet_ = false;
}

std::string ListAttackLogsRequest::getAttackType() const
{
    return attackType_;
}

void ListAttackLogsRequest::setAttackType(const std::string& value)
{
    attackType_ = value;
    attackTypeIsSet_ = true;
}

bool ListAttackLogsRequest::attackTypeIsSet() const
{
    return attackTypeIsSet_;
}

void ListAttackLogsRequest::unsetattackType()
{
    attackTypeIsSet_ = false;
}

std::string ListAttackLogsRequest::getAttackRule() const
{
    return attackRule_;
}

void ListAttackLogsRequest::setAttackRule(const std::string& value)
{
    attackRule_ = value;
    attackRuleIsSet_ = true;
}

bool ListAttackLogsRequest::attackRuleIsSet() const
{
    return attackRuleIsSet_;
}

void ListAttackLogsRequest::unsetattackRule()
{
    attackRuleIsSet_ = false;
}

std::string ListAttackLogsRequest::getLevel() const
{
    return level_;
}

void ListAttackLogsRequest::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool ListAttackLogsRequest::levelIsSet() const
{
    return levelIsSet_;
}

void ListAttackLogsRequest::unsetlevel()
{
    levelIsSet_ = false;
}

std::string ListAttackLogsRequest::getSource() const
{
    return source_;
}

void ListAttackLogsRequest::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool ListAttackLogsRequest::sourceIsSet() const
{
    return sourceIsSet_;
}

void ListAttackLogsRequest::unsetsource()
{
    sourceIsSet_ = false;
}

std::string ListAttackLogsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListAttackLogsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListAttackLogsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListAttackLogsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


