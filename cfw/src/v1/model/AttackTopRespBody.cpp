

#include "huaweicloud/cfw/v1/model/AttackTopRespBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AttackTopRespBody::AttackTopRespBody()
{
    attackRuleIsSet_ = false;
    attackTypeIsSet_ = false;
    dstIpIsSet_ = false;
    dstPortIsSet_ = false;
    inSrcIpIsSet_ = false;
    levelIsSet_ = false;
    outSrcIpIsSet_ = false;
    srcIpIsSet_ = false;
    srcRegionIdIsSet_ = false;
}

AttackTopRespBody::~AttackTopRespBody() = default;

void AttackTopRespBody::validate()
{
}

web::json::value AttackTopRespBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(attackRuleIsSet_) {
        val[utility::conversions::to_string_t("attack_rule")] = ModelBase::toJson(attackRule_);
    }
    if(attackTypeIsSet_) {
        val[utility::conversions::to_string_t("attack_type")] = ModelBase::toJson(attackType_);
    }
    if(dstIpIsSet_) {
        val[utility::conversions::to_string_t("dst_ip")] = ModelBase::toJson(dstIp_);
    }
    if(dstPortIsSet_) {
        val[utility::conversions::to_string_t("dst_port")] = ModelBase::toJson(dstPort_);
    }
    if(inSrcIpIsSet_) {
        val[utility::conversions::to_string_t("in_src_ip")] = ModelBase::toJson(inSrcIp_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(outSrcIpIsSet_) {
        val[utility::conversions::to_string_t("out_src_ip")] = ModelBase::toJson(outSrcIp_);
    }
    if(srcIpIsSet_) {
        val[utility::conversions::to_string_t("src_ip")] = ModelBase::toJson(srcIp_);
    }
    if(srcRegionIdIsSet_) {
        val[utility::conversions::to_string_t("src_region_id")] = ModelBase::toJson(srcRegionId_);
    }

    return val;
}
bool AttackTopRespBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("attack_rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack_rule"));
        if(!fieldValue.is_null())
        {
            std::vector<TopInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttackRule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attack_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack_type"));
        if(!fieldValue.is_null())
        {
            std::vector<TopInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttackType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_ip"));
        if(!fieldValue.is_null())
        {
            std::vector<TopInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_port"));
        if(!fieldValue.is_null())
        {
            std::vector<TopInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("in_src_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("in_src_ip"));
        if(!fieldValue.is_null())
        {
            std::vector<TopInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInSrcIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            std::vector<TopInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("out_src_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("out_src_ip"));
        if(!fieldValue.is_null())
        {
            std::vector<TopInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutSrcIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_ip"));
        if(!fieldValue.is_null())
        {
            std::vector<TopInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_region_id"));
        if(!fieldValue.is_null())
        {
            std::vector<TopInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcRegionId(refVal);
        }
    }
    return ok;
}


std::vector<TopInfo>& AttackTopRespBody::getAttackRule()
{
    return attackRule_;
}

void AttackTopRespBody::setAttackRule(const std::vector<TopInfo>& value)
{
    attackRule_ = value;
    attackRuleIsSet_ = true;
}

bool AttackTopRespBody::attackRuleIsSet() const
{
    return attackRuleIsSet_;
}

void AttackTopRespBody::unsetattackRule()
{
    attackRuleIsSet_ = false;
}

std::vector<TopInfo>& AttackTopRespBody::getAttackType()
{
    return attackType_;
}

void AttackTopRespBody::setAttackType(const std::vector<TopInfo>& value)
{
    attackType_ = value;
    attackTypeIsSet_ = true;
}

bool AttackTopRespBody::attackTypeIsSet() const
{
    return attackTypeIsSet_;
}

void AttackTopRespBody::unsetattackType()
{
    attackTypeIsSet_ = false;
}

std::vector<TopInfo>& AttackTopRespBody::getDstIp()
{
    return dstIp_;
}

void AttackTopRespBody::setDstIp(const std::vector<TopInfo>& value)
{
    dstIp_ = value;
    dstIpIsSet_ = true;
}

bool AttackTopRespBody::dstIpIsSet() const
{
    return dstIpIsSet_;
}

void AttackTopRespBody::unsetdstIp()
{
    dstIpIsSet_ = false;
}

std::vector<TopInfo>& AttackTopRespBody::getDstPort()
{
    return dstPort_;
}

void AttackTopRespBody::setDstPort(const std::vector<TopInfo>& value)
{
    dstPort_ = value;
    dstPortIsSet_ = true;
}

bool AttackTopRespBody::dstPortIsSet() const
{
    return dstPortIsSet_;
}

void AttackTopRespBody::unsetdstPort()
{
    dstPortIsSet_ = false;
}

std::vector<TopInfo>& AttackTopRespBody::getInSrcIp()
{
    return inSrcIp_;
}

void AttackTopRespBody::setInSrcIp(const std::vector<TopInfo>& value)
{
    inSrcIp_ = value;
    inSrcIpIsSet_ = true;
}

bool AttackTopRespBody::inSrcIpIsSet() const
{
    return inSrcIpIsSet_;
}

void AttackTopRespBody::unsetinSrcIp()
{
    inSrcIpIsSet_ = false;
}

std::vector<TopInfo>& AttackTopRespBody::getLevel()
{
    return level_;
}

void AttackTopRespBody::setLevel(const std::vector<TopInfo>& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool AttackTopRespBody::levelIsSet() const
{
    return levelIsSet_;
}

void AttackTopRespBody::unsetlevel()
{
    levelIsSet_ = false;
}

std::vector<TopInfo>& AttackTopRespBody::getOutSrcIp()
{
    return outSrcIp_;
}

void AttackTopRespBody::setOutSrcIp(const std::vector<TopInfo>& value)
{
    outSrcIp_ = value;
    outSrcIpIsSet_ = true;
}

bool AttackTopRespBody::outSrcIpIsSet() const
{
    return outSrcIpIsSet_;
}

void AttackTopRespBody::unsetoutSrcIp()
{
    outSrcIpIsSet_ = false;
}

std::vector<TopInfo>& AttackTopRespBody::getSrcIp()
{
    return srcIp_;
}

void AttackTopRespBody::setSrcIp(const std::vector<TopInfo>& value)
{
    srcIp_ = value;
    srcIpIsSet_ = true;
}

bool AttackTopRespBody::srcIpIsSet() const
{
    return srcIpIsSet_;
}

void AttackTopRespBody::unsetsrcIp()
{
    srcIpIsSet_ = false;
}

std::vector<TopInfo>& AttackTopRespBody::getSrcRegionId()
{
    return srcRegionId_;
}

void AttackTopRespBody::setSrcRegionId(const std::vector<TopInfo>& value)
{
    srcRegionId_ = value;
    srcRegionIdIsSet_ = true;
}

bool AttackTopRespBody::srcRegionIdIsSet() const
{
    return srcRegionIdIsSet_;
}

void AttackTopRespBody::unsetsrcRegionId()
{
    srcRegionIdIsSet_ = false;
}

}
}
}
}
}


