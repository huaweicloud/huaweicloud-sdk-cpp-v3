

#include "huaweicloud/kms/v2/model/ReplicateKeyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ReplicateKeyRequestBody::ReplicateKeyRequestBody()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    replicaRegion_ = "";
    replicaRegionIsSet_ = false;
    keyAlias_ = "";
    keyAliasIsSet_ = false;
    keyDescription_ = "";
    keyDescriptionIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    replicaProjectId_ = "";
    replicaProjectIdIsSet_ = false;
    tagsIsSet_ = false;
}

ReplicateKeyRequestBody::~ReplicateKeyRequestBody() = default;

void ReplicateKeyRequestBody::validate()
{
}

web::json::value ReplicateKeyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(replicaRegionIsSet_) {
        val[utility::conversions::to_string_t("replica_region")] = ModelBase::toJson(replicaRegion_);
    }
    if(keyAliasIsSet_) {
        val[utility::conversions::to_string_t("key_alias")] = ModelBase::toJson(keyAlias_);
    }
    if(keyDescriptionIsSet_) {
        val[utility::conversions::to_string_t("key_description")] = ModelBase::toJson(keyDescription_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(replicaProjectIdIsSet_) {
        val[utility::conversions::to_string_t("replica_project_id")] = ModelBase::toJson(replicaProjectId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ReplicateKeyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replica_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replica_region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicaRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyAlias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("replica_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replica_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicaProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string ReplicateKeyRequestBody::getKeyId() const
{
    return keyId_;
}

void ReplicateKeyRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool ReplicateKeyRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void ReplicateKeyRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string ReplicateKeyRequestBody::getReplicaRegion() const
{
    return replicaRegion_;
}

void ReplicateKeyRequestBody::setReplicaRegion(const std::string& value)
{
    replicaRegion_ = value;
    replicaRegionIsSet_ = true;
}

bool ReplicateKeyRequestBody::replicaRegionIsSet() const
{
    return replicaRegionIsSet_;
}

void ReplicateKeyRequestBody::unsetreplicaRegion()
{
    replicaRegionIsSet_ = false;
}

std::string ReplicateKeyRequestBody::getKeyAlias() const
{
    return keyAlias_;
}

void ReplicateKeyRequestBody::setKeyAlias(const std::string& value)
{
    keyAlias_ = value;
    keyAliasIsSet_ = true;
}

bool ReplicateKeyRequestBody::keyAliasIsSet() const
{
    return keyAliasIsSet_;
}

void ReplicateKeyRequestBody::unsetkeyAlias()
{
    keyAliasIsSet_ = false;
}

std::string ReplicateKeyRequestBody::getKeyDescription() const
{
    return keyDescription_;
}

void ReplicateKeyRequestBody::setKeyDescription(const std::string& value)
{
    keyDescription_ = value;
    keyDescriptionIsSet_ = true;
}

bool ReplicateKeyRequestBody::keyDescriptionIsSet() const
{
    return keyDescriptionIsSet_;
}

void ReplicateKeyRequestBody::unsetkeyDescription()
{
    keyDescriptionIsSet_ = false;
}

std::string ReplicateKeyRequestBody::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ReplicateKeyRequestBody::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ReplicateKeyRequestBody::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ReplicateKeyRequestBody::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ReplicateKeyRequestBody::getReplicaProjectId() const
{
    return replicaProjectId_;
}

void ReplicateKeyRequestBody::setReplicaProjectId(const std::string& value)
{
    replicaProjectId_ = value;
    replicaProjectIdIsSet_ = true;
}

bool ReplicateKeyRequestBody::replicaProjectIdIsSet() const
{
    return replicaProjectIdIsSet_;
}

void ReplicateKeyRequestBody::unsetreplicaProjectId()
{
    replicaProjectIdIsSet_ = false;
}

std::vector<TagItem>& ReplicateKeyRequestBody::getTags()
{
    return tags_;
}

void ReplicateKeyRequestBody::setTags(const std::vector<TagItem>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ReplicateKeyRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void ReplicateKeyRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


