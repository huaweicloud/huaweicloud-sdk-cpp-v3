

#include "huaweicloud/codeartspipeline/v2/model/ShowRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowRuleResponse::ShowRuleResponse()
{
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    isValid_ = false;
    isValidIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    pluginId_ = "";
    pluginIdIsSet_ = false;
    pluginName_ = "";
    pluginNameIsSet_ = false;
    pluginVersion_ = "";
    pluginVersionIsSet_ = false;
    creator_ = "";
    creatorIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updater_ = "";
    updaterIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    contentIsSet_ = false;
}

ShowRuleResponse::~ShowRuleResponse() = default;

void ShowRuleResponse::validate()
{
}

web::json::value ShowRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(isValidIsSet_) {
        val[utility::conversions::to_string_t("is_valid")] = ModelBase::toJson(isValid_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(pluginIdIsSet_) {
        val[utility::conversions::to_string_t("plugin_id")] = ModelBase::toJson(pluginId_);
    }
    if(pluginNameIsSet_) {
        val[utility::conversions::to_string_t("plugin_name")] = ModelBase::toJson(pluginName_);
    }
    if(pluginVersionIsSet_) {
        val[utility::conversions::to_string_t("plugin_version")] = ModelBase::toJson(pluginVersion_);
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
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }

    return val;
}
bool ShowRuleResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_valid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_valid"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsValid(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("plugin_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plugin_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plugin_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::vector<RuleContent> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    return ok;
}


std::string ShowRuleResponse::getId() const
{
    return id_;
}

void ShowRuleResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowRuleResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowRuleResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowRuleResponse::getType() const
{
    return type_;
}

void ShowRuleResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowRuleResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ShowRuleResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string ShowRuleResponse::getName() const
{
    return name_;
}

void ShowRuleResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowRuleResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowRuleResponse::unsetname()
{
    nameIsSet_ = false;
}

bool ShowRuleResponse::isIsValid() const
{
    return isValid_;
}

void ShowRuleResponse::setIsValid(bool value)
{
    isValid_ = value;
    isValidIsSet_ = true;
}

bool ShowRuleResponse::isValidIsSet() const
{
    return isValidIsSet_;
}

void ShowRuleResponse::unsetisValid()
{
    isValidIsSet_ = false;
}

std::string ShowRuleResponse::getVersion() const
{
    return version_;
}

void ShowRuleResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowRuleResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ShowRuleResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::string ShowRuleResponse::getPluginId() const
{
    return pluginId_;
}

void ShowRuleResponse::setPluginId(const std::string& value)
{
    pluginId_ = value;
    pluginIdIsSet_ = true;
}

bool ShowRuleResponse::pluginIdIsSet() const
{
    return pluginIdIsSet_;
}

void ShowRuleResponse::unsetpluginId()
{
    pluginIdIsSet_ = false;
}

std::string ShowRuleResponse::getPluginName() const
{
    return pluginName_;
}

void ShowRuleResponse::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool ShowRuleResponse::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void ShowRuleResponse::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

std::string ShowRuleResponse::getPluginVersion() const
{
    return pluginVersion_;
}

void ShowRuleResponse::setPluginVersion(const std::string& value)
{
    pluginVersion_ = value;
    pluginVersionIsSet_ = true;
}

bool ShowRuleResponse::pluginVersionIsSet() const
{
    return pluginVersionIsSet_;
}

void ShowRuleResponse::unsetpluginVersion()
{
    pluginVersionIsSet_ = false;
}

std::string ShowRuleResponse::getCreator() const
{
    return creator_;
}

void ShowRuleResponse::setCreator(const std::string& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool ShowRuleResponse::creatorIsSet() const
{
    return creatorIsSet_;
}

void ShowRuleResponse::unsetcreator()
{
    creatorIsSet_ = false;
}

std::string ShowRuleResponse::getCreateTime() const
{
    return createTime_;
}

void ShowRuleResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowRuleResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowRuleResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowRuleResponse::getUpdater() const
{
    return updater_;
}

void ShowRuleResponse::setUpdater(const std::string& value)
{
    updater_ = value;
    updaterIsSet_ = true;
}

bool ShowRuleResponse::updaterIsSet() const
{
    return updaterIsSet_;
}

void ShowRuleResponse::unsetupdater()
{
    updaterIsSet_ = false;
}

std::string ShowRuleResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowRuleResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowRuleResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowRuleResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::vector<RuleContent>& ShowRuleResponse::getContent()
{
    return content_;
}

void ShowRuleResponse::setContent(const std::vector<RuleContent>& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool ShowRuleResponse::contentIsSet() const
{
    return contentIsSet_;
}

void ShowRuleResponse::unsetcontent()
{
    contentIsSet_ = false;
}

}
}
}
}
}


