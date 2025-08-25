

#include "huaweicloud/cce/v3/model/ListPreCheckTasksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListPreCheckTasksRequest::ListPreCheckTasksRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

ListPreCheckTasksRequest::~ListPreCheckTasksRequest() = default;

void ListPreCheckTasksRequest::validate()
{
}

web::json::value ListPreCheckTasksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool ListPreCheckTasksRequest::fromJson(const web::json::value& val)
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


std::string ListPreCheckTasksRequest::getClusterId() const
{
    return clusterId_;
}

void ListPreCheckTasksRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ListPreCheckTasksRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ListPreCheckTasksRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


