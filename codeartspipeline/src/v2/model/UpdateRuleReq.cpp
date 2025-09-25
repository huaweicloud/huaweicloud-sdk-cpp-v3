

#include "huaweicloud/codeartspipeline/v2/model/UpdateRuleReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




UpdateRuleReq::UpdateRuleReq()
{
    type_ = "";
    typeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    pluginId_ = "";
    pluginIdIsSet_ = false;
    pluginName_ = "";
    pluginNameIsSet_ = false;
    pluginVersion_ = "";
    pluginVersionIsSet_ = false;
    contentIsSet_ = false;
}

UpdateRuleReq::~UpdateRuleReq() = default;

void UpdateRuleReq::validate()
{
}

web::json::value UpdateRuleReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
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
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }

    return val;
}
bool UpdateRuleReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string UpdateRuleReq::getType() const
{
    return type_;
}

void UpdateRuleReq::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool UpdateRuleReq::typeIsSet() const
{
    return typeIsSet_;
}

void UpdateRuleReq::unsettype()
{
    typeIsSet_ = false;
}

std::string UpdateRuleReq::getName() const
{
    return name_;
}

void UpdateRuleReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateRuleReq::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateRuleReq::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateRuleReq::getPluginId() const
{
    return pluginId_;
}

void UpdateRuleReq::setPluginId(const std::string& value)
{
    pluginId_ = value;
    pluginIdIsSet_ = true;
}

bool UpdateRuleReq::pluginIdIsSet() const
{
    return pluginIdIsSet_;
}

void UpdateRuleReq::unsetpluginId()
{
    pluginIdIsSet_ = false;
}

std::string UpdateRuleReq::getPluginName() const
{
    return pluginName_;
}

void UpdateRuleReq::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool UpdateRuleReq::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void UpdateRuleReq::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

std::string UpdateRuleReq::getPluginVersion() const
{
    return pluginVersion_;
}

void UpdateRuleReq::setPluginVersion(const std::string& value)
{
    pluginVersion_ = value;
    pluginVersionIsSet_ = true;
}

bool UpdateRuleReq::pluginVersionIsSet() const
{
    return pluginVersionIsSet_;
}

void UpdateRuleReq::unsetpluginVersion()
{
    pluginVersionIsSet_ = false;
}

std::vector<RuleContent>& UpdateRuleReq::getContent()
{
    return content_;
}

void UpdateRuleReq::setContent(const std::vector<RuleContent>& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool UpdateRuleReq::contentIsSet() const
{
    return contentIsSet_;
}

void UpdateRuleReq::unsetcontent()
{
    contentIsSet_ = false;
}

}
}
}
}
}


