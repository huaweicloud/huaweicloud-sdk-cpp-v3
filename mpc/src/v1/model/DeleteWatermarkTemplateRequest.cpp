

#include "huaweicloud/mpc/v1/model/DeleteWatermarkTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




DeleteWatermarkTemplateRequest::DeleteWatermarkTemplateRequest()
{
    templateId_ = 0;
    templateIdIsSet_ = false;
}

DeleteWatermarkTemplateRequest::~DeleteWatermarkTemplateRequest() = default;

void DeleteWatermarkTemplateRequest::validate()
{
}

web::json::value DeleteWatermarkTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }

    return val;
}
bool DeleteWatermarkTemplateRequest::fromJson(const web::json::value& val)
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


int32_t DeleteWatermarkTemplateRequest::getTemplateId() const
{
    return templateId_;
}

void DeleteWatermarkTemplateRequest::setTemplateId(int32_t value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool DeleteWatermarkTemplateRequest::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void DeleteWatermarkTemplateRequest::unsettemplateId()
{
    templateIdIsSet_ = false;
}

}
}
}
}
}


