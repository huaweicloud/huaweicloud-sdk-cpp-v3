

#include "huaweicloud/aad/v2/model/FrequencyControlRule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




FrequencyControlRule::FrequencyControlRule()
{
    id_ = "";
    idIsSet_ = false;
    producer_ = 0;
    producerIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    limitNum_ = "";
    limitNumIsSet_ = false;
    limitPeriod_ = "";
    limitPeriodIsSet_ = false;
    lockTime_ = "";
    lockTimeIsSet_ = false;
    tagType_ = "";
    tagTypeIsSet_ = false;
    tagIndex_ = "";
    tagIndexIsSet_ = false;
    tagConditionIsSet_ = false;
    actionIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    conditionsIsSet_ = false;
    unlockNum_ = 0;
    unlockNumIsSet_ = false;
    domainAggregation_ = false;
    domainAggregationIsSet_ = false;
    regionAggregation_ = false;
    regionAggregationIsSet_ = false;
    captchaLockTime_ = 0;
    captchaLockTimeIsSet_ = false;
    grayscaleTime_ = false;
    grayscaleTimeIsSet_ = false;
}

FrequencyControlRule::~FrequencyControlRule() = default;

void FrequencyControlRule::validate()
{
}

web::json::value FrequencyControlRule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(producerIsSet_) {
        val[utility::conversions::to_string_t("producer")] = ModelBase::toJson(producer_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(limitNumIsSet_) {
        val[utility::conversions::to_string_t("limit_num")] = ModelBase::toJson(limitNum_);
    }
    if(limitPeriodIsSet_) {
        val[utility::conversions::to_string_t("limit_period")] = ModelBase::toJson(limitPeriod_);
    }
    if(lockTimeIsSet_) {
        val[utility::conversions::to_string_t("lock_time")] = ModelBase::toJson(lockTime_);
    }
    if(tagTypeIsSet_) {
        val[utility::conversions::to_string_t("tag_type")] = ModelBase::toJson(tagType_);
    }
    if(tagIndexIsSet_) {
        val[utility::conversions::to_string_t("tag_index")] = ModelBase::toJson(tagIndex_);
    }
    if(tagConditionIsSet_) {
        val[utility::conversions::to_string_t("tag_condition")] = ModelBase::toJson(tagCondition_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(conditionsIsSet_) {
        val[utility::conversions::to_string_t("conditions")] = ModelBase::toJson(conditions_);
    }
    if(unlockNumIsSet_) {
        val[utility::conversions::to_string_t("unlock_num")] = ModelBase::toJson(unlockNum_);
    }
    if(domainAggregationIsSet_) {
        val[utility::conversions::to_string_t("domain_aggregation")] = ModelBase::toJson(domainAggregation_);
    }
    if(regionAggregationIsSet_) {
        val[utility::conversions::to_string_t("region_aggregation")] = ModelBase::toJson(regionAggregation_);
    }
    if(captchaLockTimeIsSet_) {
        val[utility::conversions::to_string_t("captcha_lock_time")] = ModelBase::toJson(captchaLockTime_);
    }
    if(grayscaleTimeIsSet_) {
        val[utility::conversions::to_string_t("grayscale_time")] = ModelBase::toJson(grayscaleTime_);
    }

    return val;
}
bool FrequencyControlRule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("producer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("producer"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProducer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimitNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit_period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit_period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimitPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lock_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lock_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_index"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag_condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_condition"));
        if(!fieldValue.is_null())
        {
            TagCondition refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagCondition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            ActionInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conditions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conditions"));
        if(!fieldValue.is_null())
        {
            std::vector<Condition> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConditions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unlock_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unlock_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnlockNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_aggregation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_aggregation"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainAggregation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_aggregation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_aggregation"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionAggregation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("captcha_lock_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("captcha_lock_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaptchaLockTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("grayscale_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("grayscale_time"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGrayscaleTime(refVal);
        }
    }
    return ok;
}


std::string FrequencyControlRule::getId() const
{
    return id_;
}

void FrequencyControlRule::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool FrequencyControlRule::idIsSet() const
{
    return idIsSet_;
}

void FrequencyControlRule::unsetid()
{
    idIsSet_ = false;
}

int32_t FrequencyControlRule::getProducer() const
{
    return producer_;
}

void FrequencyControlRule::setProducer(int32_t value)
{
    producer_ = value;
    producerIsSet_ = true;
}

bool FrequencyControlRule::producerIsSet() const
{
    return producerIsSet_;
}

void FrequencyControlRule::unsetproducer()
{
    producerIsSet_ = false;
}

std::string FrequencyControlRule::getName() const
{
    return name_;
}

void FrequencyControlRule::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool FrequencyControlRule::nameIsSet() const
{
    return nameIsSet_;
}

void FrequencyControlRule::unsetname()
{
    nameIsSet_ = false;
}

std::string FrequencyControlRule::getUrl() const
{
    return url_;
}

void FrequencyControlRule::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool FrequencyControlRule::urlIsSet() const
{
    return urlIsSet_;
}

void FrequencyControlRule::unseturl()
{
    urlIsSet_ = false;
}

std::string FrequencyControlRule::getLimitNum() const
{
    return limitNum_;
}

void FrequencyControlRule::setLimitNum(const std::string& value)
{
    limitNum_ = value;
    limitNumIsSet_ = true;
}

bool FrequencyControlRule::limitNumIsSet() const
{
    return limitNumIsSet_;
}

void FrequencyControlRule::unsetlimitNum()
{
    limitNumIsSet_ = false;
}

std::string FrequencyControlRule::getLimitPeriod() const
{
    return limitPeriod_;
}

void FrequencyControlRule::setLimitPeriod(const std::string& value)
{
    limitPeriod_ = value;
    limitPeriodIsSet_ = true;
}

bool FrequencyControlRule::limitPeriodIsSet() const
{
    return limitPeriodIsSet_;
}

void FrequencyControlRule::unsetlimitPeriod()
{
    limitPeriodIsSet_ = false;
}

std::string FrequencyControlRule::getLockTime() const
{
    return lockTime_;
}

void FrequencyControlRule::setLockTime(const std::string& value)
{
    lockTime_ = value;
    lockTimeIsSet_ = true;
}

bool FrequencyControlRule::lockTimeIsSet() const
{
    return lockTimeIsSet_;
}

void FrequencyControlRule::unsetlockTime()
{
    lockTimeIsSet_ = false;
}

std::string FrequencyControlRule::getTagType() const
{
    return tagType_;
}

void FrequencyControlRule::setTagType(const std::string& value)
{
    tagType_ = value;
    tagTypeIsSet_ = true;
}

bool FrequencyControlRule::tagTypeIsSet() const
{
    return tagTypeIsSet_;
}

void FrequencyControlRule::unsettagType()
{
    tagTypeIsSet_ = false;
}

std::string FrequencyControlRule::getTagIndex() const
{
    return tagIndex_;
}

void FrequencyControlRule::setTagIndex(const std::string& value)
{
    tagIndex_ = value;
    tagIndexIsSet_ = true;
}

bool FrequencyControlRule::tagIndexIsSet() const
{
    return tagIndexIsSet_;
}

void FrequencyControlRule::unsettagIndex()
{
    tagIndexIsSet_ = false;
}

TagCondition FrequencyControlRule::getTagCondition() const
{
    return tagCondition_;
}

void FrequencyControlRule::setTagCondition(const TagCondition& value)
{
    tagCondition_ = value;
    tagConditionIsSet_ = true;
}

bool FrequencyControlRule::tagConditionIsSet() const
{
    return tagConditionIsSet_;
}

void FrequencyControlRule::unsettagCondition()
{
    tagConditionIsSet_ = false;
}

ActionInfo FrequencyControlRule::getAction() const
{
    return action_;
}

void FrequencyControlRule::setAction(const ActionInfo& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool FrequencyControlRule::actionIsSet() const
{
    return actionIsSet_;
}

void FrequencyControlRule::unsetaction()
{
    actionIsSet_ = false;
}

std::string FrequencyControlRule::getMode() const
{
    return mode_;
}

void FrequencyControlRule::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool FrequencyControlRule::modeIsSet() const
{
    return modeIsSet_;
}

void FrequencyControlRule::unsetmode()
{
    modeIsSet_ = false;
}

std::vector<Condition>& FrequencyControlRule::getConditions()
{
    return conditions_;
}

void FrequencyControlRule::setConditions(const std::vector<Condition>& value)
{
    conditions_ = value;
    conditionsIsSet_ = true;
}

bool FrequencyControlRule::conditionsIsSet() const
{
    return conditionsIsSet_;
}

void FrequencyControlRule::unsetconditions()
{
    conditionsIsSet_ = false;
}

int32_t FrequencyControlRule::getUnlockNum() const
{
    return unlockNum_;
}

void FrequencyControlRule::setUnlockNum(int32_t value)
{
    unlockNum_ = value;
    unlockNumIsSet_ = true;
}

bool FrequencyControlRule::unlockNumIsSet() const
{
    return unlockNumIsSet_;
}

void FrequencyControlRule::unsetunlockNum()
{
    unlockNumIsSet_ = false;
}

bool FrequencyControlRule::isDomainAggregation() const
{
    return domainAggregation_;
}

void FrequencyControlRule::setDomainAggregation(bool value)
{
    domainAggregation_ = value;
    domainAggregationIsSet_ = true;
}

bool FrequencyControlRule::domainAggregationIsSet() const
{
    return domainAggregationIsSet_;
}

void FrequencyControlRule::unsetdomainAggregation()
{
    domainAggregationIsSet_ = false;
}

bool FrequencyControlRule::isRegionAggregation() const
{
    return regionAggregation_;
}

void FrequencyControlRule::setRegionAggregation(bool value)
{
    regionAggregation_ = value;
    regionAggregationIsSet_ = true;
}

bool FrequencyControlRule::regionAggregationIsSet() const
{
    return regionAggregationIsSet_;
}

void FrequencyControlRule::unsetregionAggregation()
{
    regionAggregationIsSet_ = false;
}

int32_t FrequencyControlRule::getCaptchaLockTime() const
{
    return captchaLockTime_;
}

void FrequencyControlRule::setCaptchaLockTime(int32_t value)
{
    captchaLockTime_ = value;
    captchaLockTimeIsSet_ = true;
}

bool FrequencyControlRule::captchaLockTimeIsSet() const
{
    return captchaLockTimeIsSet_;
}

void FrequencyControlRule::unsetcaptchaLockTime()
{
    captchaLockTimeIsSet_ = false;
}

bool FrequencyControlRule::isGrayscaleTime() const
{
    return grayscaleTime_;
}

void FrequencyControlRule::setGrayscaleTime(bool value)
{
    grayscaleTime_ = value;
    grayscaleTimeIsSet_ = true;
}

bool FrequencyControlRule::grayscaleTimeIsSet() const
{
    return grayscaleTimeIsSet_;
}

void FrequencyControlRule::unsetgrayscaleTime()
{
    grayscaleTimeIsSet_ = false;
}

}
}
}
}
}


