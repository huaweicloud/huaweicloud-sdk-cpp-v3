

#include "huaweicloud/eip/v2/model/BatchPublicIp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




BatchPublicIp::BatchPublicIp()
{
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    ipVersion_ = "";
    ipVersionIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    tagsIsSet_ = false;
    profileIsSet_ = false;
}

BatchPublicIp::~BatchPublicIp() = default;

void BatchPublicIp::validate()
{
}

web::json::value BatchPublicIp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(ipVersionIsSet_) {
        val[utility::conversions::to_string_t("ip_version")] = ModelBase::toJson(ipVersion_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(profileIsSet_) {
        val[utility::conversions::to_string_t("profile")] = ModelBase::toJson(profile_);
    }

    return val;
}

bool BatchPublicIp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("profile"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("profile"));
        if(!fieldValue.is_null())
        {
            BatchProfile refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProfile(refVal);
        }
    }
    return ok;
}


std::string BatchPublicIp::getId() const
{
    return id_;
}

void BatchPublicIp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BatchPublicIp::idIsSet() const
{
    return idIsSet_;
}

void BatchPublicIp::unsetid()
{
    idIsSet_ = false;
}

std::string BatchPublicIp::getType() const
{
    return type_;
}

void BatchPublicIp::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool BatchPublicIp::typeIsSet() const
{
    return typeIsSet_;
}

void BatchPublicIp::unsettype()
{
    typeIsSet_ = false;
}

std::string BatchPublicIp::getIpVersion() const
{
    return ipVersion_;
}

void BatchPublicIp::setIpVersion(const std::string& value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool BatchPublicIp::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void BatchPublicIp::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::string BatchPublicIp::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void BatchPublicIp::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool BatchPublicIp::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void BatchPublicIp::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<std::string>& BatchPublicIp::getTags()
{
    return tags_;
}

void BatchPublicIp::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchPublicIp::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchPublicIp::unsettags()
{
    tagsIsSet_ = false;
}

BatchProfile BatchPublicIp::getProfile() const
{
    return profile_;
}

void BatchPublicIp::setProfile(const BatchProfile& value)
{
    profile_ = value;
    profileIsSet_ = true;
}

bool BatchPublicIp::profileIsSet() const
{
    return profileIsSet_;
}

void BatchPublicIp::unsetprofile()
{
    profileIsSet_ = false;
}

}
}
}
}
}


