

#include "huaweicloud/mpc/v1/model/DeleteQualityEnhanceTemplateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




DeleteQualityEnhanceTemplateRequest::DeleteQualityEnhanceTemplateRequest()
{
    templateId_ = 0;
    templateIdIsSet_ = false;
}

DeleteQualityEnhanceTemplateRequest::~DeleteQualityEnhanceTemplateRequest() = default;

void DeleteQualityEnhanceTemplateRequest::validate()
{
}

web::json::value DeleteQualityEnhanceTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }

    return val;
}

bool DeleteQualityEnhanceTemplateRequest::fromJson(const web::json::value& val)
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
    return ok;
}

int32_t DeleteQualityEnhanceTemplateRequest::getTemplateId() const
{
    return templateId_;
}

void DeleteQualityEnhanceTemplateRequest::setTemplateId(int32_t value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool DeleteQualityEnhanceTemplateRequest::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void DeleteQualityEnhanceTemplateRequest::unsettemplateId()
{
    templateIdIsSet_ = false;
}

}
}
}
}
}


