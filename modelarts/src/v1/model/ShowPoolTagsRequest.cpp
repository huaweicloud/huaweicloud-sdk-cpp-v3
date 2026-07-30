

#include "huaweicloud/modelarts/v1/model/ShowPoolTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowPoolTagsRequest::ShowPoolTagsRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
}

ShowPoolTagsRequest::~ShowPoolTagsRequest() = default;

void ShowPoolTagsRequest::validate()
{
}

web::json::value ShowPoolTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(poolNameIsSet_) {
        val[utility::conversions::to_string_t("pool_name")] = ModelBase::toJson(poolName_);
    }

    return val;
}
bool ShowPoolTagsRequest::fromJson(const web::json::value& val)
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


std::string ShowPoolTagsRequest::getPoolName() const
{
    return poolName_;
}

void ShowPoolTagsRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool ShowPoolTagsRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void ShowPoolTagsRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

}
}
}
}
}


