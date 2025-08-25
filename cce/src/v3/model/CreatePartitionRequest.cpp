

#include "huaweicloud/cce/v3/model/CreatePartitionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreatePartitionRequest::CreatePartitionRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreatePartitionRequest::~CreatePartitionRequest() = default;

void CreatePartitionRequest::validate()
{
}

web::json::value CreatePartitionRequest::toJson() const
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
bool CreatePartitionRequest::fromJson(const web::json::value& val)
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
            PartitionReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreatePartitionRequest::getClusterId() const
{
    return clusterId_;
}

void CreatePartitionRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CreatePartitionRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CreatePartitionRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

PartitionReqBody CreatePartitionRequest::getBody() const
{
    return body_;
}

void CreatePartitionRequest::setBody(const PartitionReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePartitionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePartitionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


