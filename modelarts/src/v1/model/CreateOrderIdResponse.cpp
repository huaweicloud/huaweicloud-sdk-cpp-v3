

#include "huaweicloud/modelarts/v1/model/CreateOrderIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateOrderIdResponse::CreateOrderIdResponse()
{
    id_ = "";
    idIsSet_ = false;
}

CreateOrderIdResponse::~CreateOrderIdResponse() = default;

void CreateOrderIdResponse::validate()
{
}

web::json::value CreateOrderIdResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool CreateOrderIdResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CreateOrderIdResponse::getId() const
{
    return id_;
}

void CreateOrderIdResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateOrderIdResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateOrderIdResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


