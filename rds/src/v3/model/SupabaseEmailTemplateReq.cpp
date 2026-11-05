

#include "huaweicloud/rds/v3/model/SupabaseEmailTemplateReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SupabaseEmailTemplateReq::SupabaseEmailTemplateReq()
{
    mailerConfirmationIsSet_ = false;
}

SupabaseEmailTemplateReq::~SupabaseEmailTemplateReq() = default;

void SupabaseEmailTemplateReq::validate()
{
}

web::json::value SupabaseEmailTemplateReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(mailerConfirmationIsSet_) {
        val[utility::conversions::to_string_t("mailer_confirmation")] = ModelBase::toJson(mailerConfirmation_);
    }

    return val;
}
bool SupabaseEmailTemplateReq::fromJson(const web::json::value& val)
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


SupabaseMailerItemTemplateReq SupabaseEmailTemplateReq::getMailerConfirmation() const
{
    return mailerConfirmation_;
}

void SupabaseEmailTemplateReq::setMailerConfirmation(const SupabaseMailerItemTemplateReq& value)
{
    mailerConfirmation_ = value;
    mailerConfirmationIsSet_ = true;
}

bool SupabaseEmailTemplateReq::mailerConfirmationIsSet() const
{
    return mailerConfirmationIsSet_;
}

void SupabaseEmailTemplateReq::unsetmailerConfirmation()
{
    mailerConfirmationIsSet_ = false;
}

}
}
}
}
}


