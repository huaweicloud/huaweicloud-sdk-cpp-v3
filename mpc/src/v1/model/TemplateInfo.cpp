

#include "huaweicloud/mpc/v1/model/TemplateInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




TemplateInfo::TemplateInfo()
{
    templateId_ = 0;
    templateIdIsSet_ = false;
    templateIsSet_ = false;
}

TemplateInfo::~TemplateInfo() = default;

void TemplateInfo::validate()
{
}

web::json::value TemplateInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(templateIsSet_) {
        val[utility::conversions::to_string_t("template")] = ModelBase::toJson(template_);
    }

    return val;
}
bool TemplateInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template"));
        if(!fieldValue.is_null())
        {
            QueryTransTemplate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplate(refVal);
        }
    }
    return ok;
}


int32_t TemplateInfo::getTemplateId() const
{
    return templateId_;
}

void TemplateInfo::setTemplateId(int32_t value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool TemplateInfo::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void TemplateInfo::unsettemplateId()
{
    templateIdIsSet_ = false;
}

QueryTransTemplate TemplateInfo::getTemplate() const
{
    return template_;
}

void TemplateInfo::setTemplate(const QueryTransTemplate& value)
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


