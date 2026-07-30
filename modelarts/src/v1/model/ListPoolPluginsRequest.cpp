

#include "huaweicloud/modelarts/v1/model/ListPoolPluginsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListPoolPluginsRequest::ListPoolPluginsRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
}

ListPoolPluginsRequest::~ListPoolPluginsRequest() = default;

void ListPoolPluginsRequest::validate()
{
}

web::json::value ListPoolPluginsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(poolNameIsSet_) {
        val[utility::conversions::to_string_t("pool_name")] = ModelBase::toJson(poolName_);
    }

    return val;
}
bool ListPoolPluginsRequest::fromJson(const web::json::value& val)
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


std::string ListPoolPluginsRequest::getPoolName() const
{
    return poolName_;
}

void ListPoolPluginsRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool ListPoolPluginsRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void ListPoolPluginsRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

}
}
}
}
}


