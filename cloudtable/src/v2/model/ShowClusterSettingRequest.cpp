

#include "huaweicloud/cloudtable/v2/model/ShowClusterSettingRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




ShowClusterSettingRequest::ShowClusterSettingRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowClusterSettingRequest::~ShowClusterSettingRequest() = default;

void ShowClusterSettingRequest::validate()
{
}

web::json::value ShowClusterSettingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("projectId")] = ModelBase::toJson(projectId_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("clusterId")] = ModelBase::toJson(clusterId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}

bool ShowClusterSettingRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("projectId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projectId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clusterId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusterId"));
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
    return ok;
}


std::string ShowClusterSettingRequest::getProjectId() const
{
    return projectId_;
}

void ShowClusterSettingRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowClusterSettingRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowClusterSettingRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowClusterSettingRequest::getClusterId() const
{
    return clusterId_;
}

void ShowClusterSettingRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowClusterSettingRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowClusterSettingRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ShowClusterSettingRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowClusterSettingRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowClusterSettingRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowClusterSettingRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


