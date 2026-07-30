

#include "huaweicloud/modelarts/v1/model/PluginResources.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PluginResources::PluginResources()
{
    involvedObjectIsSet_ = false;
    replicas_ = 0;
    replicasIsSet_ = false;
    limitsIsSet_ = false;
    requestsIsSet_ = false;
}

PluginResources::~PluginResources() = default;

void PluginResources::validate()
{
}

web::json::value PluginResources::toJson() const
{
    web::json::value val = web::json::value::object();

    if(involvedObjectIsSet_) {
        val[utility::conversions::to_string_t("involvedObject")] = ModelBase::toJson(involvedObject_);
    }
    if(replicasIsSet_) {
        val[utility::conversions::to_string_t("replicas")] = ModelBase::toJson(replicas_);
    }
    if(limitsIsSet_) {
        val[utility::conversions::to_string_t("limits")] = ModelBase::toJson(limits_);
    }
    if(requestsIsSet_) {
        val[utility::conversions::to_string_t("requests")] = ModelBase::toJson(requests_);
    }

    return val;
}
bool PluginResources::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("involvedObject"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("involvedObject"));
        if(!fieldValue.is_null())
        {
            ObjectReference refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInvolvedObject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replicas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replicas"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicas(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limits"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limits"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimits(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("requests"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("requests"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequests(refVal);
        }
    }
    return ok;
}


ObjectReference PluginResources::getInvolvedObject() const
{
    return involvedObject_;
}

void PluginResources::setInvolvedObject(const ObjectReference& value)
{
    involvedObject_ = value;
    involvedObjectIsSet_ = true;
}

bool PluginResources::involvedObjectIsSet() const
{
    return involvedObjectIsSet_;
}

void PluginResources::unsetinvolvedObject()
{
    involvedObjectIsSet_ = false;
}

int32_t PluginResources::getReplicas() const
{
    return replicas_;
}

void PluginResources::setReplicas(int32_t value)
{
    replicas_ = value;
    replicasIsSet_ = true;
}

bool PluginResources::replicasIsSet() const
{
    return replicasIsSet_;
}

void PluginResources::unsetreplicas()
{
    replicasIsSet_ = false;
}

std::map<std::string, std::string>& PluginResources::getLimits()
{
    return limits_;
}

void PluginResources::setLimits(const std::map<std::string, std::string>& value)
{
    limits_ = value;
    limitsIsSet_ = true;
}

bool PluginResources::limitsIsSet() const
{
    return limitsIsSet_;
}

void PluginResources::unsetlimits()
{
    limitsIsSet_ = false;
}

std::map<std::string, std::string>& PluginResources::getRequests()
{
    return requests_;
}

void PluginResources::setRequests(const std::map<std::string, std::string>& value)
{
    requests_ = value;
    requestsIsSet_ = true;
}

bool PluginResources::requestsIsSet() const
{
    return requestsIsSet_;
}

void PluginResources::unsetrequests()
{
    requestsIsSet_ = false;
}

}
}
}
}
}


