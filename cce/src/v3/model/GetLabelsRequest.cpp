

#include "huaweicloud/cce/v3/model/GetLabelsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




GetLabelsRequest::GetLabelsRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

GetLabelsRequest::~GetLabelsRequest() = default;

void GetLabelsRequest::validate()
{
}

web::json::value GetLabelsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool GetLabelsRequest::fromJson(const web::json::value& val)
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


std::string GetLabelsRequest::getClusterId() const
{
    return clusterId_;
}

void GetLabelsRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool GetLabelsRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void GetLabelsRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


