

#include "huaweicloud/rds/v3/model/SupabaseApiEmailTemplate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SupabaseApiEmailTemplate::SupabaseApiEmailTemplate()
{
    mailerConfirmationIsSet_ = false;
}

SupabaseApiEmailTemplate::~SupabaseApiEmailTemplate() = default;

void SupabaseApiEmailTemplate::validate()
{
}

web::json::value SupabaseApiEmailTemplate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(mailerConfirmationIsSet_) {
        val[utility::conversions::to_string_t("mailer_confirmation")] = ModelBase::toJson(mailerConfirmation_);
    }

    return val;
}
bool SupabaseApiEmailTemplate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("mailer_confirmation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mailer_confirmation"));
        if(!fieldValue.is_null())
        {
            SupabaseMailerItemTemplateReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMailerConfirmation(refVal);
        }
    }
    return ok;
}


SupabaseMailerItemTemplateReq SupabaseApiEmailTemplate::getMailerConfirmation() const
{
    return mailerConfirmation_;
}

void SupabaseApiEmailTemplate::setMailerConfirmation(const SupabaseMailerItemTemplateReq& value)
{
    mailerConfirmation_ = value;
    mailerConfirmationIsSet_ = true;
}

bool SupabaseApiEmailTemplate::mailerConfirmationIsSet() const
{
    return mailerConfirmationIsSet_;
}

void SupabaseApiEmailTemplate::unsetmailerConfirmation()
{
    mailerConfirmationIsSet_ = false;
}

}
}
}
}
}


