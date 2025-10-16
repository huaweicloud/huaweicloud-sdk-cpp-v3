

#include "huaweicloud/cpcs/v1/model/ListClusterPortRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ListClusterPortRequest::ListClusterPortRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

ListClusterPortRequest::~ListClusterPortRequest() = default;

void ListClusterPortRequest::validate()
{
}

web::json::value ListClusterPortRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool ListClusterPortRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListClusterPortRequest::getClusterId() const
{
    return clusterId_;
}

void ListClusterPortRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ListClusterPortRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ListClusterPortRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


