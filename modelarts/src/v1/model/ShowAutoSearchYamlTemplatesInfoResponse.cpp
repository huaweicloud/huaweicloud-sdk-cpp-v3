

#include "huaweicloud/modelarts/v1/model/ShowAutoSearchYamlTemplatesInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowAutoSearchYamlTemplatesInfoResponse::ShowAutoSearchYamlTemplatesInfoResponse()
{
    yamlTemplatesIsSet_ = false;
}

ShowAutoSearchYamlTemplatesInfoResponse::~ShowAutoSearchYamlTemplatesInfoResponse() = default;

void ShowAutoSearchYamlTemplatesInfoResponse::validate()
{
}

web::json::value ShowAutoSearchYamlTemplatesInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(yamlTemplatesIsSet_) {
        val[utility::conversions::to_string_t("yaml_templates")] = ModelBase::toJson(yamlTemplates_);
    }

    return val;
}
bool ShowAutoSearchYamlTemplatesInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("yaml_templates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("yaml_templates"));
        if(!fieldValue.is_null())
        {
            std::vector<YamlTemplate> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setYamlTemplates(refVal);
        }
    }
    return ok;
}


std::vector<YamlTemplate>& ShowAutoSearchYamlTemplatesInfoResponse::getYamlTemplates()
{
    return yamlTemplates_;
}

void ShowAutoSearchYamlTemplatesInfoResponse::setYamlTemplates(const std::vector<YamlTemplate>& value)
{
    yamlTemplates_ = value;
    yamlTemplatesIsSet_ = true;
}

bool ShowAutoSearchYamlTemplatesInfoResponse::yamlTemplatesIsSet() const
{
    return yamlTemplatesIsSet_;
}

void ShowAutoSearchYamlTemplatesInfoResponse::unsetyamlTemplates()
{
    yamlTemplatesIsSet_ = false;
}

}
}
}
}
}


