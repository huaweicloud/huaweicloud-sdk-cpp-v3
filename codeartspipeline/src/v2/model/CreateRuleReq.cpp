

#include "huaweicloud/codeartspipeline/v2/model/CreateRuleReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreateRuleReq::CreateRuleReq()
{
    type_ = "";
    typeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    layoutContent_ = "";
    layoutContentIsSet_ = false;
    pluginId_ = "";
    pluginIdIsSet_ = false;
    pluginName_ = "";
    pluginNameIsSet_ = false;
    pluginVersion_ = "";
    pluginVersionIsSet_ = false;
    contentIsSet_ = false;
}

CreateRuleReq::~CreateRuleReq() = default;

void CreateRuleReq::validate()
{
}

web::json::value CreateRuleReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(layoutContentIsSet_) {
        val[utility::conversions::to_string_t("layout_content")] = ModelBase::toJson(layoutContent_);
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
bool CreateRuleReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("layout_content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("layout_content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLayoutContent(refVal);
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


std::string CreateRuleReq::getType() const
{
    return type_;
}

void CreateRuleReq::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateRuleReq::typeIsSet() const
{
    return typeIsSet_;
}

void CreateRuleReq::unsettype()
{
    typeIsSet_ = false;
}

std::string CreateRuleReq::getName() const
{
    return name_;
}

void CreateRuleReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateRuleReq::nameIsSet() const
{
    return nameIsSet_;
}

void CreateRuleReq::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateRuleReq::getLayoutContent() const
{
    return layoutContent_;
}

void CreateRuleReq::setLayoutContent(const std::string& value)
{
    layoutContent_ = value;
    layoutContentIsSet_ = true;
}

bool CreateRuleReq::layoutContentIsSet() const
{
    return layoutContentIsSet_;
}

void CreateRuleReq::unsetlayoutContent()
{
    layoutContentIsSet_ = false;
}

std::string CreateRuleReq::getPluginId() const
{
    return pluginId_;
}

void CreateRuleReq::setPluginId(const std::string& value)
{
    pluginId_ = value;
    pluginIdIsSet_ = true;
}

bool CreateRuleReq::pluginIdIsSet() const
{
    return pluginIdIsSet_;
}

void CreateRuleReq::unsetpluginId()
{
    pluginIdIsSet_ = false;
}

std::string CreateRuleReq::getPluginName() const
{
    return pluginName_;
}

void CreateRuleReq::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool CreateRuleReq::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void CreateRuleReq::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

std::string CreateRuleReq::getPluginVersion() const
{
    return pluginVersion_;
}

void CreateRuleReq::setPluginVersion(const std::string& value)
{
    pluginVersion_ = value;
    pluginVersionIsSet_ = true;
}

bool CreateRuleReq::pluginVersionIsSet() const
{
    return pluginVersionIsSet_;
}

void CreateRuleReq::unsetpluginVersion()
{
    pluginVersionIsSet_ = false;
}

std::vector<RuleContent>& CreateRuleReq::getContent()
{
    return content_;
}

void CreateRuleReq::setContent(const std::vector<RuleContent>& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool CreateRuleReq::contentIsSet() const
{
    return contentIsSet_;
}

void CreateRuleReq::unsetcontent()
{
    contentIsSet_ = false;
}

}
}
}
}
}


