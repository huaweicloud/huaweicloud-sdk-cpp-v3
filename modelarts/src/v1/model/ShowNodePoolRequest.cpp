

#include "huaweicloud/modelarts/v1/model/ShowNodePoolRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowNodePoolRequest::ShowNodePoolRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
    nodepoolName_ = "";
    nodepoolNameIsSet_ = false;
    continue_ = "";
    continueIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
}

ShowNodePoolRequest::~ShowNodePoolRequest() = default;

void ShowNodePoolRequest::validate()
{
}

web::json::value ShowNodePoolRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(poolNameIsSet_) {
        val[utility::conversions::to_string_t("pool_name")] = ModelBase::toJson(poolName_);
    }
    if(nodepoolNameIsSet_) {
        val[utility::conversions::to_string_t("nodepool_name")] = ModelBase::toJson(nodepoolName_);
    }
    if(continueIsSet_) {
        val[utility::conversions::to_string_t("continue")] = ModelBase::toJson(continue_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ShowNodePoolRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("continue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("continue"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContinue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ShowNodePoolRequest::getPoolName() const
{
    return poolName_;
}

void ShowNodePoolRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool ShowNodePoolRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void ShowNodePoolRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

std::string ShowNodePoolRequest::getNodepoolName() const
{
    return nodepoolName_;
}

void ShowNodePoolRequest::setNodepoolName(const std::string& value)
{
    nodepoolName_ = value;
    nodepoolNameIsSet_ = true;
}

bool ShowNodePoolRequest::nodepoolNameIsSet() const
{
    return nodepoolNameIsSet_;
}

void ShowNodePoolRequest::unsetnodepoolName()
{
    nodepoolNameIsSet_ = false;
}

std::string ShowNodePoolRequest::getContinue() const
{
    return continue_;
}

void ShowNodePoolRequest::setContinue(const std::string& value)
{
    continue_ = value;
    continueIsSet_ = true;
}

bool ShowNodePoolRequest::continueIsSet() const
{
    return continueIsSet_;
}

void ShowNodePoolRequest::unsetcontinue()
{
    continueIsSet_ = false;
}

std::string ShowNodePoolRequest::getLimit() const
{
    return limit_;
}

void ShowNodePoolRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowNodePoolRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowNodePoolRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


