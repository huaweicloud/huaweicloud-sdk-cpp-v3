

#include "huaweicloud/rgc/v1/model/ShowTemplateDeployParamsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowTemplateDeployParamsRequest::ShowTemplateDeployParamsRequest()
{
    templateName_ = "";
    templateNameIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

ShowTemplateDeployParamsRequest::~ShowTemplateDeployParamsRequest() = default;

void ShowTemplateDeployParamsRequest::validate()
{
}

web::json::value ShowTemplateDeployParamsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool ShowTemplateDeployParamsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateName(refVal);
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
    return ok;
}


std::string ShowTemplateDeployParamsRequest::getTemplateName() const
{
    return templateName_;
}

void ShowTemplateDeployParamsRequest::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool ShowTemplateDeployParamsRequest::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void ShowTemplateDeployParamsRequest::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string ShowTemplateDeployParamsRequest::getVersion() const
{
    return version_;
}

void ShowTemplateDeployParamsRequest::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowTemplateDeployParamsRequest::versionIsSet() const
{
    return versionIsSet_;
}

void ShowTemplateDeployParamsRequest::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


