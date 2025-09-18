

#include "huaweicloud/projectman/v4/model/ListTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListTemplatesResponse::ListTemplatesResponse()
{
    templatesIsSet_ = false;
}

ListTemplatesResponse::~ListTemplatesResponse() = default;

void ListTemplatesResponse::validate()
{
}

web::json::value ListTemplatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templatesIsSet_) {
        val[utility::conversions::to_string_t("templates")] = ModelBase::toJson(templates_);
    }

    return val;
}
bool ListTemplatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("templates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("templates"));
        if(!fieldValue.is_null())
        {
            std::vector<TemplateListV4ResponseBody_templates> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplates(refVal);
        }
    }
    return ok;
}


std::vector<TemplateListV4ResponseBody_templates>& ListTemplatesResponse::getTemplates()
{
    return templates_;
}

void ListTemplatesResponse::setTemplates(const std::vector<TemplateListV4ResponseBody_templates>& value)
{
    templates_ = value;
    templatesIsSet_ = true;
}

bool ListTemplatesResponse::templatesIsSet() const
{
    return templatesIsSet_;
}

void ListTemplatesResponse::unsettemplates()
{
    templatesIsSet_ = false;
}

}
}
}
}
}


