

#include "huaweicloud/cce/v3/model/CreateReleaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateReleaseRequest::CreateReleaseRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateReleaseRequest::~CreateReleaseRequest() = default;

void CreateReleaseRequest::validate()
{
}

web::json::value CreateReleaseRequest::toJson() const
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
bool CreateReleaseRequest::fromJson(const web::json::value& val)
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
            CreateReleaseReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateReleaseRequest::getClusterId() const
{
    return clusterId_;
}

void CreateReleaseRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CreateReleaseRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CreateReleaseRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

CreateReleaseReqBody CreateReleaseRequest::getBody() const
{
    return body_;
}

void CreateReleaseRequest::setBody(const CreateReleaseReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateReleaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateReleaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


