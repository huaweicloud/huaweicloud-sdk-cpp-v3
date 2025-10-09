

#include "huaweicloud/cce/v3/model/ListAccessPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListAccessPolicyRequest::ListAccessPolicyRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

ListAccessPolicyRequest::~ListAccessPolicyRequest() = default;

void ListAccessPolicyRequest::validate()
{
}

web::json::value ListAccessPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool ListAccessPolicyRequest::fromJson(const web::json::value& val)
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


std::string ListAccessPolicyRequest::getClusterId() const
{
    return clusterId_;
}

void ListAccessPolicyRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ListAccessPolicyRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ListAccessPolicyRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


