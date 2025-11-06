

#include "huaweicloud/codeartsrepo/v4/model/RepositoryInheritSettingDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




RepositoryInheritSettingDto::RepositoryInheritSettingDto()
{
    name_ = "";
    nameIsSet_ = false;
    inheritMod_ = "";
    inheritModIsSet_ = false;
}

RepositoryInheritSettingDto::~RepositoryInheritSettingDto() = default;

void RepositoryInheritSettingDto::validate()
{
}

web::json::value RepositoryInheritSettingDto::toJson() const
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
bool RepositoryInheritSettingDto::fromJson(const web::json::value& val)
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


std::string RepositoryInheritSettingDto::getName() const
{
    return name_;
}

void RepositoryInheritSettingDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RepositoryInheritSettingDto::nameIsSet() const
{
    return nameIsSet_;
}

void RepositoryInheritSettingDto::unsetname()
{
    nameIsSet_ = false;
}

std::string RepositoryInheritSettingDto::getInheritMod() const
{
    return inheritMod_;
}

void RepositoryInheritSettingDto::setInheritMod(const std::string& value)
{
    inheritMod_ = value;
    inheritModIsSet_ = true;
}

bool RepositoryInheritSettingDto::inheritModIsSet() const
{
    return inheritModIsSet_;
}

void RepositoryInheritSettingDto::unsetinheritMod()
{
    inheritModIsSet_ = false;
}

}
}
}
}
}


