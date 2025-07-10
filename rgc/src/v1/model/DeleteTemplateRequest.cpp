

#include "huaweicloud/rgc/v1/model/DeleteTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




DeleteTemplateRequest::DeleteTemplateRequest()
{
    templateName_ = "";
    templateNameIsSet_ = false;
}

DeleteTemplateRequest::~DeleteTemplateRequest() = default;

void DeleteTemplateRequest::validate()
{
}

web::json::value DeleteTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
    }

    return val;
}
bool DeleteTemplateRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteTemplateRequest::getTemplateName() const
{
    return templateName_;
}

void DeleteTemplateRequest::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool DeleteTemplateRequest::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void DeleteTemplateRequest::unsettemplateName()
{
    templateNameIsSet_ = false;
}

}
}
}
}
}


