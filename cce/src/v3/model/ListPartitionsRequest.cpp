

#include "huaweicloud/cce/v3/model/ListPartitionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListPartitionsRequest::ListPartitionsRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

ListPartitionsRequest::~ListPartitionsRequest() = default;

void ListPartitionsRequest::validate()
{
}

web::json::value ListPartitionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool ListPartitionsRequest::fromJson(const web::json::value& val)
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


std::string ListPartitionsRequest::getClusterId() const
{
    return clusterId_;
}

void ListPartitionsRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ListPartitionsRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ListPartitionsRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


