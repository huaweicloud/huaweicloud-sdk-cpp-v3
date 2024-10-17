

#include "huaweicloud/dbss/v1/model/RdsDbRequest_databases.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RdsDbRequest_databases::RdsDbRequest_databases()
{
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

RdsDbRequest_databases::~RdsDbRequest_databases() = default;

void RdsDbRequest_databases::validate()
{
}

web::json::value RdsDbRequest_databases::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool RdsDbRequest_databases::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string RdsDbRequest_databases::getId() const
{
    return id_;
}

void RdsDbRequest_databases::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RdsDbRequest_databases::idIsSet() const
{
    return idIsSet_;
}

void RdsDbRequest_databases::unsetid()
{
    idIsSet_ = false;
}

std::string RdsDbRequest_databases::getType() const
{
    return type_;
}

void RdsDbRequest_databases::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RdsDbRequest_databases::typeIsSet() const
{
    return typeIsSet_;
}

void RdsDbRequest_databases::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


