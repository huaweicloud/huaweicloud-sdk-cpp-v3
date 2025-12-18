

#include "huaweicloud/cce/v3/model/V2JobSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




V2JobSpec::V2JobSpec()
{
    type_ = "";
    typeIsSet_ = false;
    clusteruid_ = "";
    clusteruidIsSet_ = false;
    resourceid_ = "";
    resourceidIsSet_ = false;
    resourcename_ = "";
    resourcenameIsSet_ = false;
    extendparamIsSet_ = false;
    subjobsIsSet_ = false;
}

V2JobSpec::~V2JobSpec() = default;

void V2JobSpec::validate()
{
}

web::json::value V2JobSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(clusteruidIsSet_) {
        val[utility::conversions::to_string_t("clusteruid")] = ModelBase::toJson(clusteruid_);
    }
    if(resourceidIsSet_) {
        val[utility::conversions::to_string_t("resourceid")] = ModelBase::toJson(resourceid_);
    }
    if(resourcenameIsSet_) {
        val[utility::conversions::to_string_t("resourcename")] = ModelBase::toJson(resourcename_);
    }
    if(extendparamIsSet_) {
        val[utility::conversions::to_string_t("extendparam")] = ModelBase::toJson(extendparam_);
    }
    if(subjobsIsSet_) {
        val[utility::conversions::to_string_t("subjobs")] = ModelBase::toJson(subjobs_);
    }

    return val;
}
bool V2JobSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clusteruid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusteruid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusteruid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resourceid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resourceid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resourcename"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resourcename"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourcename(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extendparam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extendparam"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendparam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subjobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subjobs"));
        if(!fieldValue.is_null())
        {
            std::vector<V2Job> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubjobs(refVal);
        }
    }
    return ok;
}


std::string V2JobSpec::getType() const
{
    return type_;
}

void V2JobSpec::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool V2JobSpec::typeIsSet() const
{
    return typeIsSet_;
}

void V2JobSpec::unsettype()
{
    typeIsSet_ = false;
}

std::string V2JobSpec::getClusteruid() const
{
    return clusteruid_;
}

void V2JobSpec::setClusteruid(const std::string& value)
{
    clusteruid_ = value;
    clusteruidIsSet_ = true;
}

bool V2JobSpec::clusteruidIsSet() const
{
    return clusteruidIsSet_;
}

void V2JobSpec::unsetclusteruid()
{
    clusteruidIsSet_ = false;
}

std::string V2JobSpec::getResourceid() const
{
    return resourceid_;
}

void V2JobSpec::setResourceid(const std::string& value)
{
    resourceid_ = value;
    resourceidIsSet_ = true;
}

bool V2JobSpec::resourceidIsSet() const
{
    return resourceidIsSet_;
}

void V2JobSpec::unsetresourceid()
{
    resourceidIsSet_ = false;
}

std::string V2JobSpec::getResourcename() const
{
    return resourcename_;
}

void V2JobSpec::setResourcename(const std::string& value)
{
    resourcename_ = value;
    resourcenameIsSet_ = true;
}

bool V2JobSpec::resourcenameIsSet() const
{
    return resourcenameIsSet_;
}

void V2JobSpec::unsetresourcename()
{
    resourcenameIsSet_ = false;
}

std::map<std::string, std::string>& V2JobSpec::getExtendparam()
{
    return extendparam_;
}

void V2JobSpec::setExtendparam(const std::map<std::string, std::string>& value)
{
    extendparam_ = value;
    extendparamIsSet_ = true;
}

bool V2JobSpec::extendparamIsSet() const
{
    return extendparamIsSet_;
}

void V2JobSpec::unsetextendparam()
{
    extendparamIsSet_ = false;
}

std::vector<V2Job>& V2JobSpec::getSubjobs()
{
    return subjobs_;
}

void V2JobSpec::setSubjobs(const std::vector<V2Job>& value)
{
    subjobs_ = value;
    subjobsIsSet_ = true;
}

bool V2JobSpec::subjobsIsSet() const
{
    return subjobsIsSet_;
}

void V2JobSpec::unsetsubjobs()
{
    subjobsIsSet_ = false;
}

}
}
}
}
}


