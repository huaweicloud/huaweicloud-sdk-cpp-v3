

#include "huaweicloud/cfw/v1/model/AttackDetailVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AttackDetailVO::AttackDetailVO()
{
    appCount_ = 0L;
    appCountIsSet_ = false;
    attackRuleCount_ = 0L;
    attackRuleCountIsSet_ = false;
    attackTypeCount_ = 0L;
    attackTypeCountIsSet_ = false;
    count_ = 0L;
    countIsSet_ = false;
    dstIpCount_ = 0L;
    dstIpCountIsSet_ = false;
    dstPortCount_ = 0L;
    dstPortCountIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    recordsIsSet_ = false;
    srcIpCount_ = 0L;
    srcIpCountIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
}

AttackDetailVO::~AttackDetailVO() = default;

void AttackDetailVO::validate()
{
}

web::json::value AttackDetailVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appCountIsSet_) {
        val[utility::conversions::to_string_t("app_count")] = ModelBase::toJson(appCount_);
    }
    if(attackRuleCountIsSet_) {
        val[utility::conversions::to_string_t("attack_rule_count")] = ModelBase::toJson(attackRuleCount_);
    }
    if(attackTypeCountIsSet_) {
        val[utility::conversions::to_string_t("attack_type_count")] = ModelBase::toJson(attackTypeCount_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(dstIpCountIsSet_) {
        val[utility::conversions::to_string_t("dst_ip_count")] = ModelBase::toJson(dstIpCount_);
    }
    if(dstPortCountIsSet_) {
        val[utility::conversions::to_string_t("dst_port_count")] = ModelBase::toJson(dstPortCount_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(recordsIsSet_) {
        val[utility::conversions::to_string_t("records")] = ModelBase::toJson(records_);
    }
    if(srcIpCountIsSet_) {
        val[utility::conversions::to_string_t("src_ip_count")] = ModelBase::toJson(srcIpCount_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool AttackDetailVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attack_rule_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack_rule_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttackRuleCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attack_type_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack_type_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttackTypeCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_ip_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_ip_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstIpCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_port_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_port_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstPortCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("records"));
        if(!fieldValue.is_null())
        {
            std::vector<AttackLog> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_ip_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_ip_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcIpCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


int64_t AttackDetailVO::getAppCount() const
{
    return appCount_;
}

void AttackDetailVO::setAppCount(int64_t value)
{
    appCount_ = value;
    appCountIsSet_ = true;
}

bool AttackDetailVO::appCountIsSet() const
{
    return appCountIsSet_;
}

void AttackDetailVO::unsetappCount()
{
    appCountIsSet_ = false;
}

int64_t AttackDetailVO::getAttackRuleCount() const
{
    return attackRuleCount_;
}

void AttackDetailVO::setAttackRuleCount(int64_t value)
{
    attackRuleCount_ = value;
    attackRuleCountIsSet_ = true;
}

bool AttackDetailVO::attackRuleCountIsSet() const
{
    return attackRuleCountIsSet_;
}

void AttackDetailVO::unsetattackRuleCount()
{
    attackRuleCountIsSet_ = false;
}

int64_t AttackDetailVO::getAttackTypeCount() const
{
    return attackTypeCount_;
}

void AttackDetailVO::setAttackTypeCount(int64_t value)
{
    attackTypeCount_ = value;
    attackTypeCountIsSet_ = true;
}

bool AttackDetailVO::attackTypeCountIsSet() const
{
    return attackTypeCountIsSet_;
}

void AttackDetailVO::unsetattackTypeCount()
{
    attackTypeCountIsSet_ = false;
}

int64_t AttackDetailVO::getCount() const
{
    return count_;
}

void AttackDetailVO::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool AttackDetailVO::countIsSet() const
{
    return countIsSet_;
}

void AttackDetailVO::unsetcount()
{
    countIsSet_ = false;
}

int64_t AttackDetailVO::getDstIpCount() const
{
    return dstIpCount_;
}

void AttackDetailVO::setDstIpCount(int64_t value)
{
    dstIpCount_ = value;
    dstIpCountIsSet_ = true;
}

bool AttackDetailVO::dstIpCountIsSet() const
{
    return dstIpCountIsSet_;
}

void AttackDetailVO::unsetdstIpCount()
{
    dstIpCountIsSet_ = false;
}

int64_t AttackDetailVO::getDstPortCount() const
{
    return dstPortCount_;
}

void AttackDetailVO::setDstPortCount(int64_t value)
{
    dstPortCount_ = value;
    dstPortCountIsSet_ = true;
}

bool AttackDetailVO::dstPortCountIsSet() const
{
    return dstPortCountIsSet_;
}

void AttackDetailVO::unsetdstPortCount()
{
    dstPortCountIsSet_ = false;
}

int64_t AttackDetailVO::getEndTime() const
{
    return endTime_;
}

void AttackDetailVO::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool AttackDetailVO::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void AttackDetailVO::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<AttackLog>& AttackDetailVO::getRecords()
{
    return records_;
}

void AttackDetailVO::setRecords(const std::vector<AttackLog>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool AttackDetailVO::recordsIsSet() const
{
    return recordsIsSet_;
}

void AttackDetailVO::unsetrecords()
{
    recordsIsSet_ = false;
}

int64_t AttackDetailVO::getSrcIpCount() const
{
    return srcIpCount_;
}

void AttackDetailVO::setSrcIpCount(int64_t value)
{
    srcIpCount_ = value;
    srcIpCountIsSet_ = true;
}

bool AttackDetailVO::srcIpCountIsSet() const
{
    return srcIpCountIsSet_;
}

void AttackDetailVO::unsetsrcIpCount()
{
    srcIpCountIsSet_ = false;
}

int64_t AttackDetailVO::getStartTime() const
{
    return startTime_;
}

void AttackDetailVO::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool AttackDetailVO::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void AttackDetailVO::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t AttackDetailVO::getTotal() const
{
    return total_;
}

void AttackDetailVO::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool AttackDetailVO::totalIsSet() const
{
    return totalIsSet_;
}

void AttackDetailVO::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


