

#include "huaweicloud/functiongraph/v2/model/CreateEventResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CreateEventResponse::CreateEventResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

CreateEventResponse::~CreateEventResponse() = default;

void CreateEventResponse::validate()
{
}

web::json::value CreateEventResponse::toJson() const
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
bool CreateEventResponse::fromJson(const web::json::value& val)
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


std::string CreateEventResponse::getId() const
{
    return id_;
}

void CreateEventResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateEventResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateEventResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CreateEventResponse::getName() const
{
    return name_;
}

void CreateEventResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateEventResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateEventResponse::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


