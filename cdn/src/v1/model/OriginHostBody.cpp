

#include "huaweicloud/cdn/v1/model/OriginHostBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




OriginHostBody::OriginHostBody()
{
    originHostType_ = "";
    originHostTypeIsSet_ = false;
    customizeDomain_ = "";
    customizeDomainIsSet_ = false;
}

OriginHostBody::~OriginHostBody() = default;

void OriginHostBody::validate()
{
}

web::json::value OriginHostBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(originHostTypeIsSet_) {
        val[utility::conversions::to_string_t("origin_host_type")] = ModelBase::toJson(originHostType_);
    }
    if(customizeDomainIsSet_) {
        val[utility::conversions::to_string_t("customize_domain")] = ModelBase::toJson(customizeDomain_);
    }

    return val;
}
bool OriginHostBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("origin_host_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_host_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginHostType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("customize_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("customize_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomizeDomain(refVal);
        }
    }
    return ok;
}


std::string OriginHostBody::getOriginHostType() const
{
    return originHostType_;
}

void OriginHostBody::setOriginHostType(const std::string& value)
{
    originHostType_ = value;
    originHostTypeIsSet_ = true;
}

bool OriginHostBody::originHostTypeIsSet() const
{
    return originHostTypeIsSet_;
}

void OriginHostBody::unsetoriginHostType()
{
    originHostTypeIsSet_ = false;
}

std::string OriginHostBody::getCustomizeDomain() const
{
    return customizeDomain_;
}

void OriginHostBody::setCustomizeDomain(const std::string& value)
{
    customizeDomain_ = value;
    customizeDomainIsSet_ = true;
}

bool OriginHostBody::customizeDomainIsSet() const
{
    return customizeDomainIsSet_;
}

void OriginHostBody::unsetcustomizeDomain()
{
    customizeDomainIsSet_ = false;
}

}
}
}
}
}


