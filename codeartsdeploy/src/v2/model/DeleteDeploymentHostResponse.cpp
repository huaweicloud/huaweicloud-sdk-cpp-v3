

#include "huaweicloud/codeartsdeploy/v2/model/DeleteDeploymentHostResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DeleteDeploymentHostResponse::DeleteDeploymentHostResponse()
{
    hostId_ = "";
    hostIdIsSet_ = false;
}

DeleteDeploymentHostResponse::~DeleteDeploymentHostResponse() = default;

void DeleteDeploymentHostResponse::validate()
{
}

web::json::value DeleteDeploymentHostResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hostIdIsSet_) {
        val[utility::conversions::to_string_t("host_id")] = ModelBase::toJson(hostId_);
    }

    return val;
}
bool DeleteDeploymentHostResponse::fromJson(const web::json::value& val)
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


std::string DeleteDeploymentHostResponse::getHostId() const
{
    return hostId_;
}

void DeleteDeploymentHostResponse::setHostId(const std::string& value)
{
    hostId_ = value;
    hostIdIsSet_ = true;
}

bool DeleteDeploymentHostResponse::hostIdIsSet() const
{
    return hostIdIsSet_;
}

void DeleteDeploymentHostResponse::unsethostId()
{
    hostIdIsSet_ = false;
}

}
}
}
}
}


