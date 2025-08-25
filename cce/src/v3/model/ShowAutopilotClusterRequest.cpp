

#include "huaweicloud/cce/v3/model/ShowAutopilotClusterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowAutopilotClusterRequest::ShowAutopilotClusterRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    errorStatus_ = "";
    errorStatusIsSet_ = false;
    detail_ = "";
    detailIsSet_ = false;
}

ShowAutopilotClusterRequest::~ShowAutopilotClusterRequest() = default;

void ShowAutopilotClusterRequest::validate()
{
}

web::json::value ShowAutopilotClusterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(errorStatusIsSet_) {
        val[utility::conversions::to_string_t("errorStatus")] = ModelBase::toJson(errorStatus_);
    }
    if(detailIsSet_) {
        val[utility::conversions::to_string_t("detail")] = ModelBase::toJson(detail_);
    }

    return val;
}
bool ShowAutopilotClusterRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetail(refVal);
        }
    }
    return ok;
}


std::string ShowAutopilotClusterRequest::getClusterId() const
{
    return clusterId_;
}

void ShowAutopilotClusterRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowAutopilotClusterRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowAutopilotClusterRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ShowAutopilotClusterRequest::getErrorStatus() const
{
    return errorStatus_;
}

void ShowAutopilotClusterRequest::setErrorStatus(const std::string& value)
{
    errorStatus_ = value;
    errorStatusIsSet_ = true;
}

bool ShowAutopilotClusterRequest::errorStatusIsSet() const
{
    return errorStatusIsSet_;
}

void ShowAutopilotClusterRequest::unseterrorStatus()
{
    errorStatusIsSet_ = false;
}

std::string ShowAutopilotClusterRequest::getDetail() const
{
    return detail_;
}

void ShowAutopilotClusterRequest::setDetail(const std::string& value)
{
    detail_ = value;
    detailIsSet_ = true;
}

bool ShowAutopilotClusterRequest::detailIsSet() const
{
    return detailIsSet_;
}

void ShowAutopilotClusterRequest::unsetdetail()
{
    detailIsSet_ = false;
}

}
}
}
}
}


