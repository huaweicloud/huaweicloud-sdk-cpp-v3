

#include "huaweicloud/gaussdbforopengauss/v3/model/ResumePluginExtensionsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ResumePluginExtensionsRequestBody::ResumePluginExtensionsRequestBody()
{
    pluginName_ = "";
    pluginNameIsSet_ = false;
    dbListIsSet_ = false;
    extensionName_ = "";
    extensionNameIsSet_ = false;
    extensionAction_ = "";
    extensionActionIsSet_ = false;
}

ResumePluginExtensionsRequestBody::~ResumePluginExtensionsRequestBody() = default;

void ResumePluginExtensionsRequestBody::validate()
{
}

web::json::value ResumePluginExtensionsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pluginNameIsSet_) {
        val[utility::conversions::to_string_t("plugin_name")] = ModelBase::toJson(pluginName_);
    }
    if(dbListIsSet_) {
        val[utility::conversions::to_string_t("db_list")] = ModelBase::toJson(dbList_);
    }
    if(extensionNameIsSet_) {
        val[utility::conversions::to_string_t("extension_name")] = ModelBase::toJson(extensionName_);
    }
    if(extensionActionIsSet_) {
        val[utility::conversions::to_string_t("extension_action")] = ModelBase::toJson(extensionAction_);
    }

    return val;
}
bool ResumePluginExtensionsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("plugin_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extension_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extension_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtensionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extension_action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extension_action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtensionAction(refVal);
        }
    }
    return ok;
}


std::string ResumePluginExtensionsRequestBody::getPluginName() const
{
    return pluginName_;
}

void ResumePluginExtensionsRequestBody::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool ResumePluginExtensionsRequestBody::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void ResumePluginExtensionsRequestBody::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

std::vector<std::string>& ResumePluginExtensionsRequestBody::getDbList()
{
    return dbList_;
}

void ResumePluginExtensionsRequestBody::setDbList(const std::vector<std::string>& value)
{
    dbList_ = value;
    dbListIsSet_ = true;
}

bool ResumePluginExtensionsRequestBody::dbListIsSet() const
{
    return dbListIsSet_;
}

void ResumePluginExtensionsRequestBody::unsetdbList()
{
    dbListIsSet_ = false;
}

std::string ResumePluginExtensionsRequestBody::getExtensionName() const
{
    return extensionName_;
}

void ResumePluginExtensionsRequestBody::setExtensionName(const std::string& value)
{
    extensionName_ = value;
    extensionNameIsSet_ = true;
}

bool ResumePluginExtensionsRequestBody::extensionNameIsSet() const
{
    return extensionNameIsSet_;
}

void ResumePluginExtensionsRequestBody::unsetextensionName()
{
    extensionNameIsSet_ = false;
}

std::string ResumePluginExtensionsRequestBody::getExtensionAction() const
{
    return extensionAction_;
}

void ResumePluginExtensionsRequestBody::setExtensionAction(const std::string& value)
{
    extensionAction_ = value;
    extensionActionIsSet_ = true;
}

bool ResumePluginExtensionsRequestBody::extensionActionIsSet() const
{
    return extensionActionIsSet_;
}

void ResumePluginExtensionsRequestBody::unsetextensionAction()
{
    extensionActionIsSet_ = false;
}

}
}
}
}
}


