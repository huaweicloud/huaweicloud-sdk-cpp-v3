

#include "huaweicloud/modelarts/v1/model/PluginSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PluginSpec::PluginSpec()
{
    templateIsSet_ = false;
}

PluginSpec::~PluginSpec() = default;

void PluginSpec::validate()
{
}

web::json::value PluginSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIsSet_) {
        val[utility::conversions::to_string_t("template")] = ModelBase::toJson(template_);
    }

    return val;
}
bool PluginSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template"));
        if(!fieldValue.is_null())
        {
            Template refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplate(refVal);
        }
    }
    return ok;
}


Template PluginSpec::getTemplate() const
{
    return template_;
}

void PluginSpec::setTemplate(const Template& value)
{
    template_ = value;
    templateIsSet_ = true;
}

bool PluginSpec::templateIsSet() const
{
    return templateIsSet_;
}

void PluginSpec::unsettemplate()
{
    templateIsSet_ = false;
}

}
}
}
}
}


