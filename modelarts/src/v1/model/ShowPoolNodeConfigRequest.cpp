

#include "huaweicloud/modelarts/v1/model/ShowPoolNodeConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowPoolNodeConfigRequest::ShowPoolNodeConfigRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
}

ShowPoolNodeConfigRequest::~ShowPoolNodeConfigRequest() = default;

void ShowPoolNodeConfigRequest::validate()
{
}

web::json::value ShowPoolNodeConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(poolNameIsSet_) {
        val[utility::conversions::to_string_t("pool_name")] = ModelBase::toJson(poolName_);
    }

    return val;
}
bool ShowPoolNodeConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pool_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolName(refVal);
        }
    }
    return ok;
}


std::string ShowPoolNodeConfigRequest::getPoolName() const
{
    return poolName_;
}

void ShowPoolNodeConfigRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool ShowPoolNodeConfigRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void ShowPoolNodeConfigRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

}
}
}
}
}


