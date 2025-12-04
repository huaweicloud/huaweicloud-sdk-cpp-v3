

#include "huaweicloud/smn/v2/model/TopicAccessPolicyAttribute.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




TopicAccessPolicyAttribute::TopicAccessPolicyAttribute()
{
    accessPolicy_ = "";
    accessPolicyIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

TopicAccessPolicyAttribute::~TopicAccessPolicyAttribute() = default;

void TopicAccessPolicyAttribute::validate()
{
}

web::json::value TopicAccessPolicyAttribute::toJson() const
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

    return val;
}
bool TopicAccessPolicyAttribute::fromJson(const web::json::value& val)
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
    return ok;
}


std::string TopicAccessPolicyAttribute::getAccessPolicy() const
{
    return accessPolicy_;
}

void TopicAccessPolicyAttribute::setAccessPolicy(const std::string& value)
{
    accessPolicy_ = value;
    accessPolicyIsSet_ = true;
}

bool TopicAccessPolicyAttribute::accessPolicyIsSet() const
{
    return accessPolicyIsSet_;
}

void TopicAccessPolicyAttribute::unsetaccessPolicy()
{
    accessPolicyIsSet_ = false;
}

std::string TopicAccessPolicyAttribute::getCreateTime() const
{
    return createTime_;
}

void TopicAccessPolicyAttribute::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TopicAccessPolicyAttribute::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TopicAccessPolicyAttribute::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string TopicAccessPolicyAttribute::getUpdateTime() const
{
    return updateTime_;
}

void TopicAccessPolicyAttribute::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool TopicAccessPolicyAttribute::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void TopicAccessPolicyAttribute::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


