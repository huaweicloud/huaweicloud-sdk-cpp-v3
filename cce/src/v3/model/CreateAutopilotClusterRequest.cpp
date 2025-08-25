

#include "huaweicloud/cce/v3/model/CreateAutopilotClusterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateAutopilotClusterRequest::CreateAutopilotClusterRequest()
{
    bodyIsSet_ = false;
}

CreateAutopilotClusterRequest::~CreateAutopilotClusterRequest() = default;

void CreateAutopilotClusterRequest::validate()
{
}

web::json::value CreateAutopilotClusterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateAutopilotClusterRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AutopilotCluster refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


AutopilotCluster CreateAutopilotClusterRequest::getBody() const
{
    return body_;
}

void CreateAutopilotClusterRequest::setBody(const AutopilotCluster& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAutopilotClusterRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAutopilotClusterRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


