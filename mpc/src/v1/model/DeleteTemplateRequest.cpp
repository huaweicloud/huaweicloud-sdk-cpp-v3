

#include "huaweicloud/mpc/v1/model/DeleteTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




DeleteTemplateRequest::DeleteTemplateRequest()
{
    templateId_ = 0L;
    templateIdIsSet_ = false;
}

DeleteTemplateRequest::~DeleteTemplateRequest() = default;

void DeleteTemplateRequest::validate()
{
}

web::json::value DeleteTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }

    return val;
}
bool DeleteTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    return ok;
}


int64_t DeleteTemplateRequest::getTemplateId() const
{
    return templateId_;
}

void DeleteTemplateRequest::setTemplateId(int64_t value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool DeleteTemplateRequest::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void DeleteTemplateRequest::unsettemplateId()
{
    templateIdIsSet_ = false;
}

}
}
}
}
}


