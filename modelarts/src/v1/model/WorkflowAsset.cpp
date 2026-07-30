

#include "huaweicloud/modelarts/v1/model/WorkflowAsset.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowAsset::WorkflowAsset()
{
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    contentId_ = "";
    contentIdIsSet_ = false;
    subscriptionId_ = "";
    subscriptionIdIsSet_ = false;
    expiredAt_ = "";
    expiredAtIsSet_ = false;
}

WorkflowAsset::~WorkflowAsset() = default;

void WorkflowAsset::validate()
{
}

web::json::value WorkflowAsset::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(contentIdIsSet_) {
        val[utility::conversions::to_string_t("content_id")] = ModelBase::toJson(contentId_);
    }
    if(subscriptionIdIsSet_) {
        val[utility::conversions::to_string_t("subscription_id")] = ModelBase::toJson(subscriptionId_);
    }
    if(expiredAtIsSet_) {
        val[utility::conversions::to_string_t("expired_at")] = ModelBase::toJson(expiredAt_);
    }

    return val;
}
bool WorkflowAsset::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscription_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expired_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expired_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiredAt(refVal);
        }
    }
    return ok;
}


std::string WorkflowAsset::getName() const
{
    return name_;
}

void WorkflowAsset::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WorkflowAsset::nameIsSet() const
{
    return nameIsSet_;
}

void WorkflowAsset::unsetname()
{
    nameIsSet_ = false;
}

std::string WorkflowAsset::getType() const
{
    return type_;
}

void WorkflowAsset::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool WorkflowAsset::typeIsSet() const
{
    return typeIsSet_;
}

void WorkflowAsset::unsettype()
{
    typeIsSet_ = false;
}

std::string WorkflowAsset::getContentId() const
{
    return contentId_;
}

void WorkflowAsset::setContentId(const std::string& value)
{
    contentId_ = value;
    contentIdIsSet_ = true;
}

bool WorkflowAsset::contentIdIsSet() const
{
    return contentIdIsSet_;
}

void WorkflowAsset::unsetcontentId()
{
    contentIdIsSet_ = false;
}

std::string WorkflowAsset::getSubscriptionId() const
{
    return subscriptionId_;
}

void WorkflowAsset::setSubscriptionId(const std::string& value)
{
    subscriptionId_ = value;
    subscriptionIdIsSet_ = true;
}

bool WorkflowAsset::subscriptionIdIsSet() const
{
    return subscriptionIdIsSet_;
}

void WorkflowAsset::unsetsubscriptionId()
{
    subscriptionIdIsSet_ = false;
}

std::string WorkflowAsset::getExpiredAt() const
{
    return expiredAt_;
}

void WorkflowAsset::setExpiredAt(const std::string& value)
{
    expiredAt_ = value;
    expiredAtIsSet_ = true;
}

bool WorkflowAsset::expiredAtIsSet() const
{
    return expiredAtIsSet_;
}

void WorkflowAsset::unsetexpiredAt()
{
    expiredAtIsSet_ = false;
}

}
}
}
}
}


