

#include "huaweicloud/cdn/v2/model/ApplyRecord.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ApplyRecord::ApplyRecord()
{
    status_ = "";
    statusIsSet_ = false;
    operatorId_ = "";
    operatorIdIsSet_ = false;
    tmlName_ = "";
    tmlNameIsSet_ = false;
    remark_ = "";
    remarkIsSet_ = false;
    tmlId_ = "";
    tmlIdIsSet_ = false;
    applyTime_ = 0L;
    applyTimeIsSet_ = false;
    type_ = 0;
    typeIsSet_ = false;
    accountId_ = "";
    accountIdIsSet_ = false;
    resourcesIsSet_ = false;
    configsIsSet_ = false;
}

ApplyRecord::~ApplyRecord() = default;

void ApplyRecord::validate()
{
}

web::json::value ApplyRecord::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(operatorIdIsSet_) {
        val[utility::conversions::to_string_t("operator_id")] = ModelBase::toJson(operatorId_);
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
    if(applyTimeIsSet_) {
        val[utility::conversions::to_string_t("apply_time")] = ModelBase::toJson(applyTime_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("account_id")] = ModelBase::toJson(accountId_);
    }
    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }
    if(configsIsSet_) {
        val[utility::conversions::to_string_t("configs")] = ModelBase::toJson(configs_);
    }

    return val;
}
bool ApplyRecord::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operator_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperatorId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("apply_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apply_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplyTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<Resource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
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


std::string ApplyRecord::getStatus() const
{
    return status_;
}

void ApplyRecord::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ApplyRecord::statusIsSet() const
{
    return statusIsSet_;
}

void ApplyRecord::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ApplyRecord::getOperatorId() const
{
    return operatorId_;
}

void ApplyRecord::setOperatorId(const std::string& value)
{
    operatorId_ = value;
    operatorIdIsSet_ = true;
}

bool ApplyRecord::operatorIdIsSet() const
{
    return operatorIdIsSet_;
}

void ApplyRecord::unsetoperatorId()
{
    operatorIdIsSet_ = false;
}

std::string ApplyRecord::getTmlName() const
{
    return tmlName_;
}

void ApplyRecord::setTmlName(const std::string& value)
{
    tmlName_ = value;
    tmlNameIsSet_ = true;
}

bool ApplyRecord::tmlNameIsSet() const
{
    return tmlNameIsSet_;
}

void ApplyRecord::unsettmlName()
{
    tmlNameIsSet_ = false;
}

std::string ApplyRecord::getRemark() const
{
    return remark_;
}

void ApplyRecord::setRemark(const std::string& value)
{
    remark_ = value;
    remarkIsSet_ = true;
}

bool ApplyRecord::remarkIsSet() const
{
    return remarkIsSet_;
}

void ApplyRecord::unsetremark()
{
    remarkIsSet_ = false;
}

std::string ApplyRecord::getTmlId() const
{
    return tmlId_;
}

void ApplyRecord::setTmlId(const std::string& value)
{
    tmlId_ = value;
    tmlIdIsSet_ = true;
}

bool ApplyRecord::tmlIdIsSet() const
{
    return tmlIdIsSet_;
}

void ApplyRecord::unsettmlId()
{
    tmlIdIsSet_ = false;
}

int64_t ApplyRecord::getApplyTime() const
{
    return applyTime_;
}

void ApplyRecord::setApplyTime(int64_t value)
{
    applyTime_ = value;
    applyTimeIsSet_ = true;
}

bool ApplyRecord::applyTimeIsSet() const
{
    return applyTimeIsSet_;
}

void ApplyRecord::unsetapplyTime()
{
    applyTimeIsSet_ = false;
}

int32_t ApplyRecord::getType() const
{
    return type_;
}

void ApplyRecord::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ApplyRecord::typeIsSet() const
{
    return typeIsSet_;
}

void ApplyRecord::unsettype()
{
    typeIsSet_ = false;
}

std::string ApplyRecord::getAccountId() const
{
    return accountId_;
}

void ApplyRecord::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool ApplyRecord::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void ApplyRecord::unsetaccountId()
{
    accountIdIsSet_ = false;
}

std::vector<Resource>& ApplyRecord::getResources()
{
    return resources_;
}

void ApplyRecord::setResources(const std::vector<Resource>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ApplyRecord::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ApplyRecord::unsetresources()
{
    resourcesIsSet_ = false;
}

TemplateConfigs ApplyRecord::getConfigs() const
{
    return configs_;
}

void ApplyRecord::setConfigs(const TemplateConfigs& value)
{
    configs_ = value;
    configsIsSet_ = true;
}

bool ApplyRecord::configsIsSet() const
{
    return configsIsSet_;
}

void ApplyRecord::unsetconfigs()
{
    configsIsSet_ = false;
}

}
}
}
}
}


