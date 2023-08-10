

#include "huaweicloud/codeartsdeploy/v2/model/CreateDeploymentHostResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CreateDeploymentHostResponse::CreateDeploymentHostResponse()
{
    hostId_ = "";
    hostIdIsSet_ = false;
}

CreateDeploymentHostResponse::~CreateDeploymentHostResponse() = default;

void CreateDeploymentHostResponse::validate()
{
}

web::json::value CreateDeploymentHostResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hostIdIsSet_) {
        val[utility::conversions::to_string_t("host_id")] = ModelBase::toJson(hostId_);
    }

    return val;
}

bool CreateDeploymentHostResponse::fromJson(const web::json::value& val)
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

std::string CreateDeploymentHostResponse::getHostId() const
{
    return hostId_;
}

void CreateDeploymentHostResponse::setHostId(const std::string& value)
{
    hostId_ = value;
    hostIdIsSet_ = true;
}

bool CreateDeploymentHostResponse::hostIdIsSet() const
{
    return hostIdIsSet_;
}

void CreateDeploymentHostResponse::unsethostId()
{
    hostIdIsSet_ = false;
}

}
}
}
}
}


