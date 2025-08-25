

#include "huaweicloud/cce/v3/model/AddNodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AddNodeRequest::AddNodeRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddNodeRequest::~AddNodeRequest() = default;

void AddNodeRequest::validate()
{
}

web::json::value AddNodeRequest::toJson() const
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
bool AddNodeRequest::fromJson(const web::json::value& val)
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
            AddNodeList refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddNodeRequest::getClusterId() const
{
    return clusterId_;
}

void AddNodeRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool AddNodeRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void AddNodeRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

AddNodeList AddNodeRequest::getBody() const
{
    return body_;
}

void AddNodeRequest::setBody(const AddNodeList& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddNodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddNodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


