

#include "huaweicloud/cdn/v2/model/TemplateItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




TemplateItem::TemplateItem()
{
    accountId_ = "";
    accountIdIsSet_ = false;
    tmlName_ = "";
    tmlNameIsSet_ = false;
    remark_ = "";
    remarkIsSet_ = false;
    tmlId_ = "";
    tmlIdIsSet_ = false;
    type_ = 0;
    typeIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    modifyTime_ = 0L;
    modifyTimeIsSet_ = false;
    configsIsSet_ = false;
}

TemplateItem::~TemplateItem() = default;

void TemplateItem::validate()
{
}

web::json::value TemplateItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("account_id")] = ModelBase::toJson(accountId_);
    }
    if(tmlNameIsSet_) {
        val[utility::conversions::to_string_t("tml_name")] = ModelBase::toJson(tmlName_);
    }
    if(remarkIsSet_) {
        val[utility::conversions::to_string_t("remark")] = ModelBase::toJson(remark_);
    }
    if(tmlIdIsSet_) {
        val[utility::conversions::to_string_t("tml_id")] = ModelBase::toJson(tmlId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(modifyTimeIsSet_) {
        val[utility::conversions::to_string_t("modify_time")] = ModelBase::toJson(modifyTime_);
    }
    if(configsIsSet_) {
        val[utility::conversions::to_string_t("configs")] = ModelBase::toJson(configs_);
    }

    return val;
}
bool TemplateItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tml_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tml_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTmlName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remark"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemark(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tml_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tml_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTmlId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modify_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modify_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifyTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configs"));
        if(!fieldValue.is_null())
        {
            TemplateConfigs refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigs(refVal);
        }
    }
    return ok;
}


std::string TemplateItem::getAccountId() const
{
    return accountId_;
}

void TemplateItem::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool TemplateItem::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void TemplateItem::unsetaccountId()
{
    accountIdIsSet_ = false;
}

std::string TemplateItem::getTmlName() const
{
    return tmlName_;
}

void TemplateItem::setTmlName(const std::string& value)
{
    tmlName_ = value;
    tmlNameIsSet_ = true;
}

bool TemplateItem::tmlNameIsSet() const
{
    return tmlNameIsSet_;
}

void TemplateItem::unsettmlName()
{
    tmlNameIsSet_ = false;
}

std::string TemplateItem::getRemark() const
{
    return remark_;
}

void TemplateItem::setRemark(const std::string& value)
{
    remark_ = value;
    remarkIsSet_ = true;
}

bool TemplateItem::remarkIsSet() const
{
    return remarkIsSet_;
}

void TemplateItem::unsetremark()
{
    remarkIsSet_ = false;
}

std::string TemplateItem::getTmlId() const
{
    return tmlId_;
}

void TemplateItem::setTmlId(const std::string& value)
{
    tmlId_ = value;
    tmlIdIsSet_ = true;
}

bool TemplateItem::tmlIdIsSet() const
{
    return tmlIdIsSet_;
}

void TemplateItem::unsettmlId()
{
    tmlIdIsSet_ = false;
}

int32_t TemplateItem::getType() const
{
    return type_;
}

void TemplateItem::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool TemplateItem::typeIsSet() const
{
    return typeIsSet_;
}

void TemplateItem::unsettype()
{
    typeIsSet_ = false;
}

int64_t TemplateItem::getCreateTime() const
{
    return createTime_;
}

void TemplateItem::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TemplateItem::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TemplateItem::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t TemplateItem::getModifyTime() const
{
    return modifyTime_;
}

void TemplateItem::setModifyTime(int64_t value)
{
    modifyTime_ = value;
    modifyTimeIsSet_ = true;
}

bool TemplateItem::modifyTimeIsSet() const
{
    return modifyTimeIsSet_;
}

void TemplateItem::unsetmodifyTime()
{
    modifyTimeIsSet_ = false;
}

TemplateConfigs TemplateItem::getConfigs() const
{
    return configs_;
}

void TemplateItem::setConfigs(const TemplateConfigs& value)
{
    configs_ = value;
    configsIsSet_ = true;
}

bool TemplateItem::configsIsSet() const
{
    return configsIsSet_;
}

void TemplateItem::unsetconfigs()
{
    configsIsSet_ = false;
}

}
}
}
}
}


