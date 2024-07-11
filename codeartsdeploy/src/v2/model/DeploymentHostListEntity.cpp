

#include "huaweicloud/codeartsdeploy/v2/model/DeploymentHostListEntity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DeploymentHostListEntity::DeploymentHostListEntity()
{
    hostIdListIsSet_ = false;
}

DeploymentHostListEntity::~DeploymentHostListEntity() = default;

void DeploymentHostListEntity::validate()
{
}

web::json::value DeploymentHostListEntity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hostIdListIsSet_) {
        val[utility::conversions::to_string_t("host_id_list")] = ModelBase::toJson(hostIdList_);
    }

    return val;
}
bool DeploymentHostListEntity::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("host_id_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_id_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostIdList(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& DeploymentHostListEntity::getHostIdList()
{
    return hostIdList_;
}

void DeploymentHostListEntity::setHostIdList(const std::vector<std::string>& value)
{
    hostIdList_ = value;
    hostIdListIsSet_ = true;
}

bool DeploymentHostListEntity::hostIdListIsSet() const
{
    return hostIdListIsSet_;
}

void DeploymentHostListEntity::unsethostIdList()
{
    hostIdListIsSet_ = false;
}

}
}
}
}
}


