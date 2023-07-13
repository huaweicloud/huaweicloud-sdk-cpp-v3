

#include "huaweicloud/cloudtable/v2/model/RebootCloudTableClusterRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




RebootCloudTableClusterRequest::RebootCloudTableClusterRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

RebootCloudTableClusterRequest::~RebootCloudTableClusterRequest() = default;

void RebootCloudTableClusterRequest::validate()
{
}

web::json::value RebootCloudTableClusterRequest::toJson() const
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

bool RebootCloudTableClusterRequest::fromJson(const web::json::value& val)
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
            HbaseClusterActionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string RebootCloudTableClusterRequest::getClusterId() const
{
    return clusterId_;
}

void RebootCloudTableClusterRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool RebootCloudTableClusterRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void RebootCloudTableClusterRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string RebootCloudTableClusterRequest::getXLanguage() const
{
    return xLanguage_;
}

void RebootCloudTableClusterRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool RebootCloudTableClusterRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void RebootCloudTableClusterRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

HbaseClusterActionReq RebootCloudTableClusterRequest::getBody() const
{
    return body_;
}

void RebootCloudTableClusterRequest::setBody(const HbaseClusterActionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RebootCloudTableClusterRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RebootCloudTableClusterRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


