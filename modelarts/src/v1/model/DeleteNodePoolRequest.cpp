

#include "huaweicloud/modelarts/v1/model/DeleteNodePoolRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteNodePoolRequest::DeleteNodePoolRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
    nodepoolName_ = "";
    nodepoolNameIsSet_ = false;
}

DeleteNodePoolRequest::~DeleteNodePoolRequest() = default;

void DeleteNodePoolRequest::validate()
{
}

web::json::value DeleteNodePoolRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(poolNameIsSet_) {
        val[utility::conversions::to_string_t("pool_name")] = ModelBase::toJson(poolName_);
    }
    if(nodepoolNameIsSet_) {
        val[utility::conversions::to_string_t("nodepool_name")] = ModelBase::toJson(nodepoolName_);
    }

    return val;
}
bool DeleteNodePoolRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("nodepool_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodepool_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodepoolName(refVal);
        }
    }
    return ok;
}


std::string DeleteNodePoolRequest::getPoolName() const
{
    return poolName_;
}

void DeleteNodePoolRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool DeleteNodePoolRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void DeleteNodePoolRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

std::string DeleteNodePoolRequest::getNodepoolName() const
{
    return nodepoolName_;
}

void DeleteNodePoolRequest::setNodepoolName(const std::string& value)
{
    nodepoolName_ = value;
    nodepoolNameIsSet_ = true;
}

bool DeleteNodePoolRequest::nodepoolNameIsSet() const
{
    return nodepoolNameIsSet_;
}

void DeleteNodePoolRequest::unsetnodepoolName()
{
    nodepoolNameIsSet_ = false;
}

}
}
}
}
}


