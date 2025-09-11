

#include "huaweicloud/functiongraph/v2/model/UpdateEventResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateEventResponse::UpdateEventResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

UpdateEventResponse::~UpdateEventResponse() = default;

void UpdateEventResponse::validate()
{
}

web::json::value UpdateEventResponse::toJson() const
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
bool UpdateEventResponse::fromJson(const web::json::value& val)
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


std::string UpdateEventResponse::getId() const
{
    return id_;
}

void UpdateEventResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateEventResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateEventResponse::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateEventResponse::getName() const
{
    return name_;
}

void UpdateEventResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateEventResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateEventResponse::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


