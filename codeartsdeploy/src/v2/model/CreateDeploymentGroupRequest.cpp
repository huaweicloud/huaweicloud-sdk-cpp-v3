

#include "huaweicloud/codeartsdeploy/v2/model/CreateDeploymentGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CreateDeploymentGroupRequest::CreateDeploymentGroupRequest()
{
    bodyIsSet_ = false;
}

CreateDeploymentGroupRequest::~CreateDeploymentGroupRequest() = default;

void CreateDeploymentGroupRequest::validate()
{
}

web::json::value CreateDeploymentGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateDeploymentGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeploymentGroup refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

DeploymentGroup CreateDeploymentGroupRequest::getBody() const
{
    return body_;
}

void CreateDeploymentGroupRequest::setBody(const DeploymentGroup& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDeploymentGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDeploymentGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


