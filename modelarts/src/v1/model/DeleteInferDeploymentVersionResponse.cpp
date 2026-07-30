

#include "huaweicloud/modelarts/v1/model/DeleteInferDeploymentVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteInferDeploymentVersionResponse::DeleteInferDeploymentVersionResponse()
{
    id_ = "";
    idIsSet_ = false;
}

DeleteInferDeploymentVersionResponse::~DeleteInferDeploymentVersionResponse() = default;

void DeleteInferDeploymentVersionResponse::validate()
{
}

web::json::value DeleteInferDeploymentVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DeleteInferDeploymentVersionResponse::fromJson(const web::json::value& val)
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


std::string DeleteInferDeploymentVersionResponse::getId() const
{
    return id_;
}

void DeleteInferDeploymentVersionResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteInferDeploymentVersionResponse::idIsSet() const
{
    return idIsSet_;
}

void DeleteInferDeploymentVersionResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


