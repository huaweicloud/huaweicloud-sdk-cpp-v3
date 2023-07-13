

#include "huaweicloud/cbr/v1/model/VaultResourceInstancesReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




VaultResourceInstancesReq::VaultResourceInstancesReq()
{
    withoutAnyTag_ = false;
    withoutAnyTagIsSet_ = false;
    tagsIsSet_ = false;
    tagsAnyIsSet_ = false;
    notTagsIsSet_ = false;
    notTagsAnyIsSet_ = false;
    sysTagsIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    matchesIsSet_ = false;
    cloudType_ = "";
    cloudTypeIsSet_ = false;
    objectType_ = "";
    objectTypeIsSet_ = false;
}

VaultResourceInstancesReq::~VaultResourceInstancesReq() = default;

void VaultResourceInstancesReq::validate()
{
}

web::json::value VaultResourceInstancesReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(withoutAnyTagIsSet_) {
        val[utility::conversions::to_string_t("without_any_tag")] = ModelBase::toJson(withoutAnyTag_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(tagsAnyIsSet_) {
        val[utility::conversions::to_string_t("tags_any")] = ModelBase::toJson(tagsAny_);
    }
    if(notTagsIsSet_) {
        val[utility::conversions::to_string_t("not_tags")] = ModelBase::toJson(notTags_);
    }
    if(notTagsAnyIsSet_) {
        val[utility::conversions::to_string_t("not_tags_any")] = ModelBase::toJson(notTagsAny_);
    }
    if(sysTagsIsSet_) {
        val[utility::conversions::to_string_t("sys_tags")] = ModelBase::toJson(sysTags_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(matchesIsSet_) {
        val[utility::conversions::to_string_t("matches")] = ModelBase::toJson(matches_);
    }
    if(cloudTypeIsSet_) {
        val[utility::conversions::to_string_t("cloud_type")] = ModelBase::toJson(cloudType_);
    }
    if(objectTypeIsSet_) {
        val[utility::conversions::to_string_t("object_type")] = ModelBase::toJson(objectType_);
    }

    return val;
}

bool VaultResourceInstancesReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("without_any_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("without_any_tag"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWithoutAnyTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagsReq> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags_any"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags_any"));
        if(!fieldValue.is_null())
        {
            std::vector<TagsReq> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagsAny(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("not_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("not_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagsReq> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("not_tags_any"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("not_tags_any"));
        if(!fieldValue.is_null())
        {
            std::vector<TagsReq> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotTagsAny(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<SysTags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("matches"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("matches"));
        if(!fieldValue.is_null())
        {
            std::vector<Match> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatches(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cloud_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloud_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectType(refVal);
        }
    }
    return ok;
}

bool VaultResourceInstancesReq::isWithoutAnyTag() const
{
    return withoutAnyTag_;
}

void VaultResourceInstancesReq::setWithoutAnyTag(bool value)
{
    withoutAnyTag_ = value;
    withoutAnyTagIsSet_ = true;
}

bool VaultResourceInstancesReq::withoutAnyTagIsSet() const
{
    return withoutAnyTagIsSet_;
}

void VaultResourceInstancesReq::unsetwithoutAnyTag()
{
    withoutAnyTagIsSet_ = false;
}

std::vector<TagsReq>& VaultResourceInstancesReq::getTags()
{
    return tags_;
}

void VaultResourceInstancesReq::setTags(const std::vector<TagsReq>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool VaultResourceInstancesReq::tagsIsSet() const
{
    return tagsIsSet_;
}

void VaultResourceInstancesReq::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<TagsReq>& VaultResourceInstancesReq::getTagsAny()
{
    return tagsAny_;
}

void VaultResourceInstancesReq::setTagsAny(const std::vector<TagsReq>& value)
{
    tagsAny_ = value;
    tagsAnyIsSet_ = true;
}

bool VaultResourceInstancesReq::tagsAnyIsSet() const
{
    return tagsAnyIsSet_;
}

void VaultResourceInstancesReq::unsettagsAny()
{
    tagsAnyIsSet_ = false;
}

std::vector<TagsReq>& VaultResourceInstancesReq::getNotTags()
{
    return notTags_;
}

void VaultResourceInstancesReq::setNotTags(const std::vector<TagsReq>& value)
{
    notTags_ = value;
    notTagsIsSet_ = true;
}

bool VaultResourceInstancesReq::notTagsIsSet() const
{
    return notTagsIsSet_;
}

void VaultResourceInstancesReq::unsetnotTags()
{
    notTagsIsSet_ = false;
}

std::vector<TagsReq>& VaultResourceInstancesReq::getNotTagsAny()
{
    return notTagsAny_;
}

void VaultResourceInstancesReq::setNotTagsAny(const std::vector<TagsReq>& value)
{
    notTagsAny_ = value;
    notTagsAnyIsSet_ = true;
}

bool VaultResourceInstancesReq::notTagsAnyIsSet() const
{
    return notTagsAnyIsSet_;
}

void VaultResourceInstancesReq::unsetnotTagsAny()
{
    notTagsAnyIsSet_ = false;
}

std::vector<SysTags>& VaultResourceInstancesReq::getSysTags()
{
    return sysTags_;
}

void VaultResourceInstancesReq::setSysTags(const std::vector<SysTags>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool VaultResourceInstancesReq::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void VaultResourceInstancesReq::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

std::string VaultResourceInstancesReq::getLimit() const
{
    return limit_;
}

void VaultResourceInstancesReq::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool VaultResourceInstancesReq::limitIsSet() const
{
    return limitIsSet_;
}

void VaultResourceInstancesReq::unsetlimit()
{
    limitIsSet_ = false;
}

std::string VaultResourceInstancesReq::getOffset() const
{
    return offset_;
}

void VaultResourceInstancesReq::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool VaultResourceInstancesReq::offsetIsSet() const
{
    return offsetIsSet_;
}

void VaultResourceInstancesReq::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string VaultResourceInstancesReq::getAction() const
{
    return action_;
}

void VaultResourceInstancesReq::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool VaultResourceInstancesReq::actionIsSet() const
{
    return actionIsSet_;
}

void VaultResourceInstancesReq::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<Match>& VaultResourceInstancesReq::getMatches()
{
    return matches_;
}

void VaultResourceInstancesReq::setMatches(const std::vector<Match>& value)
{
    matches_ = value;
    matchesIsSet_ = true;
}

bool VaultResourceInstancesReq::matchesIsSet() const
{
    return matchesIsSet_;
}

void VaultResourceInstancesReq::unsetmatches()
{
    matchesIsSet_ = false;
}

std::string VaultResourceInstancesReq::getCloudType() const
{
    return cloudType_;
}

void VaultResourceInstancesReq::setCloudType(const std::string& value)
{
    cloudType_ = value;
    cloudTypeIsSet_ = true;
}

bool VaultResourceInstancesReq::cloudTypeIsSet() const
{
    return cloudTypeIsSet_;
}

void VaultResourceInstancesReq::unsetcloudType()
{
    cloudTypeIsSet_ = false;
}

std::string VaultResourceInstancesReq::getObjectType() const
{
    return objectType_;
}

void VaultResourceInstancesReq::setObjectType(const std::string& value)
{
    objectType_ = value;
    objectTypeIsSet_ = true;
}

bool VaultResourceInstancesReq::objectTypeIsSet() const
{
    return objectTypeIsSet_;
}

void VaultResourceInstancesReq::unsetobjectType()
{
    objectTypeIsSet_ = false;
}

}
}
}
}
}


