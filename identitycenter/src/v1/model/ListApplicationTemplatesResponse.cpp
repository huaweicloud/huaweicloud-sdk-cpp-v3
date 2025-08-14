

#include "huaweicloud/identitycenter/v1/model/ListApplicationTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListApplicationTemplatesResponse::ListApplicationTemplatesResponse()
{
    applicationTemplatesIsSet_ = false;
}

ListApplicationTemplatesResponse::~ListApplicationTemplatesResponse() = default;

void ListApplicationTemplatesResponse::validate()
{
}

web::json::value ListApplicationTemplatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationTemplatesIsSet_) {
        val[utility::conversions::to_string_t("application_templates")] = ModelBase::toJson(applicationTemplates_);
    }

    return val;
}
bool ListApplicationTemplatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("application_templates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_templates"));
        if(!fieldValue.is_null())
        {
            std::vector<ApplicationTemplateDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationTemplates(refVal);
        }
    }
    return ok;
}


std::vector<ApplicationTemplateDto>& ListApplicationTemplatesResponse::getApplicationTemplates()
{
    return applicationTemplates_;
}

void ListApplicationTemplatesResponse::setApplicationTemplates(const std::vector<ApplicationTemplateDto>& value)
{
    applicationTemplates_ = value;
    applicationTemplatesIsSet_ = true;
}

bool ListApplicationTemplatesResponse::applicationTemplatesIsSet() const
{
    return applicationTemplatesIsSet_;
}

void ListApplicationTemplatesResponse::unsetapplicationTemplates()
{
    applicationTemplatesIsSet_ = false;
}

}
}
}
}
}


