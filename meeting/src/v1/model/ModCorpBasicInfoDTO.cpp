

#include "huaweicloud/meeting/v1/model/ModCorpBasicInfoDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ModCorpBasicInfoDTO::ModCorpBasicInfoDTO()
{
    address_ = "";
    addressIsSet_ = false;
    autoUserCreate_ = false;
    autoUserCreateIsSet_ = false;
}

ModCorpBasicInfoDTO::~ModCorpBasicInfoDTO() = default;

void ModCorpBasicInfoDTO::validate()
{
}

web::json::value ModCorpBasicInfoDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(autoUserCreateIsSet_) {
        val[utility::conversions::to_string_t("autoUserCreate")] = ModelBase::toJson(autoUserCreate_);
    }

    return val;
}
bool ModCorpBasicInfoDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("autoUserCreate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("autoUserCreate"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoUserCreate(refVal);
        }
    }
    return ok;
}


std::string ModCorpBasicInfoDTO::getAddress() const
{
    return address_;
}

void ModCorpBasicInfoDTO::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool ModCorpBasicInfoDTO::addressIsSet() const
{
    return addressIsSet_;
}

void ModCorpBasicInfoDTO::unsetaddress()
{
    addressIsSet_ = false;
}

bool ModCorpBasicInfoDTO::isAutoUserCreate() const
{
    return autoUserCreate_;
}

void ModCorpBasicInfoDTO::setAutoUserCreate(bool value)
{
    autoUserCreate_ = value;
    autoUserCreateIsSet_ = true;
}

bool ModCorpBasicInfoDTO::autoUserCreateIsSet() const
{
    return autoUserCreateIsSet_;
}

void ModCorpBasicInfoDTO::unsetautoUserCreate()
{
    autoUserCreateIsSet_ = false;
}

}
}
}
}
}


