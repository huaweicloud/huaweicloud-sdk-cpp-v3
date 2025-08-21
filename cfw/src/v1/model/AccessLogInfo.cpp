

#include "huaweicloud/cfw/v1/model/AccessLogInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AccessLogInfo::AccessLogInfo()
{
    action_ = "";
    actionIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    dstHost_ = "";
    dstHostIsSet_ = false;
    dstIp_ = "";
    dstIpIsSet_ = false;
    dstPort_ = 0;
    dstPortIsSet_ = false;
    dstRegionId_ = "";
    dstRegionIdIsSet_ = false;
    dstRegionName_ = "";
    dstRegionNameIsSet_ = false;
    dstProvinceId_ = "";
    dstProvinceIdIsSet_ = false;
    dstProvinceName_ = "";
    dstProvinceNameIsSet_ = false;
    dstCityId_ = "";
    dstCityIdIsSet_ = false;
    dstCityName_ = "";
    dstCityNameIsSet_ = false;
    hitTime_ = 0L;
    hitTimeIsSet_ = false;
    logId_ = "";
    logIdIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    ruleId_ = "";
    ruleIdIsSet_ = false;
    ruleName_ = "";
    ruleNameIsSet_ = false;
    ruleType_ = 0;
    ruleTypeIsSet_ = false;
    srcIp_ = "";
    srcIpIsSet_ = false;
    srcPort_ = 0;
    srcPortIsSet_ = false;
    srcRegionId_ = "";
    srcRegionIdIsSet_ = false;
    srcRegionName_ = "";
    srcRegionNameIsSet_ = false;
    srcProvinceId_ = "";
    srcProvinceIdIsSet_ = false;
    srcProvinceName_ = "";
    srcProvinceNameIsSet_ = false;
    srcCityId_ = "";
    srcCityIdIsSet_ = false;
    srcCityName_ = "";
    srcCityNameIsSet_ = false;
    vgwId_ = "";
    vgwIdIsSet_ = false;
    qosRuleId_ = "";
    qosRuleIdIsSet_ = false;
    qosRuleName_ = "";
    qosRuleNameIsSet_ = false;
    qosRuleType_ = 0;
    qosRuleTypeIsSet_ = false;
}

AccessLogInfo::~AccessLogInfo() = default;

void AccessLogInfo::validate()
{
}

web::json::value AccessLogInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(dstHostIsSet_) {
        val[utility::conversions::to_string_t("dst_host")] = ModelBase::toJson(dstHost_);
    }
    if(dstIpIsSet_) {
        val[utility::conversions::to_string_t("dst_ip")] = ModelBase::toJson(dstIp_);
    }
    if(dstPortIsSet_) {
        val[utility::conversions::to_string_t("dst_port")] = ModelBase::toJson(dstPort_);
    }
    if(dstRegionIdIsSet_) {
        val[utility::conversions::to_string_t("dst_region_id")] = ModelBase::toJson(dstRegionId_);
    }
    if(dstRegionNameIsSet_) {
        val[utility::conversions::to_string_t("dst_region_name")] = ModelBase::toJson(dstRegionName_);
    }
    if(dstProvinceIdIsSet_) {
        val[utility::conversions::to_string_t("dst_province_id")] = ModelBase::toJson(dstProvinceId_);
    }
    if(dstProvinceNameIsSet_) {
        val[utility::conversions::to_string_t("dst_province_name")] = ModelBase::toJson(dstProvinceName_);
    }
    if(dstCityIdIsSet_) {
        val[utility::conversions::to_string_t("dst_city_id")] = ModelBase::toJson(dstCityId_);
    }
    if(dstCityNameIsSet_) {
        val[utility::conversions::to_string_t("dst_city_name")] = ModelBase::toJson(dstCityName_);
    }
    if(hitTimeIsSet_) {
        val[utility::conversions::to_string_t("hit_time")] = ModelBase::toJson(hitTime_);
    }
    if(logIdIsSet_) {
        val[utility::conversions::to_string_t("log_id")] = ModelBase::toJson(logId_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }
    if(ruleTypeIsSet_) {
        val[utility::conversions::to_string_t("rule_type")] = ModelBase::toJson(ruleType_);
    }
    if(srcIpIsSet_) {
        val[utility::conversions::to_string_t("src_ip")] = ModelBase::toJson(srcIp_);
    }
    if(srcPortIsSet_) {
        val[utility::conversions::to_string_t("src_port")] = ModelBase::toJson(srcPort_);
    }
    if(srcRegionIdIsSet_) {
        val[utility::conversions::to_string_t("src_region_id")] = ModelBase::toJson(srcRegionId_);
    }
    if(srcRegionNameIsSet_) {
        val[utility::conversions::to_string_t("src_region_name")] = ModelBase::toJson(srcRegionName_);
    }
    if(srcProvinceIdIsSet_) {
        val[utility::conversions::to_string_t("src_province_id")] = ModelBase::toJson(srcProvinceId_);
    }
    if(srcProvinceNameIsSet_) {
        val[utility::conversions::to_string_t("src_province_name")] = ModelBase::toJson(srcProvinceName_);
    }
    if(srcCityIdIsSet_) {
        val[utility::conversions::to_string_t("src_city_id")] = ModelBase::toJson(srcCityId_);
    }
    if(srcCityNameIsSet_) {
        val[utility::conversions::to_string_t("src_city_name")] = ModelBase::toJson(srcCityName_);
    }
    if(vgwIdIsSet_) {
        val[utility::conversions::to_string_t("vgw_id")] = ModelBase::toJson(vgwId_);
    }
    if(qosRuleIdIsSet_) {
        val[utility::conversions::to_string_t("qos_rule_id")] = ModelBase::toJson(qosRuleId_);
    }
    if(qosRuleNameIsSet_) {
        val[utility::conversions::to_string_t("qos_rule_name")] = ModelBase::toJson(qosRuleName_);
    }
    if(qosRuleTypeIsSet_) {
        val[utility::conversions::to_string_t("qos_rule_type")] = ModelBase::toJson(qosRuleType_);
    }

    return val;
}
bool AccessLogInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_host"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstHost(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("dst_region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstRegionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_region_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_region_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstRegionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_province_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_province_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstProvinceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_province_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_province_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstProvinceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_city_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_city_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstCityId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_city_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_city_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstCityName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hit_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hit_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
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
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("rule_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("src_region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcRegionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_region_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_region_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcRegionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_province_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_province_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcProvinceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_province_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_province_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcProvinceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_city_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_city_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcCityId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_city_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_city_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcCityName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vgw_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vgw_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVgwId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("qos_rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("qos_rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQosRuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("qos_rule_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("qos_rule_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQosRuleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("qos_rule_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("qos_rule_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQosRuleType(refVal);
        }
    }
    return ok;
}


std::string AccessLogInfo::getAction() const
{
    return action_;
}

void AccessLogInfo::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool AccessLogInfo::actionIsSet() const
{
    return actionIsSet_;
}

void AccessLogInfo::unsetaction()
{
    actionIsSet_ = false;
}

std::string AccessLogInfo::getApp() const
{
    return app_;
}

void AccessLogInfo::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool AccessLogInfo::appIsSet() const
{
    return appIsSet_;
}

void AccessLogInfo::unsetapp()
{
    appIsSet_ = false;
}

std::string AccessLogInfo::getUrl() const
{
    return url_;
}

void AccessLogInfo::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool AccessLogInfo::urlIsSet() const
{
    return urlIsSet_;
}

void AccessLogInfo::unseturl()
{
    urlIsSet_ = false;
}

std::string AccessLogInfo::getDstHost() const
{
    return dstHost_;
}

void AccessLogInfo::setDstHost(const std::string& value)
{
    dstHost_ = value;
    dstHostIsSet_ = true;
}

bool AccessLogInfo::dstHostIsSet() const
{
    return dstHostIsSet_;
}

void AccessLogInfo::unsetdstHost()
{
    dstHostIsSet_ = false;
}

std::string AccessLogInfo::getDstIp() const
{
    return dstIp_;
}

void AccessLogInfo::setDstIp(const std::string& value)
{
    dstIp_ = value;
    dstIpIsSet_ = true;
}

bool AccessLogInfo::dstIpIsSet() const
{
    return dstIpIsSet_;
}

void AccessLogInfo::unsetdstIp()
{
    dstIpIsSet_ = false;
}

int32_t AccessLogInfo::getDstPort() const
{
    return dstPort_;
}

void AccessLogInfo::setDstPort(int32_t value)
{
    dstPort_ = value;
    dstPortIsSet_ = true;
}

bool AccessLogInfo::dstPortIsSet() const
{
    return dstPortIsSet_;
}

void AccessLogInfo::unsetdstPort()
{
    dstPortIsSet_ = false;
}

std::string AccessLogInfo::getDstRegionId() const
{
    return dstRegionId_;
}

void AccessLogInfo::setDstRegionId(const std::string& value)
{
    dstRegionId_ = value;
    dstRegionIdIsSet_ = true;
}

bool AccessLogInfo::dstRegionIdIsSet() const
{
    return dstRegionIdIsSet_;
}

void AccessLogInfo::unsetdstRegionId()
{
    dstRegionIdIsSet_ = false;
}

std::string AccessLogInfo::getDstRegionName() const
{
    return dstRegionName_;
}

void AccessLogInfo::setDstRegionName(const std::string& value)
{
    dstRegionName_ = value;
    dstRegionNameIsSet_ = true;
}

bool AccessLogInfo::dstRegionNameIsSet() const
{
    return dstRegionNameIsSet_;
}

void AccessLogInfo::unsetdstRegionName()
{
    dstRegionNameIsSet_ = false;
}

std::string AccessLogInfo::getDstProvinceId() const
{
    return dstProvinceId_;
}

void AccessLogInfo::setDstProvinceId(const std::string& value)
{
    dstProvinceId_ = value;
    dstProvinceIdIsSet_ = true;
}

bool AccessLogInfo::dstProvinceIdIsSet() const
{
    return dstProvinceIdIsSet_;
}

void AccessLogInfo::unsetdstProvinceId()
{
    dstProvinceIdIsSet_ = false;
}

std::string AccessLogInfo::getDstProvinceName() const
{
    return dstProvinceName_;
}

void AccessLogInfo::setDstProvinceName(const std::string& value)
{
    dstProvinceName_ = value;
    dstProvinceNameIsSet_ = true;
}

bool AccessLogInfo::dstProvinceNameIsSet() const
{
    return dstProvinceNameIsSet_;
}

void AccessLogInfo::unsetdstProvinceName()
{
    dstProvinceNameIsSet_ = false;
}

std::string AccessLogInfo::getDstCityId() const
{
    return dstCityId_;
}

void AccessLogInfo::setDstCityId(const std::string& value)
{
    dstCityId_ = value;
    dstCityIdIsSet_ = true;
}

bool AccessLogInfo::dstCityIdIsSet() const
{
    return dstCityIdIsSet_;
}

void AccessLogInfo::unsetdstCityId()
{
    dstCityIdIsSet_ = false;
}

std::string AccessLogInfo::getDstCityName() const
{
    return dstCityName_;
}

void AccessLogInfo::setDstCityName(const std::string& value)
{
    dstCityName_ = value;
    dstCityNameIsSet_ = true;
}

bool AccessLogInfo::dstCityNameIsSet() const
{
    return dstCityNameIsSet_;
}

void AccessLogInfo::unsetdstCityName()
{
    dstCityNameIsSet_ = false;
}

int64_t AccessLogInfo::getHitTime() const
{
    return hitTime_;
}

void AccessLogInfo::setHitTime(int64_t value)
{
    hitTime_ = value;
    hitTimeIsSet_ = true;
}

bool AccessLogInfo::hitTimeIsSet() const
{
    return hitTimeIsSet_;
}

void AccessLogInfo::unsethitTime()
{
    hitTimeIsSet_ = false;
}

std::string AccessLogInfo::getLogId() const
{
    return logId_;
}

void AccessLogInfo::setLogId(const std::string& value)
{
    logId_ = value;
    logIdIsSet_ = true;
}

bool AccessLogInfo::logIdIsSet() const
{
    return logIdIsSet_;
}

void AccessLogInfo::unsetlogId()
{
    logIdIsSet_ = false;
}

std::string AccessLogInfo::getProtocol() const
{
    return protocol_;
}

void AccessLogInfo::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool AccessLogInfo::protocolIsSet() const
{
    return protocolIsSet_;
}

void AccessLogInfo::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string AccessLogInfo::getRuleId() const
{
    return ruleId_;
}

void AccessLogInfo::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool AccessLogInfo::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void AccessLogInfo::unsetruleId()
{
    ruleIdIsSet_ = false;
}

std::string AccessLogInfo::getRuleName() const
{
    return ruleName_;
}

void AccessLogInfo::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool AccessLogInfo::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void AccessLogInfo::unsetruleName()
{
    ruleNameIsSet_ = false;
}

int32_t AccessLogInfo::getRuleType() const
{
    return ruleType_;
}

void AccessLogInfo::setRuleType(int32_t value)
{
    ruleType_ = value;
    ruleTypeIsSet_ = true;
}

bool AccessLogInfo::ruleTypeIsSet() const
{
    return ruleTypeIsSet_;
}

void AccessLogInfo::unsetruleType()
{
    ruleTypeIsSet_ = false;
}

std::string AccessLogInfo::getSrcIp() const
{
    return srcIp_;
}

void AccessLogInfo::setSrcIp(const std::string& value)
{
    srcIp_ = value;
    srcIpIsSet_ = true;
}

bool AccessLogInfo::srcIpIsSet() const
{
    return srcIpIsSet_;
}

void AccessLogInfo::unsetsrcIp()
{
    srcIpIsSet_ = false;
}

int32_t AccessLogInfo::getSrcPort() const
{
    return srcPort_;
}

void AccessLogInfo::setSrcPort(int32_t value)
{
    srcPort_ = value;
    srcPortIsSet_ = true;
}

bool AccessLogInfo::srcPortIsSet() const
{
    return srcPortIsSet_;
}

void AccessLogInfo::unsetsrcPort()
{
    srcPortIsSet_ = false;
}

std::string AccessLogInfo::getSrcRegionId() const
{
    return srcRegionId_;
}

void AccessLogInfo::setSrcRegionId(const std::string& value)
{
    srcRegionId_ = value;
    srcRegionIdIsSet_ = true;
}

bool AccessLogInfo::srcRegionIdIsSet() const
{
    return srcRegionIdIsSet_;
}

void AccessLogInfo::unsetsrcRegionId()
{
    srcRegionIdIsSet_ = false;
}

std::string AccessLogInfo::getSrcRegionName() const
{
    return srcRegionName_;
}

void AccessLogInfo::setSrcRegionName(const std::string& value)
{
    srcRegionName_ = value;
    srcRegionNameIsSet_ = true;
}

bool AccessLogInfo::srcRegionNameIsSet() const
{
    return srcRegionNameIsSet_;
}

void AccessLogInfo::unsetsrcRegionName()
{
    srcRegionNameIsSet_ = false;
}

std::string AccessLogInfo::getSrcProvinceId() const
{
    return srcProvinceId_;
}

void AccessLogInfo::setSrcProvinceId(const std::string& value)
{
    srcProvinceId_ = value;
    srcProvinceIdIsSet_ = true;
}

bool AccessLogInfo::srcProvinceIdIsSet() const
{
    return srcProvinceIdIsSet_;
}

void AccessLogInfo::unsetsrcProvinceId()
{
    srcProvinceIdIsSet_ = false;
}

std::string AccessLogInfo::getSrcProvinceName() const
{
    return srcProvinceName_;
}

void AccessLogInfo::setSrcProvinceName(const std::string& value)
{
    srcProvinceName_ = value;
    srcProvinceNameIsSet_ = true;
}

bool AccessLogInfo::srcProvinceNameIsSet() const
{
    return srcProvinceNameIsSet_;
}

void AccessLogInfo::unsetsrcProvinceName()
{
    srcProvinceNameIsSet_ = false;
}

std::string AccessLogInfo::getSrcCityId() const
{
    return srcCityId_;
}

void AccessLogInfo::setSrcCityId(const std::string& value)
{
    srcCityId_ = value;
    srcCityIdIsSet_ = true;
}

bool AccessLogInfo::srcCityIdIsSet() const
{
    return srcCityIdIsSet_;
}

void AccessLogInfo::unsetsrcCityId()
{
    srcCityIdIsSet_ = false;
}

std::string AccessLogInfo::getSrcCityName() const
{
    return srcCityName_;
}

void AccessLogInfo::setSrcCityName(const std::string& value)
{
    srcCityName_ = value;
    srcCityNameIsSet_ = true;
}

bool AccessLogInfo::srcCityNameIsSet() const
{
    return srcCityNameIsSet_;
}

void AccessLogInfo::unsetsrcCityName()
{
    srcCityNameIsSet_ = false;
}

std::string AccessLogInfo::getVgwId() const
{
    return vgwId_;
}

void AccessLogInfo::setVgwId(const std::string& value)
{
    vgwId_ = value;
    vgwIdIsSet_ = true;
}

bool AccessLogInfo::vgwIdIsSet() const
{
    return vgwIdIsSet_;
}

void AccessLogInfo::unsetvgwId()
{
    vgwIdIsSet_ = false;
}

std::string AccessLogInfo::getQosRuleId() const
{
    return qosRuleId_;
}

void AccessLogInfo::setQosRuleId(const std::string& value)
{
    qosRuleId_ = value;
    qosRuleIdIsSet_ = true;
}

bool AccessLogInfo::qosRuleIdIsSet() const
{
    return qosRuleIdIsSet_;
}

void AccessLogInfo::unsetqosRuleId()
{
    qosRuleIdIsSet_ = false;
}

std::string AccessLogInfo::getQosRuleName() const
{
    return qosRuleName_;
}

void AccessLogInfo::setQosRuleName(const std::string& value)
{
    qosRuleName_ = value;
    qosRuleNameIsSet_ = true;
}

bool AccessLogInfo::qosRuleNameIsSet() const
{
    return qosRuleNameIsSet_;
}

void AccessLogInfo::unsetqosRuleName()
{
    qosRuleNameIsSet_ = false;
}

int32_t AccessLogInfo::getQosRuleType() const
{
    return qosRuleType_;
}

void AccessLogInfo::setQosRuleType(int32_t value)
{
    qosRuleType_ = value;
    qosRuleTypeIsSet_ = true;
}

bool AccessLogInfo::qosRuleTypeIsSet() const
{
    return qosRuleTypeIsSet_;
}

void AccessLogInfo::unsetqosRuleType()
{
    qosRuleTypeIsSet_ = false;
}

}
}
}
}
}


