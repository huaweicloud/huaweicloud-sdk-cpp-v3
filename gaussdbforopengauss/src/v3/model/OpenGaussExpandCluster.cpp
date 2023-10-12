

#include "huaweicloud/gaussdbforopengauss/v3/model/OpenGaussExpandCluster.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




OpenGaussExpandCluster::OpenGaussExpandCluster()
{
    coordinatorsIsSet_ = false;
    shardIsSet_ = false;
}

OpenGaussExpandCluster::~OpenGaussExpandCluster() = default;

void OpenGaussExpandCluster::validate()
{
}

web::json::value OpenGaussExpandCluster::toJson() const
{
    web::json::value val = web::json::value::object();

    if(coordinatorsIsSet_) {
        val[utility::conversions::to_string_t("coordinators")] = ModelBase::toJson(coordinators_);
    }
    if(shardIsSet_) {
        val[utility::conversions::to_string_t("shard")] = ModelBase::toJson(shard_);
    }

    return val;
}
bool OpenGaussExpandCluster::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("coordinators"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("coordinators"));
        if(!fieldValue.is_null())
        {
            std::vector<OpenGaussCoordinators> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoordinators(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shard"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shard"));
        if(!fieldValue.is_null())
        {
            OpenGaussShard refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShard(refVal);
        }
    }
    return ok;
}


std::vector<OpenGaussCoordinators>& OpenGaussExpandCluster::getCoordinators()
{
    return coordinators_;
}

void OpenGaussExpandCluster::setCoordinators(const std::vector<OpenGaussCoordinators>& value)
{
    coordinators_ = value;
    coordinatorsIsSet_ = true;
}

bool OpenGaussExpandCluster::coordinatorsIsSet() const
{
    return coordinatorsIsSet_;
}

void OpenGaussExpandCluster::unsetcoordinators()
{
    coordinatorsIsSet_ = false;
}

OpenGaussShard OpenGaussExpandCluster::getShard() const
{
    return shard_;
}

void OpenGaussExpandCluster::setShard(const OpenGaussShard& value)
{
    shard_ = value;
    shardIsSet_ = true;
}

bool OpenGaussExpandCluster::shardIsSet() const
{
    return shardIsSet_;
}

void OpenGaussExpandCluster::unsetshard()
{
    shardIsSet_ = false;
}

}
}
}
}
}


