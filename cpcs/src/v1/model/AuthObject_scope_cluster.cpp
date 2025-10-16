

#include "huaweicloud/cpcs/v1/model/AuthObject_scope_cluster.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




AuthObject_scope_cluster::AuthObject_scope_cluster()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

AuthObject_scope_cluster::~AuthObject_scope_cluster() = default;

void AuthObject_scope_cluster::validate()
{
}

web::json::value AuthObject_scope_cluster::toJson() const
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
bool AuthObject_scope_cluster::fromJson(const web::json::value& val)
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


std::string AuthObject_scope_cluster::getId() const
{
    return id_;
}

void AuthObject_scope_cluster::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AuthObject_scope_cluster::idIsSet() const
{
    return idIsSet_;
}

void AuthObject_scope_cluster::unsetid()
{
    idIsSet_ = false;
}

std::string AuthObject_scope_cluster::getName() const
{
    return name_;
}

void AuthObject_scope_cluster::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AuthObject_scope_cluster::nameIsSet() const
{
    return nameIsSet_;
}

void AuthObject_scope_cluster::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


