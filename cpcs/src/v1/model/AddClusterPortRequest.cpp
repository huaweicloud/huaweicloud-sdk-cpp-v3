

#include "huaweicloud/cpcs/v1/model/AddClusterPortRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




AddClusterPortRequest::AddClusterPortRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddClusterPortRequest::~AddClusterPortRequest() = default;

void AddClusterPortRequest::validate()
{
}

web::json::value AddClusterPortRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AddClusterPortRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateElbClusterPortRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddClusterPortRequest::getClusterId() const
{
    return clusterId_;
}

void AddClusterPortRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool AddClusterPortRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void AddClusterPortRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

CreateElbClusterPortRequestBody AddClusterPortRequest::getBody() const
{
    return body_;
}

void AddClusterPortRequest::setBody(const CreateElbClusterPortRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddClusterPortRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddClusterPortRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


