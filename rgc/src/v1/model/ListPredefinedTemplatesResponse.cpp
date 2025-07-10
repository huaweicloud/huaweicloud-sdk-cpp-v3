

#include "huaweicloud/rgc/v1/model/ListPredefinedTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ListPredefinedTemplatesResponse::ListPredefinedTemplatesResponse()
{
    templatesIsSet_ = false;
}

ListPredefinedTemplatesResponse::~ListPredefinedTemplatesResponse() = default;

void ListPredefinedTemplatesResponse::validate()
{
}

web::json::value ListPredefinedTemplatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templatesIsSet_) {
        val[utility::conversions::to_string_t("templates")] = ModelBase::toJson(templates_);
    }

    return val;
}
bool ListPredefinedTemplatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("templates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("templates"));
        if(!fieldValue.is_null())
        {
            std::vector<PredefinedTemplate> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplates(refVal);
        }
    }
    return ok;
}


std::vector<PredefinedTemplate>& ListPredefinedTemplatesResponse::getTemplates()
{
    return templates_;
}

void ListPredefinedTemplatesResponse::setTemplates(const std::vector<PredefinedTemplate>& value)
{
    templates_ = value;
    templatesIsSet_ = true;
}

bool ListPredefinedTemplatesResponse::templatesIsSet() const
{
    return templatesIsSet_;
}

void ListPredefinedTemplatesResponse::unsettemplates()
{
    templatesIsSet_ = false;
}

}
}
}
}
}


