

#include "huaweicloud/aad/v2/model/ListDDoSAttackEventRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListDDoSAttackEventRequestBody::ListDDoSAttackEventRequestBody()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    attackFlowLow_ = "";
    attackFlowLowIsSet_ = false;
    attackFlowUp_ = "";
    attackFlowUpIsSet_ = false;
    attackStatus_ = "";
    attackStatusIsSet_ = false;
}

ListDDoSAttackEventRequestBody::~ListDDoSAttackEventRequestBody() = default;

void ListDDoSAttackEventRequestBody::validate()
{
}

web::json::value ListDDoSAttackEventRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(attackFlowLowIsSet_) {
        val[utility::conversions::to_string_t("attack_flow_low")] = ModelBase::toJson(attackFlowLow_);
    }
    if(attackFlowUpIsSet_) {
        val[utility::conversions::to_string_t("attack_flow_up")] = ModelBase::toJson(attackFlowUp_);
    }
    if(attackStatusIsSet_) {
        val[utility::conversions::to_string_t("attack_status")] = ModelBase::toJson(attackStatus_);
    }

    return val;
}
bool ListDDoSAttackEventRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attack_flow_low"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack_flow_low"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttackFlowLow(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attack_flow_up"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack_flow_up"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttackFlowUp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attack_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttackStatus(refVal);
        }
    }
    return ok;
}


std::string ListDDoSAttackEventRequestBody::getStartTime() const
{
    return startTime_;
}

void ListDDoSAttackEventRequestBody::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListDDoSAttackEventRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListDDoSAttackEventRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListDDoSAttackEventRequestBody::getEndTime() const
{
    return endTime_;
}

void ListDDoSAttackEventRequestBody::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListDDoSAttackEventRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListDDoSAttackEventRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListDDoSAttackEventRequestBody::getOffset() const
{
    return offset_;
}

void ListDDoSAttackEventRequestBody::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDDoSAttackEventRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDDoSAttackEventRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListDDoSAttackEventRequestBody::getLimit() const
{
    return limit_;
}

void ListDDoSAttackEventRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDDoSAttackEventRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListDDoSAttackEventRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListDDoSAttackEventRequestBody::getIp() const
{
    return ip_;
}

void ListDDoSAttackEventRequestBody::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool ListDDoSAttackEventRequestBody::ipIsSet() const
{
    return ipIsSet_;
}

void ListDDoSAttackEventRequestBody::unsetip()
{
    ipIsSet_ = false;
}

std::string ListDDoSAttackEventRequestBody::getAttackFlowLow() const
{
    return attackFlowLow_;
}

void ListDDoSAttackEventRequestBody::setAttackFlowLow(const std::string& value)
{
    attackFlowLow_ = value;
    attackFlowLowIsSet_ = true;
}

bool ListDDoSAttackEventRequestBody::attackFlowLowIsSet() const
{
    return attackFlowLowIsSet_;
}

void ListDDoSAttackEventRequestBody::unsetattackFlowLow()
{
    attackFlowLowIsSet_ = false;
}

std::string ListDDoSAttackEventRequestBody::getAttackFlowUp() const
{
    return attackFlowUp_;
}

void ListDDoSAttackEventRequestBody::setAttackFlowUp(const std::string& value)
{
    attackFlowUp_ = value;
    attackFlowUpIsSet_ = true;
}

bool ListDDoSAttackEventRequestBody::attackFlowUpIsSet() const
{
    return attackFlowUpIsSet_;
}

void ListDDoSAttackEventRequestBody::unsetattackFlowUp()
{
    attackFlowUpIsSet_ = false;
}

std::string ListDDoSAttackEventRequestBody::getAttackStatus() const
{
    return attackStatus_;
}

void ListDDoSAttackEventRequestBody::setAttackStatus(const std::string& value)
{
    attackStatus_ = value;
    attackStatusIsSet_ = true;
}

bool ListDDoSAttackEventRequestBody::attackStatusIsSet() const
{
    return attackStatusIsSet_;
}

void ListDDoSAttackEventRequestBody::unsetattackStatus()
{
    attackStatusIsSet_ = false;
}

}
}
}
}
}


