

#include "huaweicloud/modelarts/v1/model/SwitchInferDeploymentVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




SwitchInferDeploymentVersionResponse::SwitchInferDeploymentVersionResponse()
{
    id_ = "";
    idIsSet_ = false;
}

SwitchInferDeploymentVersionResponse::~SwitchInferDeploymentVersionResponse() = default;

void SwitchInferDeploymentVersionResponse::validate()
{
}

web::json::value SwitchInferDeploymentVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool SwitchInferDeploymentVersionResponse::fromJson(const web::json::value& val)
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


std::string SwitchInferDeploymentVersionResponse::getId() const
{
    return id_;
}

void SwitchInferDeploymentVersionResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SwitchInferDeploymentVersionResponse::idIsSet() const
{
    return idIsSet_;
}

void SwitchInferDeploymentVersionResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


