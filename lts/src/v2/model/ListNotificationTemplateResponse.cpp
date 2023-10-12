

#include "huaweicloud/lts/v2/model/ListNotificationTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListNotificationTemplateResponse::ListNotificationTemplateResponse()
{
    template_ = "";
    templateIsSet_ = false;
}

ListNotificationTemplateResponse::~ListNotificationTemplateResponse() = default;

void ListNotificationTemplateResponse::validate()
{
}

web::json::value ListNotificationTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIsSet_) {
        val[utility::conversions::to_string_t("template")] = ModelBase::toJson(template_);
    }

    return val;
}
bool ListNotificationTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplate(refVal);
        }
    }
    return ok;
}


std::string ListNotificationTemplateResponse::getTemplate() const
{
    return template_;
}

void ListNotificationTemplateResponse::setTemplate(const std::string& value)
{
    template_ = value;
    templateIsSet_ = true;
}

bool ListNotificationTemplateResponse::templateIsSet() const
{
    return templateIsSet_;
}

void ListNotificationTemplateResponse::unsettemplate()
{
    templateIsSet_ = false;
}

}
}
}
}
}


