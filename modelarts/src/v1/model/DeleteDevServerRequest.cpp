

#include "huaweicloud/modelarts/v1/model/DeleteDevServerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteDevServerRequest::DeleteDevServerRequest()
{
    id_ = "";
    idIsSet_ = false;
}

DeleteDevServerRequest::~DeleteDevServerRequest() = default;

void DeleteDevServerRequest::validate()
{
}

web::json::value DeleteDevServerRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DeleteDevServerRequest::fromJson(const web::json::value& val)
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


std::string DeleteDevServerRequest::getId() const
{
    return id_;
}

void DeleteDevServerRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteDevServerRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteDevServerRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


