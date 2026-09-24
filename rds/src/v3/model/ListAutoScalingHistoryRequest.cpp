

#include "huaweicloud/rds/v3/model/ListAutoScalingHistoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListAutoScalingHistoryRequest::ListAutoScalingHistoryRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    strategyType_ = "";
    strategyTypeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListAutoScalingHistoryRequest::~ListAutoScalingHistoryRequest() = default;

void ListAutoScalingHistoryRequest::validate()
{
}

web::json::value ListAutoScalingHistoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(strategyTypeIsSet_) {
        val[utility::conversions::to_string_t("strategy_type")] = ModelBase::toJson(strategyType_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListAutoScalingHistoryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("strategy_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("strategy_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStrategyType(refVal);
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
    return ok;
}


std::string ListAutoScalingHistoryRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAutoScalingHistoryRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAutoScalingHistoryRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAutoScalingHistoryRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListAutoScalingHistoryRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListAutoScalingHistoryRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListAutoScalingHistoryRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListAutoScalingHistoryRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListAutoScalingHistoryRequest::getStrategyType() const
{
    return strategyType_;
}

void ListAutoScalingHistoryRequest::setStrategyType(const std::string& value)
{
    strategyType_ = value;
    strategyTypeIsSet_ = true;
}

bool ListAutoScalingHistoryRequest::strategyTypeIsSet() const
{
    return strategyTypeIsSet_;
}

void ListAutoScalingHistoryRequest::unsetstrategyType()
{
    strategyTypeIsSet_ = false;
}

int32_t ListAutoScalingHistoryRequest::getOffset() const
{
    return offset_;
}

void ListAutoScalingHistoryRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAutoScalingHistoryRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAutoScalingHistoryRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListAutoScalingHistoryRequest::getLimit() const
{
    return limit_;
}

void ListAutoScalingHistoryRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAutoScalingHistoryRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAutoScalingHistoryRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


