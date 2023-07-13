

#include "huaweicloud/mpc/v1/model/QualityEnhanceTemplateInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




QualityEnhanceTemplateInfo::QualityEnhanceTemplateInfo()
{
    templateId_ = 0;
    templateIdIsSet_ = false;
    templateIsSet_ = false;
    errorIsSet_ = false;
}

QualityEnhanceTemplateInfo::~QualityEnhanceTemplateInfo() = default;

void QualityEnhanceTemplateInfo::validate()
{
}

web::json::value QualityEnhanceTemplateInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(templateIsSet_) {
        val[utility::conversions::to_string_t("template")] = ModelBase::toJson(template_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }

    return val;
}

bool QualityEnhanceTemplateInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            XCodeError refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    return ok;
}

int32_t QualityEnhanceTemplateInfo::getTemplateId() const
{
    return templateId_;
}

void QualityEnhanceTemplateInfo::setTemplateId(int32_t value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool QualityEnhanceTemplateInfo::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void QualityEnhanceTemplateInfo::unsettemplateId()
{
    templateIdIsSet_ = false;
}

QualityEnhanceTemplate QualityEnhanceTemplateInfo::getTemplate() const
{
    return template_;
}

void QualityEnhanceTemplateInfo::setTemplate(const QualityEnhanceTemplate& value)
{
    template_ = value;
    templateIsSet_ = true;
}

bool QualityEnhanceTemplateInfo::templateIsSet() const
{
    return templateIsSet_;
}

void QualityEnhanceTemplateInfo::unsettemplate()
{
    templateIsSet_ = false;
}

XCodeError QualityEnhanceTemplateInfo::getError() const
{
    return error_;
}

void QualityEnhanceTemplateInfo::setError(const XCodeError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool QualityEnhanceTemplateInfo::errorIsSet() const
{
    return errorIsSet_;
}

void QualityEnhanceTemplateInfo::unseterror()
{
    errorIsSet_ = false;
}

}
}
}
}
}


