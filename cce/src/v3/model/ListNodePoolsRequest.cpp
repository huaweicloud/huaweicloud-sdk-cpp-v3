

#include "huaweicloud/cce/v3/model/ListNodePoolsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListNodePoolsRequest::ListNodePoolsRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    errorStatus_ = "";
    errorStatusIsSet_ = false;
    showDefaultNodePool_ = "";
    showDefaultNodePoolIsSet_ = false;
}

ListNodePoolsRequest::~ListNodePoolsRequest() = default;

void ListNodePoolsRequest::validate()
{
}

web::json::value ListNodePoolsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(errorStatusIsSet_) {
        val[utility::conversions::to_string_t("errorStatus")] = ModelBase::toJson(errorStatus_);
    }
    if(showDefaultNodePoolIsSet_) {
        val[utility::conversions::to_string_t("showDefaultNodePool")] = ModelBase::toJson(showDefaultNodePool_);
    }

    return val;
}
bool ListNodePoolsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("errorStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("errorStatus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("showDefaultNodePool"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("showDefaultNodePool"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShowDefaultNodePool(refVal);
        }
    }
    return ok;
}


std::string ListNodePoolsRequest::getClusterId() const
{
    return clusterId_;
}

void ListNodePoolsRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ListNodePoolsRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ListNodePoolsRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ListNodePoolsRequest::getErrorStatus() const
{
    return errorStatus_;
}

void ListNodePoolsRequest::setErrorStatus(const std::string& value)
{
    errorStatus_ = value;
    errorStatusIsSet_ = true;
}

bool ListNodePoolsRequest::errorStatusIsSet() const
{
    return errorStatusIsSet_;
}

void ListNodePoolsRequest::unseterrorStatus()
{
    errorStatusIsSet_ = false;
}

std::string ListNodePoolsRequest::getShowDefaultNodePool() const
{
    return showDefaultNodePool_;
}

void ListNodePoolsRequest::setShowDefaultNodePool(const std::string& value)
{
    showDefaultNodePool_ = value;
    showDefaultNodePoolIsSet_ = true;
}

bool ListNodePoolsRequest::showDefaultNodePoolIsSet() const
{
    return showDefaultNodePoolIsSet_;
}

void ListNodePoolsRequest::unsetshowDefaultNodePool()
{
    showDefaultNodePoolIsSet_ = false;
}

}
}
}
}
}


