

#include "huaweicloud/cloudtable/v2/model/DeleteClusterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




DeleteClusterRequest::DeleteClusterRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

DeleteClusterRequest::~DeleteClusterRequest() = default;

void DeleteClusterRequest::validate()
{
}

web::json::value DeleteClusterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool DeleteClusterRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
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


std::string DeleteClusterRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteClusterRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteClusterRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteClusterRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteClusterRequest::getClusterId() const
{
    return clusterId_;
}

void DeleteClusterRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool DeleteClusterRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void DeleteClusterRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


