

#include "huaweicloud/modelarts/v1/model/DeleteHyperinstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteHyperinstanceRequest::DeleteHyperinstanceRequest()
{
    id_ = "";
    idIsSet_ = false;
}

DeleteHyperinstanceRequest::~DeleteHyperinstanceRequest() = default;

void DeleteHyperinstanceRequest::validate()
{
}

web::json::value DeleteHyperinstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DeleteHyperinstanceRequest::fromJson(const web::json::value& val)
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


std::string DeleteHyperinstanceRequest::getId() const
{
    return id_;
}

void DeleteHyperinstanceRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteHyperinstanceRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteHyperinstanceRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


