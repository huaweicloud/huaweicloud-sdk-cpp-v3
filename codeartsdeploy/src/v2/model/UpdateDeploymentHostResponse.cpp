

#include "huaweicloud/codeartsdeploy/v2/model/UpdateDeploymentHostResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




UpdateDeploymentHostResponse::UpdateDeploymentHostResponse()
{
    hostId_ = "";
    hostIdIsSet_ = false;
}

UpdateDeploymentHostResponse::~UpdateDeploymentHostResponse() = default;

void UpdateDeploymentHostResponse::validate()
{
}

web::json::value UpdateDeploymentHostResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hostIdIsSet_) {
        val[utility::conversions::to_string_t("host_id")] = ModelBase::toJson(hostId_);
    }

    return val;
}

bool UpdateDeploymentHostResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("host_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostId(refVal);
        }
    }
    return ok;
}

std::string UpdateDeploymentHostResponse::getHostId() const
{
    return hostId_;
}

void UpdateDeploymentHostResponse::setHostId(const std::string& value)
{
    hostId_ = value;
    hostIdIsSet_ = true;
}

bool UpdateDeploymentHostResponse::hostIdIsSet() const
{
    return hostIdIsSet_;
}

void UpdateDeploymentHostResponse::unsethostId()
{
    hostIdIsSet_ = false;
}

}
}
}
}
}


