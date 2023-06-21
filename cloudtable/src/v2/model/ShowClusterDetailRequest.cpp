

#include "huaweicloud/cloudtable/v2/model/ShowClusterDetailRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




ShowClusterDetailRequest::ShowClusterDetailRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

ShowClusterDetailRequest::~ShowClusterDetailRequest() = default;

void ShowClusterDetailRequest::validate()
{
}

web::json::value ShowClusterDetailRequest::toJson() const
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

bool ShowClusterDetailRequest::fromJson(const web::json::value& val)
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


std::string ShowClusterDetailRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowClusterDetailRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowClusterDetailRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowClusterDetailRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowClusterDetailRequest::getClusterId() const
{
    return clusterId_;
}

void ShowClusterDetailRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowClusterDetailRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowClusterDetailRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


