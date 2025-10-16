

#include "huaweicloud/cpcs/v1/model/AuthObject_scope.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




AuthObject_scope::AuthObject_scope()
{
    clusterIsSet_ = false;
}

AuthObject_scope::~AuthObject_scope() = default;

void AuthObject_scope::validate()
{
}

web::json::value AuthObject_scope::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIsSet_) {
        val[utility::conversions::to_string_t("cluster")] = ModelBase::toJson(cluster_);
    }

    return val;
}
bool AuthObject_scope::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cluster"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster"));
        if(!fieldValue.is_null())
        {
            AuthObject_scope_cluster refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCluster(refVal);
        }
    }
    return ok;
}


AuthObject_scope_cluster AuthObject_scope::getCluster() const
{
    return cluster_;
}

void AuthObject_scope::setCluster(const AuthObject_scope_cluster& value)
{
    cluster_ = value;
    clusterIsSet_ = true;
}

bool AuthObject_scope::clusterIsSet() const
{
    return clusterIsSet_;
}

void AuthObject_scope::unsetcluster()
{
    clusterIsSet_ = false;
}

}
}
}
}
}


