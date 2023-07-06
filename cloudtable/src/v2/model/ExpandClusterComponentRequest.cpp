

#include "huaweicloud/cloudtable/v2/model/ExpandClusterComponentRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




ExpandClusterComponentRequest::ExpandClusterComponentRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ExpandClusterComponentRequest::~ExpandClusterComponentRequest() = default;

void ExpandClusterComponentRequest::validate()
{
}

web::json::value ExpandClusterComponentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ExpandClusterComponentRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            GrowNodeReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ExpandClusterComponentRequest::getClusterId() const
{
    return clusterId_;
}

void ExpandClusterComponentRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ExpandClusterComponentRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ExpandClusterComponentRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ExpandClusterComponentRequest::getXLanguage() const
{
    return xLanguage_;
}

void ExpandClusterComponentRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ExpandClusterComponentRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ExpandClusterComponentRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

GrowNodeReq ExpandClusterComponentRequest::getBody() const
{
    return body_;
}

void ExpandClusterComponentRequest::setBody(const GrowNodeReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExpandClusterComponentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExpandClusterComponentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


