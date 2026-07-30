

#include "huaweicloud/modelarts/v1/model/ShowPluginTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowPluginTemplateRequest::ShowPluginTemplateRequest()
{
    plugintemplateName_ = "";
    plugintemplateNameIsSet_ = false;
}

ShowPluginTemplateRequest::~ShowPluginTemplateRequest() = default;

void ShowPluginTemplateRequest::validate()
{
}

web::json::value ShowPluginTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(plugintemplateNameIsSet_) {
        val[utility::conversions::to_string_t("plugintemplate_name")] = ModelBase::toJson(plugintemplateName_);
    }

    return val;
}
bool ShowPluginTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("plugintemplate_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugintemplate_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlugintemplateName(refVal);
        }
    }
    return ok;
}


std::string ShowPluginTemplateRequest::getPlugintemplateName() const
{
    return plugintemplateName_;
}

void ShowPluginTemplateRequest::setPlugintemplateName(const std::string& value)
{
    plugintemplateName_ = value;
    plugintemplateNameIsSet_ = true;
}

bool ShowPluginTemplateRequest::plugintemplateNameIsSet() const
{
    return plugintemplateNameIsSet_;
}

void ShowPluginTemplateRequest::unsetplugintemplateName()
{
    plugintemplateNameIsSet_ = false;
}

}
}
}
}
}


