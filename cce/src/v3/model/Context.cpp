

#include "huaweicloud/cce/v3/model/Context.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




Context::Context()
{
    cluster_ = "";
    clusterIsSet_ = false;
    user_ = "";
    userIsSet_ = false;
}

Context::~Context() = default;

void Context::validate()
{
}

web::json::value Context::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIsSet_) {
        val[utility::conversions::to_string_t("cluster")] = ModelBase::toJson(cluster_);
    }
    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }

    return val;
}
bool Context::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cluster"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCluster(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUser(refVal);
        }
    }
    return ok;
}


std::string Context::getCluster() const
{
    return cluster_;
}

void Context::setCluster(const std::string& value)
{
    cluster_ = value;
    clusterIsSet_ = true;
}

bool Context::clusterIsSet() const
{
    return clusterIsSet_;
}

void Context::unsetcluster()
{
    clusterIsSet_ = false;
}

std::string Context::getUser() const
{
    return user_;
}

void Context::setUser(const std::string& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool Context::userIsSet() const
{
    return userIsSet_;
}

void Context::unsetuser()
{
    userIsSet_ = false;
}

}
}
}
}
}


