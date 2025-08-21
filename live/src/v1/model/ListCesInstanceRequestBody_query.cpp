

#include "huaweicloud/live/v1/model/ListCesInstanceRequestBody_query.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListCesInstanceRequestBody_query::ListCesInstanceRequestBody_query()
{
    dimName_ = "";
    dimNameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

ListCesInstanceRequestBody_query::~ListCesInstanceRequestBody_query() = default;

void ListCesInstanceRequestBody_query::validate()
{
}

web::json::value ListCesInstanceRequestBody_query::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dimNameIsSet_) {
        val[utility::conversions::to_string_t("dim_name")] = ModelBase::toJson(dimName_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool ListCesInstanceRequestBody_query::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dim_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dim_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDimName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string ListCesInstanceRequestBody_query::getDimName() const
{
    return dimName_;
}

void ListCesInstanceRequestBody_query::setDimName(const std::string& value)
{
    dimName_ = value;
    dimNameIsSet_ = true;
}

bool ListCesInstanceRequestBody_query::dimNameIsSet() const
{
    return dimNameIsSet_;
}

void ListCesInstanceRequestBody_query::unsetdimName()
{
    dimNameIsSet_ = false;
}

std::string ListCesInstanceRequestBody_query::getId() const
{
    return id_;
}

void ListCesInstanceRequestBody_query::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListCesInstanceRequestBody_query::idIsSet() const
{
    return idIsSet_;
}

void ListCesInstanceRequestBody_query::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


