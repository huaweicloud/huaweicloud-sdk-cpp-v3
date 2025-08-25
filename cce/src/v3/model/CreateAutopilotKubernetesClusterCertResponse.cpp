

#include "huaweicloud/cce/v3/model/CreateAutopilotKubernetesClusterCertResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateAutopilotKubernetesClusterCertResponse::CreateAutopilotKubernetesClusterCertResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    preferencesIsSet_ = false;
    clustersIsSet_ = false;
    usersIsSet_ = false;
    contextsIsSet_ = false;
    currentContext_ = "";
    currentContextIsSet_ = false;
    portID_ = "";
    portIDIsSet_ = false;
}

CreateAutopilotKubernetesClusterCertResponse::~CreateAutopilotKubernetesClusterCertResponse() = default;

void CreateAutopilotKubernetesClusterCertResponse::validate()
{
}

web::json::value CreateAutopilotKubernetesClusterCertResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(preferencesIsSet_) {
        val[utility::conversions::to_string_t("preferences")] = ModelBase::toJson(preferences_);
    }
    if(clustersIsSet_) {
        val[utility::conversions::to_string_t("clusters")] = ModelBase::toJson(clusters_);
    }
    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }
    if(contextsIsSet_) {
        val[utility::conversions::to_string_t("contexts")] = ModelBase::toJson(contexts_);
    }
    if(currentContextIsSet_) {
        val[utility::conversions::to_string_t("current-context")] = ModelBase::toJson(currentContext_);
    }
    if(portIDIsSet_) {
        val[utility::conversions::to_string_t("Port-ID")] = ModelBase::toJson(portID_);
    }

    return val;
}
bool CreateAutopilotKubernetesClusterCertResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("kind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apiVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apiVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("preferences"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("preferences"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreferences(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clusters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusters"));
        if(!fieldValue.is_null())
        {
            std::vector<Clusters> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<Users> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("contexts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("contexts"));
        if(!fieldValue.is_null())
        {
            std::vector<Contexts> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContexts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current-context"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current-context"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentContext(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Port-ID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Port-ID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortID(refVal);
        }
    }
    return ok;
}


std::string CreateAutopilotKubernetesClusterCertResponse::getKind() const
{
    return kind_;
}

void CreateAutopilotKubernetesClusterCertResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool CreateAutopilotKubernetesClusterCertResponse::kindIsSet() const
{
    return kindIsSet_;
}

void CreateAutopilotKubernetesClusterCertResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string CreateAutopilotKubernetesClusterCertResponse::getApiVersion() const
{
    return apiVersion_;
}

void CreateAutopilotKubernetesClusterCertResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool CreateAutopilotKubernetesClusterCertResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void CreateAutopilotKubernetesClusterCertResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

Object CreateAutopilotKubernetesClusterCertResponse::getPreferences() const
{
    return preferences_;
}

void CreateAutopilotKubernetesClusterCertResponse::setPreferences(const Object& value)
{
    preferences_ = value;
    preferencesIsSet_ = true;
}

bool CreateAutopilotKubernetesClusterCertResponse::preferencesIsSet() const
{
    return preferencesIsSet_;
}

void CreateAutopilotKubernetesClusterCertResponse::unsetpreferences()
{
    preferencesIsSet_ = false;
}

std::vector<Clusters>& CreateAutopilotKubernetesClusterCertResponse::getClusters()
{
    return clusters_;
}

void CreateAutopilotKubernetesClusterCertResponse::setClusters(const std::vector<Clusters>& value)
{
    clusters_ = value;
    clustersIsSet_ = true;
}

bool CreateAutopilotKubernetesClusterCertResponse::clustersIsSet() const
{
    return clustersIsSet_;
}

void CreateAutopilotKubernetesClusterCertResponse::unsetclusters()
{
    clustersIsSet_ = false;
}

std::vector<Users>& CreateAutopilotKubernetesClusterCertResponse::getUsers()
{
    return users_;
}

void CreateAutopilotKubernetesClusterCertResponse::setUsers(const std::vector<Users>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool CreateAutopilotKubernetesClusterCertResponse::usersIsSet() const
{
    return usersIsSet_;
}

void CreateAutopilotKubernetesClusterCertResponse::unsetusers()
{
    usersIsSet_ = false;
}

std::vector<Contexts>& CreateAutopilotKubernetesClusterCertResponse::getContexts()
{
    return contexts_;
}

void CreateAutopilotKubernetesClusterCertResponse::setContexts(const std::vector<Contexts>& value)
{
    contexts_ = value;
    contextsIsSet_ = true;
}

bool CreateAutopilotKubernetesClusterCertResponse::contextsIsSet() const
{
    return contextsIsSet_;
}

void CreateAutopilotKubernetesClusterCertResponse::unsetcontexts()
{
    contextsIsSet_ = false;
}

std::string CreateAutopilotKubernetesClusterCertResponse::getCurrentContext() const
{
    return currentContext_;
}

void CreateAutopilotKubernetesClusterCertResponse::setCurrentContext(const std::string& value)
{
    currentContext_ = value;
    currentContextIsSet_ = true;
}

bool CreateAutopilotKubernetesClusterCertResponse::currentContextIsSet() const
{
    return currentContextIsSet_;
}

void CreateAutopilotKubernetesClusterCertResponse::unsetcurrentContext()
{
    currentContextIsSet_ = false;
}

std::string CreateAutopilotKubernetesClusterCertResponse::getPortID() const
{
    return portID_;
}

void CreateAutopilotKubernetesClusterCertResponse::setPortID(const std::string& value)
{
    portID_ = value;
    portIDIsSet_ = true;
}

bool CreateAutopilotKubernetesClusterCertResponse::portIDIsSet() const
{
    return portIDIsSet_;
}

void CreateAutopilotKubernetesClusterCertResponse::unsetportID()
{
    portIDIsSet_ = false;
}

}
}
}
}
}


