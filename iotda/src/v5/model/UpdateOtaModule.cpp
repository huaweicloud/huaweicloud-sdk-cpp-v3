

#include "huaweicloud/iotda/v5/model/UpdateOtaModule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateOtaModule::UpdateOtaModule()
{
    aliasName_ = "";
    aliasNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

UpdateOtaModule::~UpdateOtaModule() = default;

void UpdateOtaModule::validate()
{
}

web::json::value UpdateOtaModule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(aliasNameIsSet_) {
        val[utility::conversions::to_string_t("alias_name")] = ModelBase::toJson(aliasName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool UpdateOtaModule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alias_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAliasName(refVal);
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


std::string UpdateOtaModule::getAliasName() const
{
    return aliasName_;
}

void UpdateOtaModule::setAliasName(const std::string& value)
{
    aliasName_ = value;
    aliasNameIsSet_ = true;
}

bool UpdateOtaModule::aliasNameIsSet() const
{
    return aliasNameIsSet_;
}

void UpdateOtaModule::unsetaliasName()
{
    aliasNameIsSet_ = false;
}

std::string UpdateOtaModule::getDescription() const
{
    return description_;
}

void UpdateOtaModule::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateOtaModule::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateOtaModule::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


