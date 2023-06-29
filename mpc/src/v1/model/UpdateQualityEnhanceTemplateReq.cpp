

#include "huaweicloud/mpc/v1/model/UpdateQualityEnhanceTemplateReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




UpdateQualityEnhanceTemplateReq::UpdateQualityEnhanceTemplateReq()
{
    templateId_ = 0;
    templateIdIsSet_ = false;
    templateIsSet_ = false;
}

UpdateQualityEnhanceTemplateReq::~UpdateQualityEnhanceTemplateReq() = default;

void UpdateQualityEnhanceTemplateReq::validate()
{
}

web::json::value UpdateQualityEnhanceTemplateReq::toJson() const
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

bool UpdateQualityEnhanceTemplateReq::fromJson(const web::json::value& val)
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
            QualityEnhanceTemplate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplate(refVal);
        }
    }
    return ok;
}


int32_t UpdateQualityEnhanceTemplateReq::getTemplateId() const
{
    return templateId_;
}

void UpdateQualityEnhanceTemplateReq::setTemplateId(int32_t value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool UpdateQualityEnhanceTemplateReq::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void UpdateQualityEnhanceTemplateReq::unsettemplateId()
{
    templateIdIsSet_ = false;
}

QualityEnhanceTemplate UpdateQualityEnhanceTemplateReq::getTemplate() const
{
    return template_;
}

void UpdateQualityEnhanceTemplateReq::setTemplate(const QualityEnhanceTemplate& value)
{
    template_ = value;
    templateIsSet_ = true;
}

bool UpdateQualityEnhanceTemplateReq::templateIsSet() const
{
    return templateIsSet_;
}

void UpdateQualityEnhanceTemplateReq::unsettemplate()
{
    templateIsSet_ = false;
}

}
}
}
}
}


