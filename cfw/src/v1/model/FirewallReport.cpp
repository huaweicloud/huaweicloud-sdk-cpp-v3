

#include "huaweicloud/cfw/v1/model/FirewallReport.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




FirewallReport::FirewallReport()
{
    attackInfoIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    internetFirewallIsSet_ = false;
    sendTime_ = 0L;
    sendTimeIsSet_ = false;
    statisticPeriodIsSet_ = false;
    vpcFirewallIsSet_ = false;
}

FirewallReport::~FirewallReport() = default;

void FirewallReport::validate()
{
}

web::json::value FirewallReport::toJson() const
{
    web::json::value val = web::json::value::object();

    if(attackInfoIsSet_) {
        val[utility::conversions::to_string_t("attack_info")] = ModelBase::toJson(attackInfo_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(internetFirewallIsSet_) {
        val[utility::conversions::to_string_t("internet_firewall")] = ModelBase::toJson(internetFirewall_);
    }
    if(sendTimeIsSet_) {
        val[utility::conversions::to_string_t("send_time")] = ModelBase::toJson(sendTime_);
    }
    if(statisticPeriodIsSet_) {
        val[utility::conversions::to_string_t("statistic_period")] = ModelBase::toJson(statisticPeriod_);
    }
    if(vpcFirewallIsSet_) {
        val[utility::conversions::to_string_t("vpc_firewall")] = ModelBase::toJson(vpcFirewall_);
    }

    return val;
}
bool FirewallReport::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("attack_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack_info"));
        if(!fieldValue.is_null())
        {
            AttackReport refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttackInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("internet_firewall"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internet_firewall"));
        if(!fieldValue.is_null())
        {
            InternetReport refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInternetFirewall(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("send_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("send_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSendTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("statistic_period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("statistic_period"));
        if(!fieldValue.is_null())
        {
            StatisticPeriod refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatisticPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_firewall"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_firewall"));
        if(!fieldValue.is_null())
        {
            VpcReport refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcFirewall(refVal);
        }
    }
    return ok;
}


AttackReport FirewallReport::getAttackInfo() const
{
    return attackInfo_;
}

void FirewallReport::setAttackInfo(const AttackReport& value)
{
    attackInfo_ = value;
    attackInfoIsSet_ = true;
}

bool FirewallReport::attackInfoIsSet() const
{
    return attackInfoIsSet_;
}

void FirewallReport::unsetattackInfo()
{
    attackInfoIsSet_ = false;
}

std::string FirewallReport::getCategory() const
{
    return category_;
}

void FirewallReport::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool FirewallReport::categoryIsSet() const
{
    return categoryIsSet_;
}

void FirewallReport::unsetcategory()
{
    categoryIsSet_ = false;
}

InternetReport FirewallReport::getInternetFirewall() const
{
    return internetFirewall_;
}

void FirewallReport::setInternetFirewall(const InternetReport& value)
{
    internetFirewall_ = value;
    internetFirewallIsSet_ = true;
}

bool FirewallReport::internetFirewallIsSet() const
{
    return internetFirewallIsSet_;
}

void FirewallReport::unsetinternetFirewall()
{
    internetFirewallIsSet_ = false;
}

int64_t FirewallReport::getSendTime() const
{
    return sendTime_;
}

void FirewallReport::setSendTime(int64_t value)
{
    sendTime_ = value;
    sendTimeIsSet_ = true;
}

bool FirewallReport::sendTimeIsSet() const
{
    return sendTimeIsSet_;
}

void FirewallReport::unsetsendTime()
{
    sendTimeIsSet_ = false;
}

StatisticPeriod FirewallReport::getStatisticPeriod() const
{
    return statisticPeriod_;
}

void FirewallReport::setStatisticPeriod(const StatisticPeriod& value)
{
    statisticPeriod_ = value;
    statisticPeriodIsSet_ = true;
}

bool FirewallReport::statisticPeriodIsSet() const
{
    return statisticPeriodIsSet_;
}

void FirewallReport::unsetstatisticPeriod()
{
    statisticPeriodIsSet_ = false;
}

VpcReport FirewallReport::getVpcFirewall() const
{
    return vpcFirewall_;
}

void FirewallReport::setVpcFirewall(const VpcReport& value)
{
    vpcFirewall_ = value;
    vpcFirewallIsSet_ = true;
}

bool FirewallReport::vpcFirewallIsSet() const
{
    return vpcFirewallIsSet_;
}

void FirewallReport::unsetvpcFirewall()
{
    vpcFirewallIsSet_ = false;
}

}
}
}
}
}


