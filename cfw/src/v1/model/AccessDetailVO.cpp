

#include "huaweicloud/cfw/v1/model/AccessDetailVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AccessDetailVO::AccessDetailVO()
{
    dstIpCount_ = 0L;
    dstIpCountIsSet_ = false;
    dstPortCount_ = 0L;
    dstPortCountIsSet_ = false;
    hitCount_ = 0L;
    hitCountIsSet_ = false;
    protocolCount_ = 0L;
    protocolCountIsSet_ = false;
    recentEndTime_ = 0L;
    recentEndTimeIsSet_ = false;
    recentStartTime_ = 0L;
    recentStartTimeIsSet_ = false;
    recordTotal_ = 0L;
    recordTotalIsSet_ = false;
    recordsIsSet_ = false;
    ruleHitCount_ = 0L;
    ruleHitCountIsSet_ = false;
    srcIpCount_ = 0L;
    srcIpCountIsSet_ = false;
}

AccessDetailVO::~AccessDetailVO() = default;

void AccessDetailVO::validate()
{
}

web::json::value AccessDetailVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dstIpCountIsSet_) {
        val[utility::conversions::to_string_t("dst_ip_count")] = ModelBase::toJson(dstIpCount_);
    }
    if(dstPortCountIsSet_) {
        val[utility::conversions::to_string_t("dst_port_count")] = ModelBase::toJson(dstPortCount_);
    }
    if(hitCountIsSet_) {
        val[utility::conversions::to_string_t("hit_count")] = ModelBase::toJson(hitCount_);
    }
    if(protocolCountIsSet_) {
        val[utility::conversions::to_string_t("protocol_count")] = ModelBase::toJson(protocolCount_);
    }
    if(recentEndTimeIsSet_) {
        val[utility::conversions::to_string_t("recent_end_time")] = ModelBase::toJson(recentEndTime_);
    }
    if(recentStartTimeIsSet_) {
        val[utility::conversions::to_string_t("recent_start_time")] = ModelBase::toJson(recentStartTime_);
    }
    if(recordTotalIsSet_) {
        val[utility::conversions::to_string_t("record_total")] = ModelBase::toJson(recordTotal_);
    }
    if(recordsIsSet_) {
        val[utility::conversions::to_string_t("records")] = ModelBase::toJson(records_);
    }
    if(ruleHitCountIsSet_) {
        val[utility::conversions::to_string_t("rule_hit_count")] = ModelBase::toJson(ruleHitCount_);
    }
    if(srcIpCountIsSet_) {
        val[utility::conversions::to_string_t("src_ip_count")] = ModelBase::toJson(srcIpCount_);
    }

    return val;
}
bool AccessDetailVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("hit_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hit_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHitCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocolCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recent_end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recent_end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecentEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recent_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recent_start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecentStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("record_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("records"));
        if(!fieldValue.is_null())
        {
            std::vector<AccessLogInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_hit_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_hit_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleHitCount(refVal);
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
    return ok;
}


int64_t AccessDetailVO::getDstIpCount() const
{
    return dstIpCount_;
}

void AccessDetailVO::setDstIpCount(int64_t value)
{
    dstIpCount_ = value;
    dstIpCountIsSet_ = true;
}

bool AccessDetailVO::dstIpCountIsSet() const
{
    return dstIpCountIsSet_;
}

void AccessDetailVO::unsetdstIpCount()
{
    dstIpCountIsSet_ = false;
}

int64_t AccessDetailVO::getDstPortCount() const
{
    return dstPortCount_;
}

void AccessDetailVO::setDstPortCount(int64_t value)
{
    dstPortCount_ = value;
    dstPortCountIsSet_ = true;
}

bool AccessDetailVO::dstPortCountIsSet() const
{
    return dstPortCountIsSet_;
}

void AccessDetailVO::unsetdstPortCount()
{
    dstPortCountIsSet_ = false;
}

int64_t AccessDetailVO::getHitCount() const
{
    return hitCount_;
}

void AccessDetailVO::setHitCount(int64_t value)
{
    hitCount_ = value;
    hitCountIsSet_ = true;
}

bool AccessDetailVO::hitCountIsSet() const
{
    return hitCountIsSet_;
}

void AccessDetailVO::unsethitCount()
{
    hitCountIsSet_ = false;
}

int64_t AccessDetailVO::getProtocolCount() const
{
    return protocolCount_;
}

void AccessDetailVO::setProtocolCount(int64_t value)
{
    protocolCount_ = value;
    protocolCountIsSet_ = true;
}

bool AccessDetailVO::protocolCountIsSet() const
{
    return protocolCountIsSet_;
}

void AccessDetailVO::unsetprotocolCount()
{
    protocolCountIsSet_ = false;
}

int64_t AccessDetailVO::getRecentEndTime() const
{
    return recentEndTime_;
}

void AccessDetailVO::setRecentEndTime(int64_t value)
{
    recentEndTime_ = value;
    recentEndTimeIsSet_ = true;
}

bool AccessDetailVO::recentEndTimeIsSet() const
{
    return recentEndTimeIsSet_;
}

void AccessDetailVO::unsetrecentEndTime()
{
    recentEndTimeIsSet_ = false;
}

int64_t AccessDetailVO::getRecentStartTime() const
{
    return recentStartTime_;
}

void AccessDetailVO::setRecentStartTime(int64_t value)
{
    recentStartTime_ = value;
    recentStartTimeIsSet_ = true;
}

bool AccessDetailVO::recentStartTimeIsSet() const
{
    return recentStartTimeIsSet_;
}

void AccessDetailVO::unsetrecentStartTime()
{
    recentStartTimeIsSet_ = false;
}

int64_t AccessDetailVO::getRecordTotal() const
{
    return recordTotal_;
}

void AccessDetailVO::setRecordTotal(int64_t value)
{
    recordTotal_ = value;
    recordTotalIsSet_ = true;
}

bool AccessDetailVO::recordTotalIsSet() const
{
    return recordTotalIsSet_;
}

void AccessDetailVO::unsetrecordTotal()
{
    recordTotalIsSet_ = false;
}

std::vector<AccessLogInfo>& AccessDetailVO::getRecords()
{
    return records_;
}

void AccessDetailVO::setRecords(const std::vector<AccessLogInfo>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool AccessDetailVO::recordsIsSet() const
{
    return recordsIsSet_;
}

void AccessDetailVO::unsetrecords()
{
    recordsIsSet_ = false;
}

int64_t AccessDetailVO::getRuleHitCount() const
{
    return ruleHitCount_;
}

void AccessDetailVO::setRuleHitCount(int64_t value)
{
    ruleHitCount_ = value;
    ruleHitCountIsSet_ = true;
}

bool AccessDetailVO::ruleHitCountIsSet() const
{
    return ruleHitCountIsSet_;
}

void AccessDetailVO::unsetruleHitCount()
{
    ruleHitCountIsSet_ = false;
}

int64_t AccessDetailVO::getSrcIpCount() const
{
    return srcIpCount_;
}

void AccessDetailVO::setSrcIpCount(int64_t value)
{
    srcIpCount_ = value;
    srcIpCountIsSet_ = true;
}

bool AccessDetailVO::srcIpCountIsSet() const
{
    return srcIpCountIsSet_;
}

void AccessDetailVO::unsetsrcIpCount()
{
    srcIpCountIsSet_ = false;
}

}
}
}
}
}


