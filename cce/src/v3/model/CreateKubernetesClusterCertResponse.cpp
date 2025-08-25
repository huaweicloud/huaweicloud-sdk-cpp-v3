

#include "huaweicloud/cce/v3/model/CreateKubernetesClusterCertResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateKubernetesClusterCertResponse::CreateKubernetesClusterCertResponse()
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

CreateKubernetesClusterCertResponse::~CreateKubernetesClusterCertResponse() = default;

void CreateKubernetesClusterCertResponse::validate()
{
}

web::json::value CreateKubernetesClusterCertResponse::toJson() const
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
bool CreateKubernetesClusterCertResponse::fromJson(const web::json::value& val)
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


std::string CreateKubernetesClusterCertResponse::getKind() const
{
    return kind_;
}

void CreateKubernetesClusterCertResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool CreateKubernetesClusterCertResponse::kindIsSet() const
{
    return kindIsSet_;
}

void CreateKubernetesClusterCertResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string CreateKubernetesClusterCertResponse::getApiVersion() const
{
    return apiVersion_;
}

void CreateKubernetesClusterCertResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool CreateKubernetesClusterCertResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void CreateKubernetesClusterCertResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

Object CreateKubernetesClusterCertResponse::getPreferences() const
{
    return preferences_;
}

void CreateKubernetesClusterCertResponse::setPreferences(const Object& value)
{
    preferences_ = value;
    preferencesIsSet_ = true;
}

bool CreateKubernetesClusterCertResponse::preferencesIsSet() const
{
    return preferencesIsSet_;
}

void CreateKubernetesClusterCertResponse::unsetpreferences()
{
    preferencesIsSet_ = false;
}

std::vector<Clusters>& CreateKubernetesClusterCertResponse::getClusters()
{
    return clusters_;
}

void CreateKubernetesClusterCertResponse::setClusters(const std::vector<Clusters>& value)
{
    clusters_ = value;
    clustersIsSet_ = true;
}

bool CreateKubernetesClusterCertResponse::clustersIsSet() const
{
    return clustersIsSet_;
}

void CreateKubernetesClusterCertResponse::unsetclusters()
{
    clustersIsSet_ = false;
}

std::vector<Users>& CreateKubernetesClusterCertResponse::getUsers()
{
    return users_;
}

void CreateKubernetesClusterCertResponse::setUsers(const std::vector<Users>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool CreateKubernetesClusterCertResponse::usersIsSet() const
{
    return usersIsSet_;
}

void CreateKubernetesClusterCertResponse::unsetusers()
{
    usersIsSet_ = false;
}

std::vector<Contexts>& CreateKubernetesClusterCertResponse::getContexts()
{
    return contexts_;
}

void CreateKubernetesClusterCertResponse::setContexts(const std::vector<Contexts>& value)
{
    contexts_ = value;
    contextsIsSet_ = true;
}

bool CreateKubernetesClusterCertResponse::contextsIsSet() const
{
    return contextsIsSet_;
}

void CreateKubernetesClusterCertResponse::unsetcontexts()
{
    contextsIsSet_ = false;
}

std::string CreateKubernetesClusterCertResponse::getCurrentContext() const
{
    return currentContext_;
}

void CreateKubernetesClusterCertResponse::setCurrentContext(const std::string& value)
{
    currentContext_ = value;
    currentContextIsSet_ = true;
}

bool CreateKubernetesClusterCertResponse::currentContextIsSet() const
{
    return currentContextIsSet_;
}

void CreateKubernetesClusterCertResponse::unsetcurrentContext()
{
    currentContextIsSet_ = false;
}

std::string CreateKubernetesClusterCertResponse::getPortID() const
{
    return portID_;
}

void CreateKubernetesClusterCertResponse::setPortID(const std::string& value)
{
    portID_ = value;
    portIDIsSet_ = true;
}

bool CreateKubernetesClusterCertResponse::portIDIsSet() const
{
    return portIDIsSet_;
}

void CreateKubernetesClusterCertResponse::unsetportID()
{
    portIDIsSet_ = false;
}

}
}
}
}
}


