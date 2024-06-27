

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
    hitTime_ = 0L;
    hitTimeIsSet_ = false;
    srcRegionId_ = "";
    srcRegionIdIsSet_ = false;
    srcRegionName_ = "";
    srcRegionNameIsSet_ = false;
    dstRegionId_ = "";
    dstRegionIdIsSet_ = false;
    dstRegionName_ = "";
    dstRegionNameIsSet_ = false;
    logId_ = "";
    logIdIsSet_ = false;
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
    dstHost_ = "";
    dstHostIsSet_ = false;
    srcProvinceId_ = "";
    srcProvinceIdIsSet_ = false;
    srcProvinceName_ = "";
    srcProvinceNameIsSet_ = false;
    srcCityId_ = "";
    srcCityIdIsSet_ = false;
    srcCityName_ = "";
    srcCityNameIsSet_ = false;
    dstProvinceId_ = "";
    dstProvinceIdIsSet_ = false;
    dstProvinceName_ = "";
    dstProvinceNameIsSet_ = false;
    dstCityId_ = "";
    dstCityIdIsSet_ = false;
    dstCityName_ = "";
    dstCityNameIsSet_ = false;
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
    if(srcRegionIdIsSet_) {
        val[utility::conversions::to_string_t("src_region_id")] = ModelBase::toJson(srcRegionId_);
    }
    if(srcRegionNameIsSet_) {
        val[utility::conversions::to_string_t("src_region_name")] = ModelBase::toJson(srcRegionName_);
    }
    if(dstRegionIdIsSet_) {
        val[utility::conversions::to_string_t("dst_region_id")] = ModelBase::toJson(dstRegionId_);
    }
    if(dstRegionNameIsSet_) {
        val[utility::conversions::to_string_t("dst_region_name")] = ModelBase::toJson(dstRegionName_);
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
    if(dstHostIsSet_) {
        val[utility::conversions::to_string_t("dst_host")] = ModelBase::toJson(dstHost_);
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
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHitTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("dst_host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_host"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstHost(refVal);
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

int64_t HttpQueryCfwAccessControllerLogsResponseDTO_data_records::getHitTime() const
{
    return hitTime_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::setHitTime(int64_t value)
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

std::string HttpQueryCfwAccessControllerLogsResponseDTO_data_records::getSrcRegionId() const
{
    return srcRegionId_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::setSrcRegionId(const std::string& value)
{
    srcRegionId_ = value;
    srcRegionIdIsSet_ = true;
}

bool HttpQueryCfwAccessControllerLogsResponseDTO_data_records::srcRegionIdIsSet() const
{
    return srcRegionIdIsSet_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::unsetsrcRegionId()
{
    srcRegionIdIsSet_ = false;
}

std::string HttpQueryCfwAccessControllerLogsResponseDTO_data_records::getSrcRegionName() const
{
    return srcRegionName_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::setSrcRegionName(const std::string& value)
{
    srcRegionName_ = value;
    srcRegionNameIsSet_ = true;
}

bool HttpQueryCfwAccessControllerLogsResponseDTO_data_records::srcRegionNameIsSet() const
{
    return srcRegionNameIsSet_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::unsetsrcRegionName()
{
    srcRegionNameIsSet_ = false;
}

std::string HttpQueryCfwAccessControllerLogsResponseDTO_data_records::getDstRegionId() const
{
    return dstRegionId_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::setDstRegionId(const std::string& value)
{
    dstRegionId_ = value;
    dstRegionIdIsSet_ = true;
}

bool HttpQueryCfwAccessControllerLogsResponseDTO_data_records::dstRegionIdIsSet() const
{
    return dstRegionIdIsSet_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::unsetdstRegionId()
{
    dstRegionIdIsSet_ = false;
}

std::string HttpQueryCfwAccessControllerLogsResponseDTO_data_records::getDstRegionName() const
{
    return dstRegionName_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::setDstRegionName(const std::string& value)
{
    dstRegionName_ = value;
    dstRegionNameIsSet_ = true;
}

bool HttpQueryCfwAccessControllerLogsResponseDTO_data_records::dstRegionNameIsSet() const
{
    return dstRegionNameIsSet_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::unsetdstRegionName()
{
    dstRegionNameIsSet_ = false;
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

int32_t HttpQueryCfwAccessControllerLogsResponseDTO_data_records::getSrcPort() const
{
    return srcPort_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::setSrcPort(int32_t value)
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

int32_t HttpQueryCfwAccessControllerLogsResponseDTO_data_records::getDstPort() const
{
    return dstPort_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::setDstPort(int32_t value)
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

std::string HttpQueryCfwAccessControllerLogsResponseDTO_data_records::getDstHost() const
{
    return dstHost_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::setDstHost(const std::string& value)
{
    dstHost_ = value;
    dstHostIsSet_ = true;
}

bool HttpQueryCfwAccessControllerLogsResponseDTO_data_records::dstHostIsSet() const
{
    return dstHostIsSet_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::unsetdstHost()
{
    dstHostIsSet_ = false;
}

std::string HttpQueryCfwAccessControllerLogsResponseDTO_data_records::getSrcProvinceId() const
{
    return srcProvinceId_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::setSrcProvinceId(const std::string& value)
{
    srcProvinceId_ = value;
    srcProvinceIdIsSet_ = true;
}

bool HttpQueryCfwAccessControllerLogsResponseDTO_data_records::srcProvinceIdIsSet() const
{
    return srcProvinceIdIsSet_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::unsetsrcProvinceId()
{
    srcProvinceIdIsSet_ = false;
}

std::string HttpQueryCfwAccessControllerLogsResponseDTO_data_records::getSrcProvinceName() const
{
    return srcProvinceName_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::setSrcProvinceName(const std::string& value)
{
    srcProvinceName_ = value;
    srcProvinceNameIsSet_ = true;
}

bool HttpQueryCfwAccessControllerLogsResponseDTO_data_records::srcProvinceNameIsSet() const
{
    return srcProvinceNameIsSet_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::unsetsrcProvinceName()
{
    srcProvinceNameIsSet_ = false;
}

std::string HttpQueryCfwAccessControllerLogsResponseDTO_data_records::getSrcCityId() const
{
    return srcCityId_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::setSrcCityId(const std::string& value)
{
    srcCityId_ = value;
    srcCityIdIsSet_ = true;
}

bool HttpQueryCfwAccessControllerLogsResponseDTO_data_records::srcCityIdIsSet() const
{
    return srcCityIdIsSet_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::unsetsrcCityId()
{
    srcCityIdIsSet_ = false;
}

std::string HttpQueryCfwAccessControllerLogsResponseDTO_data_records::getSrcCityName() const
{
    return srcCityName_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::setSrcCityName(const std::string& value)
{
    srcCityName_ = value;
    srcCityNameIsSet_ = true;
}

bool HttpQueryCfwAccessControllerLogsResponseDTO_data_records::srcCityNameIsSet() const
{
    return srcCityNameIsSet_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::unsetsrcCityName()
{
    srcCityNameIsSet_ = false;
}

std::string HttpQueryCfwAccessControllerLogsResponseDTO_data_records::getDstProvinceId() const
{
    return dstProvinceId_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::setDstProvinceId(const std::string& value)
{
    dstProvinceId_ = value;
    dstProvinceIdIsSet_ = true;
}

bool HttpQueryCfwAccessControllerLogsResponseDTO_data_records::dstProvinceIdIsSet() const
{
    return dstProvinceIdIsSet_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::unsetdstProvinceId()
{
    dstProvinceIdIsSet_ = false;
}

std::string HttpQueryCfwAccessControllerLogsResponseDTO_data_records::getDstProvinceName() const
{
    return dstProvinceName_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::setDstProvinceName(const std::string& value)
{
    dstProvinceName_ = value;
    dstProvinceNameIsSet_ = true;
}

bool HttpQueryCfwAccessControllerLogsResponseDTO_data_records::dstProvinceNameIsSet() const
{
    return dstProvinceNameIsSet_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::unsetdstProvinceName()
{
    dstProvinceNameIsSet_ = false;
}

std::string HttpQueryCfwAccessControllerLogsResponseDTO_data_records::getDstCityId() const
{
    return dstCityId_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::setDstCityId(const std::string& value)
{
    dstCityId_ = value;
    dstCityIdIsSet_ = true;
}

bool HttpQueryCfwAccessControllerLogsResponseDTO_data_records::dstCityIdIsSet() const
{
    return dstCityIdIsSet_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::unsetdstCityId()
{
    dstCityIdIsSet_ = false;
}

std::string HttpQueryCfwAccessControllerLogsResponseDTO_data_records::getDstCityName() const
{
    return dstCityName_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::setDstCityName(const std::string& value)
{
    dstCityName_ = value;
    dstCityNameIsSet_ = true;
}

bool HttpQueryCfwAccessControllerLogsResponseDTO_data_records::dstCityNameIsSet() const
{
    return dstCityNameIsSet_;
}

void HttpQueryCfwAccessControllerLogsResponseDTO_data_records::unsetdstCityName()
{
    dstCityNameIsSet_ = false;
}

}
}
}
}
}


