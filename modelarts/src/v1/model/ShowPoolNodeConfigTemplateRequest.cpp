

#include "huaweicloud/modelarts/v1/model/ShowPoolNodeConfigTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowPoolNodeConfigTemplateRequest::ShowPoolNodeConfigTemplateRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
}

ShowPoolNodeConfigTemplateRequest::~ShowPoolNodeConfigTemplateRequest() = default;

void ShowPoolNodeConfigTemplateRequest::validate()
{
}

web::json::value ShowPoolNodeConfigTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(poolNameIsSet_) {
        val[utility::conversions::to_string_t("pool_name")] = ModelBase::toJson(poolName_);
    }

    return val;
}
bool ShowPoolNodeConfigTemplateRequest::fromJson(const web::json::value& val)
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


std::string ShowPoolNodeConfigTemplateRequest::getPoolName() const
{
    return poolName_;
}

void ShowPoolNodeConfigTemplateRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool ShowPoolNodeConfigTemplateRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void ShowPoolNodeConfigTemplateRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

}
}
}
}
}


