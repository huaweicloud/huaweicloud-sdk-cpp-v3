

#include "huaweicloud/codeartspipeline/v2/model/ShowProjectStrategyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowProjectStrategyResponse::ShowProjectStrategyResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    creator_ = "";
    creatorIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updater_ = "";
    updaterIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    isValid_ = false;
    isValidIsSet_ = false;
    ruleInstancesIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    isPublic_ = false;
    isPublicIsSet_ = false;
    isLegacy_ = false;
    isLegacyIsSet_ = false;
}

ShowProjectStrategyResponse::~ShowProjectStrategyResponse() = default;

void ShowProjectStrategyResponse::validate()
{
}

web::json::value ShowProjectStrategyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updaterIsSet_) {
        val[utility::conversions::to_string_t("updater")] = ModelBase::toJson(updater_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(isValidIsSet_) {
        val[utility::conversions::to_string_t("is_valid")] = ModelBase::toJson(isValid_);
    }
    if(ruleInstancesIsSet_) {
        val[utility::conversions::to_string_t("rule_instances")] = ModelBase::toJson(ruleInstances_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(isPublicIsSet_) {
        val[utility::conversions::to_string_t("is_public")] = ModelBase::toJson(isPublic_);
    }
    if(isLegacyIsSet_) {
        val[utility::conversions::to_string_t("is_legacy")] = ModelBase::toJson(isLegacy_);
    }

    return val;
}
bool ShowProjectStrategyResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("updater"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updater"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdater(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_valid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_valid"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsValid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_instances"));
        if(!fieldValue.is_null())
        {
            std::vector<RuleInstance> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleInstances(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_public"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_public"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsPublic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_legacy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_legacy"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsLegacy(refVal);
        }
    }
    return ok;
}


std::string ShowProjectStrategyResponse::getId() const
{
    return id_;
}

void ShowProjectStrategyResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowProjectStrategyResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowProjectStrategyResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowProjectStrategyResponse::getName() const
{
    return name_;
}

void ShowProjectStrategyResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowProjectStrategyResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowProjectStrategyResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowProjectStrategyResponse::getType() const
{
    return type_;
}

void ShowProjectStrategyResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowProjectStrategyResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ShowProjectStrategyResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string ShowProjectStrategyResponse::getVersion() const
{
    return version_;
}

void ShowProjectStrategyResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowProjectStrategyResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ShowProjectStrategyResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::string ShowProjectStrategyResponse::getCreator() const
{
    return creator_;
}

void ShowProjectStrategyResponse::setCreator(const std::string& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool ShowProjectStrategyResponse::creatorIsSet() const
{
    return creatorIsSet_;
}

void ShowProjectStrategyResponse::unsetcreator()
{
    creatorIsSet_ = false;
}

std::string ShowProjectStrategyResponse::getCreateTime() const
{
    return createTime_;
}

void ShowProjectStrategyResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowProjectStrategyResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowProjectStrategyResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowProjectStrategyResponse::getUpdater() const
{
    return updater_;
}

void ShowProjectStrategyResponse::setUpdater(const std::string& value)
{
    updater_ = value;
    updaterIsSet_ = true;
}

bool ShowProjectStrategyResponse::updaterIsSet() const
{
    return updaterIsSet_;
}

void ShowProjectStrategyResponse::unsetupdater()
{
    updaterIsSet_ = false;
}

std::string ShowProjectStrategyResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowProjectStrategyResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowProjectStrategyResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowProjectStrategyResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

bool ShowProjectStrategyResponse::isIsValid() const
{
    return isValid_;
}

void ShowProjectStrategyResponse::setIsValid(bool value)
{
    isValid_ = value;
    isValidIsSet_ = true;
}

bool ShowProjectStrategyResponse::isValidIsSet() const
{
    return isValidIsSet_;
}

void ShowProjectStrategyResponse::unsetisValid()
{
    isValidIsSet_ = false;
}

std::vector<RuleInstance>& ShowProjectStrategyResponse::getRuleInstances()
{
    return ruleInstances_;
}

void ShowProjectStrategyResponse::setRuleInstances(const std::vector<RuleInstance>& value)
{
    ruleInstances_ = value;
    ruleInstancesIsSet_ = true;
}

bool ShowProjectStrategyResponse::ruleInstancesIsSet() const
{
    return ruleInstancesIsSet_;
}

void ShowProjectStrategyResponse::unsetruleInstances()
{
    ruleInstancesIsSet_ = false;
}

std::string ShowProjectStrategyResponse::getLevel() const
{
    return level_;
}

void ShowProjectStrategyResponse::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool ShowProjectStrategyResponse::levelIsSet() const
{
    return levelIsSet_;
}

void ShowProjectStrategyResponse::unsetlevel()
{
    levelIsSet_ = false;
}

bool ShowProjectStrategyResponse::isIsPublic() const
{
    return isPublic_;
}

void ShowProjectStrategyResponse::setIsPublic(bool value)
{
    isPublic_ = value;
    isPublicIsSet_ = true;
}

bool ShowProjectStrategyResponse::isPublicIsSet() const
{
    return isPublicIsSet_;
}

void ShowProjectStrategyResponse::unsetisPublic()
{
    isPublicIsSet_ = false;
}

bool ShowProjectStrategyResponse::isIsLegacy() const
{
    return isLegacy_;
}

void ShowProjectStrategyResponse::setIsLegacy(bool value)
{
    isLegacy_ = value;
    isLegacyIsSet_ = true;
}

bool ShowProjectStrategyResponse::isLegacyIsSet() const
{
    return isLegacyIsSet_;
}

void ShowProjectStrategyResponse::unsetisLegacy()
{
    isLegacyIsSet_ = false;
}

}
}
}
}
}


