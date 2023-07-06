

#include "huaweicloud/lts/v2/model/DeleteNotificationTemplateBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DeleteNotificationTemplateBody::DeleteNotificationTemplateBody()
{
    templateNamesIsSet_ = false;
}

DeleteNotificationTemplateBody::~DeleteNotificationTemplateBody() = default;

void DeleteNotificationTemplateBody::validate()
{
}

web::json::value DeleteNotificationTemplateBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateNamesIsSet_) {
        val[utility::conversions::to_string_t("template_names")] = ModelBase::toJson(templateNames_);
    }

    return val;
}

bool DeleteNotificationTemplateBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateNames(refVal);
        }
    }
    return ok;
}

std::vector<std::string>& DeleteNotificationTemplateBody::getTemplateNames()
{
    return templateNames_;
}

void DeleteNotificationTemplateBody::setTemplateNames(const std::vector<std::string>& value)
{
    templateNames_ = value;
    templateNamesIsSet_ = true;
}

bool DeleteNotificationTemplateBody::templateNamesIsSet() const
{
    return templateNamesIsSet_;
}

void DeleteNotificationTemplateBody::unsettemplateNames()
{
    templateNamesIsSet_ = false;
}

}
}
}
}
}


