

#include "huaweicloud/ecs/v2/model/TemplateInternetAccessOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




TemplateInternetAccessOption::TemplateInternetAccessOption()
{
    publicipIsSet_ = false;
}

TemplateInternetAccessOption::~TemplateInternetAccessOption() = default;

void TemplateInternetAccessOption::validate()
{
}

web::json::value TemplateInternetAccessOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipIsSet_) {
        val[utility::conversions::to_string_t("publicip")] = ModelBase::toJson(publicip_);
    }

    return val;
}
bool TemplateInternetAccessOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip"));
        if(!fieldValue.is_null())
        {
            TemplatePublicIpOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicip(refVal);
        }
    }
    return ok;
}


TemplatePublicIpOption TemplateInternetAccessOption::getPublicip() const
{
    return publicip_;
}

void TemplateInternetAccessOption::setPublicip(const TemplatePublicIpOption& value)
{
    publicip_ = value;
    publicipIsSet_ = true;
}

bool TemplateInternetAccessOption::publicipIsSet() const
{
    return publicipIsSet_;
}

void TemplateInternetAccessOption::unsetpublicip()
{
    publicipIsSet_ = false;
}

}
}
}
}
}


