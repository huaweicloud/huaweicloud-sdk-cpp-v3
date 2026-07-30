

#include "huaweicloud/modelarts/v1/model/PoolStatus_clusters_plugins.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolStatus_clusters_plugins::PoolStatus_clusters_plugins()
{
    name_ = "";
    nameIsSet_ = false;
}

PoolStatus_clusters_plugins::~PoolStatus_clusters_plugins() = default;

void PoolStatus_clusters_plugins::validate()
{
}

web::json::value PoolStatus_clusters_plugins::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool PoolStatus_clusters_plugins::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string PoolStatus_clusters_plugins::getName() const
{
    return name_;
}

void PoolStatus_clusters_plugins::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PoolStatus_clusters_plugins::nameIsSet() const
{
    return nameIsSet_;
}

void PoolStatus_clusters_plugins::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


