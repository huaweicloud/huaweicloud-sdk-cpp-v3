

#include "huaweicloud/cfw/v1/model/HttpQueryCfwAccessControllerLogsResponseDTO_data_records.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




HttpQueryCfwAccessControllerLogsResponseDTO_data_records::HttpQueryCfwAccessControllerLogsResponseDTO_data_records()
{
    action_ = "";
    actionIsSet_ = false;
    ruleName_ = "";
    ruleNameIsSet_ = false;
    ruleId_ = "";
    ruleIdIsSet_ = false;
    hitTime_ = 0;
    hitTimeIsSet_ = false;
    logId_ = "";
    logIdIsSet_ = false;
    srcIp_ = "";
    srcIpIsSet_ = false;
    srcPort_ = "";
    srcPortIsSet_ = false;
    dstIp_ = "";
    dstIpIsSet_ = false;
    dstPort_ = "";
    dstPortIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
}

HttpQueryCfwAccessControllerLogsResponseDTO_data_records::~HttpQueryCfwAccessControllerLogsResponseDTO_data_records() = default;

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::validate()
{
}

web::json::value HttpQueryCfwAccessControllerLogsResponseDTO_data_records::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }
    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
    if(hitTimeIsSet_) {
        val[utility::conversions::to_string_t("hit_time")] = ModelBase::toJson(hitTime_);
    }
    if(logIdIsSet_) {
        val[utility::conversions::to_string_t("log_id")] = ModelBase::toJson(logId_);
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

    return val;
}

bool HttpQueryCfwAccessControllerLogsResponseDTO_data_records::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("hit_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hit_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHitTime(refVal);
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
            std::string refVal;
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
            std::string refVal;
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
    return ok;
}

std::string HttpQueryCfwAccessControllerLogsResponseDTO_data_records::getAction() const
{
    return action_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool HttpQueryCfwAccessControllerLogsResponseDTO_data_records::actionIsSet() const
{
    return actionIsSet_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::unsetaction()
{
    actionIsSet_ = false;
}

std::string HttpQueryCfwAccessControllerLogsResponseDTO_data_records::getRuleName() const
{
    return ruleName_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool HttpQueryCfwAccessControllerLogsResponseDTO_data_records::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::unsetruleName()
{
    ruleNameIsSet_ = false;
}

std::string HttpQueryCfwAccessControllerLogsResponseDTO_data_records::getRuleId() const
{
    return ruleId_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool HttpQueryCfwAccessControllerLogsResponseDTO_data_records::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::unsetruleId()
{
    ruleIdIsSet_ = false;
}

int32_t HttpQueryCfwAccessControllerLogsResponseDTO_data_records::getHitTime() const
{
    return hitTime_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::setHitTime(int32_t value)
{
    hitTime_ = value;
    hitTimeIsSet_ = true;
}

bool HttpQueryCfwAccessControllerLogsResponseDTO_data_records::hitTimeIsSet() const
{
    return hitTimeIsSet_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::unsethitTime()
{
    hitTimeIsSet_ = false;
}

std::string HttpQueryCfwAccessControllerLogsResponseDTO_data_records::getLogId() const
{
    return logId_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::setLogId(const std::string& value)
{
    logId_ = value;
    logIdIsSet_ = true;
}

bool HttpQueryCfwAccessControllerLogsResponseDTO_data_records::logIdIsSet() const
{
    return logIdIsSet_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::unsetlogId()
{
    logIdIsSet_ = false;
}

std::string HttpQueryCfwAccessControllerLogsResponseDTO_data_records::getSrcIp() const
{
    return srcIp_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::setSrcIp(const std::string& value)
{
    srcIp_ = value;
    srcIpIsSet_ = true;
}

bool HttpQueryCfwAccessControllerLogsResponseDTO_data_records::srcIpIsSet() const
{
    return srcIpIsSet_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::unsetsrcIp()
{
    srcIpIsSet_ = false;
}

std::string HttpQueryCfwAccessControllerLogsResponseDTO_data_records::getSrcPort() const
{
    return srcPort_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::setSrcPort(const std::string& value)
{
    srcPort_ = value;
    srcPortIsSet_ = true;
}

bool HttpQueryCfwAccessControllerLogsResponseDTO_data_records::srcPortIsSet() const
{
    return srcPortIsSet_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::unsetsrcPort()
{
    srcPortIsSet_ = false;
}

std::string HttpQueryCfwAccessControllerLogsResponseDTO_data_records::getDstIp() const
{
    return dstIp_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::setDstIp(const std::string& value)
{
    dstIp_ = value;
    dstIpIsSet_ = true;
}

bool HttpQueryCfwAccessControllerLogsResponseDTO_data_records::dstIpIsSet() const
{
    return dstIpIsSet_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::unsetdstIp()
{
    dstIpIsSet_ = false;
}

std::string HttpQueryCfwAccessControllerLogsResponseDTO_data_records::getDstPort() const
{
    return dstPort_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::setDstPort(const std::string& value)
{
    dstPort_ = value;
    dstPortIsSet_ = true;
}

bool HttpQueryCfwAccessControllerLogsResponseDTO_data_records::dstPortIsSet() const
{
    return dstPortIsSet_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::unsetdstPort()
{
    dstPortIsSet_ = false;
}

std::string HttpQueryCfwAccessControllerLogsResponseDTO_data_records::getProtocol() const
{
    return protocol_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool HttpQueryCfwAccessControllerLogsResponseDTO_data_records::protocolIsSet() const
{
    return protocolIsSet_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string HttpQueryCfwAccessControllerLogsResponseDTO_data_records::getApp() const
{
    return app_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool HttpQueryCfwAccessControllerLogsResponseDTO_data_records::appIsSet() const
{
    return appIsSet_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::unsetapp()
{
    appIsSet_ = false;
}

}
}
}
}
}


