

#include "huaweicloud/modelarts/v1/model/DeleteInferDeploymentInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteInferDeploymentInstanceResponse::DeleteInferDeploymentInstanceResponse()
{
    instanceName_ = "";
    instanceNameIsSet_ = false;
}

DeleteInferDeploymentInstanceResponse::~DeleteInferDeploymentInstanceResponse() = default;

void DeleteInferDeploymentInstanceResponse::validate()
{
}

web::json::value DeleteInferDeploymentInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }

    return val;
}
bool DeleteInferDeploymentInstanceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    return ok;
}


std::string DeleteInferDeploymentInstanceResponse::getInstanceName() const
{
    return instanceName_;
}

void DeleteInferDeploymentInstanceResponse::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool DeleteInferDeploymentInstanceResponse::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void DeleteInferDeploymentInstanceResponse::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

}
}
}
}
}


