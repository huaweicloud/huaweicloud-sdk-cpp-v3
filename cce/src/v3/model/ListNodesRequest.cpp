

#include "huaweicloud/cce/v3/model/ListNodesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListNodesRequest::ListNodesRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    errorStatus_ = "";
    errorStatusIsSet_ = false;
}

ListNodesRequest::~ListNodesRequest() = default;

void ListNodesRequest::validate()
{
}

web::json::value ListNodesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(errorStatusIsSet_) {
        val[utility::conversions::to_string_t("errorStatus")] = ModelBase::toJson(errorStatus_);
    }

    return val;
}
bool ListNodesRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListNodesRequest::getClusterId() const
{
    return clusterId_;
}

void ListNodesRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ListNodesRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ListNodesRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ListNodesRequest::getErrorStatus() const
{
    return errorStatus_;
}

void ListNodesRequest::setErrorStatus(const std::string& value)
{
    errorStatus_ = value;
    errorStatusIsSet_ = true;
}

bool ListNodesRequest::errorStatusIsSet() const
{
    return errorStatusIsSet_;
}

void ListNodesRequest::unseterrorStatus()
{
    errorStatusIsSet_ = false;
}

}
}
}
}
}


