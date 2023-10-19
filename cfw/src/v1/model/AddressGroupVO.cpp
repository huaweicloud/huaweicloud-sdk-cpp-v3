

#include "huaweicloud/cfw/v1/model/AddressGroupVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddressGroupVO::AddressGroupVO()
{
    setId_ = "";
    setIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

AddressGroupVO::~AddressGroupVO() = default;

void AddressGroupVO::validate()
{
}

web::json::value AddressGroupVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(setIdIsSet_) {
        val[utility::conversions::to_string_t("set_id")] = ModelBase::toJson(setId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool AddressGroupVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string AddressGroupVO::getSetId() const
{
    return setId_;
}

void AddressGroupVO::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool AddressGroupVO::setIdIsSet() const
{
    return setIdIsSet_;
}

void AddressGroupVO::unsetsetId()
{
    setIdIsSet_ = false;
}

std::string AddressGroupVO::getName() const
{
    return name_;
}

void AddressGroupVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AddressGroupVO::nameIsSet() const
{
    return nameIsSet_;
}

void AddressGroupVO::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


