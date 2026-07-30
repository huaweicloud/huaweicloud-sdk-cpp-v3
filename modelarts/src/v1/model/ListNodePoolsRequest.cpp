

#include "huaweicloud/modelarts/v1/model/ListNodePoolsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListNodePoolsRequest::ListNodePoolsRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
}

ListNodePoolsRequest::~ListNodePoolsRequest() = default;

void ListNodePoolsRequest::validate()
{
}

web::json::value ListNodePoolsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(poolNameIsSet_) {
        val[utility::conversions::to_string_t("pool_name")] = ModelBase::toJson(poolName_);
    }

    return val;
}
bool ListNodePoolsRequest::fromJson(const web::json::value& val)
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


std::string ListNodePoolsRequest::getPoolName() const
{
    return poolName_;
}

void ListNodePoolsRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool ListNodePoolsRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void ListNodePoolsRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

}
}
}
}
}


