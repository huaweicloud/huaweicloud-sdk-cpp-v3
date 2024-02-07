

#include "huaweicloud/geip/v3/model/UpdateGlobalEipRequestBody_global_eip.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




UpdateGlobalEipRequestBody_global_eip::UpdateGlobalEipRequestBody_global_eip()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

UpdateGlobalEipRequestBody_global_eip::~UpdateGlobalEipRequestBody_global_eip() = default;

void UpdateGlobalEipRequestBody_global_eip::validate()
{
}

web::json::value UpdateGlobalEipRequestBody_global_eip::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool UpdateGlobalEipRequestBody_global_eip::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string UpdateGlobalEipRequestBody_global_eip::getName() const
{
    return name_;
}

void UpdateGlobalEipRequestBody_global_eip::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateGlobalEipRequestBody_global_eip::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateGlobalEipRequestBody_global_eip::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateGlobalEipRequestBody_global_eip::getDescription() const
{
    return description_;
}

void UpdateGlobalEipRequestBody_global_eip::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateGlobalEipRequestBody_global_eip::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateGlobalEipRequestBody_global_eip::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


