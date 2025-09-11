

#include "huaweicloud/dbss/v1/model/TemplateInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




TemplateInfo::TemplateInfo()
{
    templateIsSet_ = false;
}

TemplateInfo::~TemplateInfo() = default;

void TemplateInfo::validate()
{
}

web::json::value TemplateInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIsSet_) {
        val[utility::conversions::to_string_t("template")] = ModelBase::toJson(template_);
    }

    return val;
}
bool TemplateInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template"));
        if(!fieldValue.is_null())
        {
            TemplateBean refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplate(refVal);
        }
    }
    return ok;
}


TemplateBean TemplateInfo::getTemplate() const
{
    return template_;
}

void TemplateInfo::setTemplate(const TemplateBean& value)
{
    template_ = value;
    templateIsSet_ = true;
}

bool TemplateInfo::templateIsSet() const
{
    return templateIsSet_;
}

void TemplateInfo::unsettemplate()
{
    templateIsSet_ = false;
}

}
}
}
}
}


