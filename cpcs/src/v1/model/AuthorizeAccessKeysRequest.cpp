

#include "huaweicloud/cpcs/v1/model/AuthorizeAccessKeysRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




AuthorizeAccessKeysRequest::AuthorizeAccessKeysRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

AuthorizeAccessKeysRequest::~AuthorizeAccessKeysRequest() = default;

void AuthorizeAccessKeysRequest::validate()
{
}

web::json::value AuthorizeAccessKeysRequest::toJson() const
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
bool AuthorizeAccessKeysRequest::fromJson(const web::json::value& val)
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
            AuthorizeAccessKeysRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AuthorizeAccessKeysRequest::getClusterId() const
{
    return clusterId_;
}

void AuthorizeAccessKeysRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool AuthorizeAccessKeysRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void AuthorizeAccessKeysRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

AuthorizeAccessKeysRequestBody AuthorizeAccessKeysRequest::getBody() const
{
    return body_;
}

void AuthorizeAccessKeysRequest::setBody(const AuthorizeAccessKeysRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AuthorizeAccessKeysRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AuthorizeAccessKeysRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


