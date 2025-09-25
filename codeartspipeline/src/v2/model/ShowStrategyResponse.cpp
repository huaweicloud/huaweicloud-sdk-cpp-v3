

#include "huaweicloud/codeartspipeline/v2/model/ShowStrategyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowStrategyResponse::ShowStrategyResponse()
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

ShowStrategyResponse::~ShowStrategyResponse() = default;

void ShowStrategyResponse::validate()
{
}

web::json::value ShowStrategyResponse::toJson() const
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
bool ShowStrategyResponse::fromJson(const web::json::value& val)
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


std::string ShowStrategyResponse::getId() const
{
    return id_;
}

void ShowStrategyResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowStrategyResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowStrategyResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowStrategyResponse::getName() const
{
    return name_;
}

void ShowStrategyResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowStrategyResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowStrategyResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowStrategyResponse::getType() const
{
    return type_;
}

void ShowStrategyResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowStrategyResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ShowStrategyResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string ShowStrategyResponse::getVersion() const
{
    return version_;
}

void ShowStrategyResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowStrategyResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ShowStrategyResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::string ShowStrategyResponse::getCreator() const
{
    return creator_;
}

void ShowStrategyResponse::setCreator(const std::string& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool ShowStrategyResponse::creatorIsSet() const
{
    return creatorIsSet_;
}

void ShowStrategyResponse::unsetcreator()
{
    creatorIsSet_ = false;
}

std::string ShowStrategyResponse::getCreateTime() const
{
    return createTime_;
}

void ShowStrategyResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowStrategyResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowStrategyResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowStrategyResponse::getUpdater() const
{
    return updater_;
}

void ShowStrategyResponse::setUpdater(const std::string& value)
{
    updater_ = value;
    updaterIsSet_ = true;
}

bool ShowStrategyResponse::updaterIsSet() const
{
    return updaterIsSet_;
}

void ShowStrategyResponse::unsetupdater()
{
    updaterIsSet_ = false;
}

std::string ShowStrategyResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowStrategyResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowStrategyResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowStrategyResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

bool ShowStrategyResponse::isIsValid() const
{
    return isValid_;
}

void ShowStrategyResponse::setIsValid(bool value)
{
    isValid_ = value;
    isValidIsSet_ = true;
}

bool ShowStrategyResponse::isValidIsSet() const
{
    return isValidIsSet_;
}

void ShowStrategyResponse::unsetisValid()
{
    isValidIsSet_ = false;
}

std::vector<RuleInstance>& ShowStrategyResponse::getRuleInstances()
{
    return ruleInstances_;
}

void ShowStrategyResponse::setRuleInstances(const std::vector<RuleInstance>& value)
{
    ruleInstances_ = value;
    ruleInstancesIsSet_ = true;
}

bool ShowStrategyResponse::ruleInstancesIsSet() const
{
    return ruleInstancesIsSet_;
}

void ShowStrategyResponse::unsetruleInstances()
{
    ruleInstancesIsSet_ = false;
}

std::string ShowStrategyResponse::getLevel() const
{
    return level_;
}

void ShowStrategyResponse::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool ShowStrategyResponse::levelIsSet() const
{
    return levelIsSet_;
}

void ShowStrategyResponse::unsetlevel()
{
    levelIsSet_ = false;
}

bool ShowStrategyResponse::isIsPublic() const
{
    return isPublic_;
}

void ShowStrategyResponse::setIsPublic(bool value)
{
    isPublic_ = value;
    isPublicIsSet_ = true;
}

bool ShowStrategyResponse::isPublicIsSet() const
{
    return isPublicIsSet_;
}

void ShowStrategyResponse::unsetisPublic()
{
    isPublicIsSet_ = false;
}

bool ShowStrategyResponse::isIsLegacy() const
{
    return isLegacy_;
}

void ShowStrategyResponse::setIsLegacy(bool value)
{
    isLegacy_ = value;
    isLegacyIsSet_ = true;
}

bool ShowStrategyResponse::isLegacyIsSet() const
{
    return isLegacyIsSet_;
}

void ShowStrategyResponse::unsetisLegacy()
{
    isLegacyIsSet_ = false;
}

}
}
}
}
}


