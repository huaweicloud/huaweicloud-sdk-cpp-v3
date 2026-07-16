

#include "huaweicloud/cce/v3/model/ListPodIdentityAssociationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListPodIdentityAssociationsRequest::ListPodIdentityAssociationsRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

ListPodIdentityAssociationsRequest::~ListPodIdentityAssociationsRequest() = default;

void ListPodIdentityAssociationsRequest::validate()
{
}

web::json::value ListPodIdentityAssociationsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool ListPodIdentityAssociationsRequest::fromJson(const web::json::value& val)
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


std::string ListPodIdentityAssociationsRequest::getClusterId() const
{
    return clusterId_;
}

void ListPodIdentityAssociationsRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ListPodIdentityAssociationsRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ListPodIdentityAssociationsRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


