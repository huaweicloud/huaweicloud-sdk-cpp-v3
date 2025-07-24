

#include "huaweicloud/cloudtest/v1/model/NameAndIdVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




NameAndIdVo::NameAndIdVo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

NameAndIdVo::~NameAndIdVo() = default;

void NameAndIdVo::validate()
{
}

web::json::value NameAndIdVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool NameAndIdVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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


std::string NameAndIdVo::getId() const
{
    return id_;
}

void NameAndIdVo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NameAndIdVo::idIsSet() const
{
    return idIsSet_;
}

void NameAndIdVo::unsetid()
{
    idIsSet_ = false;
}

std::string NameAndIdVo::getName() const
{
    return name_;
}

void NameAndIdVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NameAndIdVo::nameIsSet() const
{
    return nameIsSet_;
}

void NameAndIdVo::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


