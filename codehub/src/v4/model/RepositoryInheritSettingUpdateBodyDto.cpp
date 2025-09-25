

#include "huaweicloud/codehub/v4/model/RepositoryInheritSettingUpdateBodyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




RepositoryInheritSettingUpdateBodyDto::RepositoryInheritSettingUpdateBodyDto()
{
    name_ = "";
    nameIsSet_ = false;
    inheritMod_ = "";
    inheritModIsSet_ = false;
}

RepositoryInheritSettingUpdateBodyDto::~RepositoryInheritSettingUpdateBodyDto() = default;

void RepositoryInheritSettingUpdateBodyDto::validate()
{
}

web::json::value RepositoryInheritSettingUpdateBodyDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(inheritModIsSet_) {
        val[utility::conversions::to_string_t("inherit_mod")] = ModelBase::toJson(inheritMod_);
    }

    return val;
}
bool RepositoryInheritSettingUpdateBodyDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("inherit_mod"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inherit_mod"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInheritMod(refVal);
        }
    }
    return ok;
}


std::string RepositoryInheritSettingUpdateBodyDto::getName() const
{
    return name_;
}

void RepositoryInheritSettingUpdateBodyDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RepositoryInheritSettingUpdateBodyDto::nameIsSet() const
{
    return nameIsSet_;
}

void RepositoryInheritSettingUpdateBodyDto::unsetname()
{
    nameIsSet_ = false;
}

std::string RepositoryInheritSettingUpdateBodyDto::getInheritMod() const
{
    return inheritMod_;
}

void RepositoryInheritSettingUpdateBodyDto::setInheritMod(const std::string& value)
{
    inheritMod_ = value;
    inheritModIsSet_ = true;
}

bool RepositoryInheritSettingUpdateBodyDto::inheritModIsSet() const
{
    return inheritModIsSet_;
}

void RepositoryInheritSettingUpdateBodyDto::unsetinheritMod()
{
    inheritModIsSet_ = false;
}

}
}
}
}
}


