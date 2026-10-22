

#include "huaweicloud/modelarts/v1/model/DeleteHyperinstanceGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteHyperinstanceGroupRequest::DeleteHyperinstanceGroupRequest()
{
    id_ = "";
    idIsSet_ = false;
}

DeleteHyperinstanceGroupRequest::~DeleteHyperinstanceGroupRequest() = default;

void DeleteHyperinstanceGroupRequest::validate()
{
}

web::json::value DeleteHyperinstanceGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DeleteHyperinstanceGroupRequest::fromJson(const web::json::value& val)
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


std::string DeleteHyperinstanceGroupRequest::getId() const
{
    return id_;
}

void DeleteHyperinstanceGroupRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteHyperinstanceGroupRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteHyperinstanceGroupRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


