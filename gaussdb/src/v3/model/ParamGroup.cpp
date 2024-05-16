

#include "huaweicloud/gaussdb/v3/model/ParamGroup.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ParamGroup::ParamGroup()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ParamGroup::~ParamGroup() = default;

void ParamGroup::validate()
{
}

web::json::value ParamGroup::toJson() const
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
bool ParamGroup::fromJson(const web::json::value& val)
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


std::string ParamGroup::getId() const
{
    return id_;
}

void ParamGroup::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ParamGroup::idIsSet() const
{
    return idIsSet_;
}

void ParamGroup::unsetid()
{
    idIsSet_ = false;
}

std::string ParamGroup::getName() const
{
    return name_;
}

void ParamGroup::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ParamGroup::nameIsSet() const
{
    return nameIsSet_;
}

void ParamGroup::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


