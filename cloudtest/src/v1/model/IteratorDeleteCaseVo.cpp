

#include "huaweicloud/cloudtest/v1/model/IteratorDeleteCaseVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




IteratorDeleteCaseVo::IteratorDeleteCaseVo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

IteratorDeleteCaseVo::~IteratorDeleteCaseVo() = default;

void IteratorDeleteCaseVo::validate()
{
}

web::json::value IteratorDeleteCaseVo::toJson() const
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
bool IteratorDeleteCaseVo::fromJson(const web::json::value& val)
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


std::string IteratorDeleteCaseVo::getId() const
{
    return id_;
}

void IteratorDeleteCaseVo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IteratorDeleteCaseVo::idIsSet() const
{
    return idIsSet_;
}

void IteratorDeleteCaseVo::unsetid()
{
    idIsSet_ = false;
}

std::string IteratorDeleteCaseVo::getName() const
{
    return name_;
}

void IteratorDeleteCaseVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IteratorDeleteCaseVo::nameIsSet() const
{
    return nameIsSet_;
}

void IteratorDeleteCaseVo::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


