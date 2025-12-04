

#include "huaweicloud/smn/v2/model/TopicAttribute.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




TopicAttribute::TopicAttribute()
{
    accessPolicy_ = "";
    accessPolicyIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    introduction_ = "";
    introductionIsSet_ = false;
}

TopicAttribute::~TopicAttribute() = default;

void TopicAttribute::validate()
{
}

web::json::value TopicAttribute::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessPolicyIsSet_) {
        val[utility::conversions::to_string_t("access_policy")] = ModelBase::toJson(accessPolicy_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(introductionIsSet_) {
        val[utility::conversions::to_string_t("introduction")] = ModelBase::toJson(introduction_);
    }

    return val;
}
bool TopicAttribute::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("access_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("introduction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("introduction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIntroduction(refVal);
        }
    }
    return ok;
}


std::string TopicAttribute::getAccessPolicy() const
{
    return accessPolicy_;
}

void TopicAttribute::setAccessPolicy(const std::string& value)
{
    accessPolicy_ = value;
    accessPolicyIsSet_ = true;
}

bool TopicAttribute::accessPolicyIsSet() const
{
    return accessPolicyIsSet_;
}

void TopicAttribute::unsetaccessPolicy()
{
    accessPolicyIsSet_ = false;
}

std::string TopicAttribute::getCreateTime() const
{
    return createTime_;
}

void TopicAttribute::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TopicAttribute::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TopicAttribute::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string TopicAttribute::getUpdateTime() const
{
    return updateTime_;
}

void TopicAttribute::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool TopicAttribute::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void TopicAttribute::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string TopicAttribute::getIntroduction() const
{
    return introduction_;
}

void TopicAttribute::setIntroduction(const std::string& value)
{
    introduction_ = value;
    introductionIsSet_ = true;
}

bool TopicAttribute::introductionIsSet() const
{
    return introductionIsSet_;
}

void TopicAttribute::unsetintroduction()
{
    introductionIsSet_ = false;
}

}
}
}
}
}


