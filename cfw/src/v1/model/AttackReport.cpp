

#include "huaweicloud/cfw/v1/model/AttackReport.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AttackReport::AttackReport()
{
    dstIpIsSet_ = false;
    ipsMode_ = 0;
    ipsModeIsSet_ = false;
    levelIsSet_ = false;
    ruleIsSet_ = false;
    srcIpIsSet_ = false;
    trendIsSet_ = false;
    typeIsSet_ = false;
}

AttackReport::~AttackReport() = default;

void AttackReport::validate()
{
}

web::json::value AttackReport::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dstIpIsSet_) {
        val[utility::conversions::to_string_t("dst_ip")] = ModelBase::toJson(dstIp_);
    }
    if(ipsModeIsSet_) {
        val[utility::conversions::to_string_t("ips_mode")] = ModelBase::toJson(ipsMode_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(ruleIsSet_) {
        val[utility::conversions::to_string_t("rule")] = ModelBase::toJson(rule_);
    }
    if(srcIpIsSet_) {
        val[utility::conversions::to_string_t("src_ip")] = ModelBase::toJson(srcIp_);
    }
    if(trendIsSet_) {
        val[utility::conversions::to_string_t("trend")] = ModelBase::toJson(trend_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool AttackReport::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dst_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_ip"));
        if(!fieldValue.is_null())
        {
            std::vector<ItemVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_mode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            std::vector<ItemVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule"));
        if(!fieldValue.is_null())
        {
            std::vector<ItemVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_ip"));
        if(!fieldValue.is_null())
        {
            std::vector<ItemVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trend"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trend"));
        if(!fieldValue.is_null())
        {
            std::vector<TrendVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrend(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::vector<ItemVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::vector<ItemVO>& AttackReport::getDstIp()
{
    return dstIp_;
}

void AttackReport::setDstIp(const std::vector<ItemVO>& value)
{
    dstIp_ = value;
    dstIpIsSet_ = true;
}

bool AttackReport::dstIpIsSet() const
{
    return dstIpIsSet_;
}

void AttackReport::unsetdstIp()
{
    dstIpIsSet_ = false;
}

int32_t AttackReport::getIpsMode() const
{
    return ipsMode_;
}

void AttackReport::setIpsMode(int32_t value)
{
    ipsMode_ = value;
    ipsModeIsSet_ = true;
}

bool AttackReport::ipsModeIsSet() const
{
    return ipsModeIsSet_;
}

void AttackReport::unsetipsMode()
{
    ipsModeIsSet_ = false;
}

std::vector<ItemVO>& AttackReport::getLevel()
{
    return level_;
}

void AttackReport::setLevel(const std::vector<ItemVO>& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool AttackReport::levelIsSet() const
{
    return levelIsSet_;
}

void AttackReport::unsetlevel()
{
    levelIsSet_ = false;
}

std::vector<ItemVO>& AttackReport::getRule()
{
    return rule_;
}

void AttackReport::setRule(const std::vector<ItemVO>& value)
{
    rule_ = value;
    ruleIsSet_ = true;
}

bool AttackReport::ruleIsSet() const
{
    return ruleIsSet_;
}

void AttackReport::unsetrule()
{
    ruleIsSet_ = false;
}

std::vector<ItemVO>& AttackReport::getSrcIp()
{
    return srcIp_;
}

void AttackReport::setSrcIp(const std::vector<ItemVO>& value)
{
    srcIp_ = value;
    srcIpIsSet_ = true;
}

bool AttackReport::srcIpIsSet() const
{
    return srcIpIsSet_;
}

void AttackReport::unsetsrcIp()
{
    srcIpIsSet_ = false;
}

std::vector<TrendVO>& AttackReport::getTrend()
{
    return trend_;
}

void AttackReport::setTrend(const std::vector<TrendVO>& value)
{
    trend_ = value;
    trendIsSet_ = true;
}

bool AttackReport::trendIsSet() const
{
    return trendIsSet_;
}

void AttackReport::unsettrend()
{
    trendIsSet_ = false;
}

std::vector<ItemVO>& AttackReport::getType()
{
    return type_;
}

void AttackReport::setType(const std::vector<ItemVO>& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AttackReport::typeIsSet() const
{
    return typeIsSet_;
}

void AttackReport::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


