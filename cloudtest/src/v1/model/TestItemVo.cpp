

#include "huaweicloud/cloudtest/v1/model/TestItemVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestItemVo::TestItemVo()
{
    uri_ = "";
    uriIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    author_ = "";
    authorIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    rank_ = 0;
    rankIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    frequence_ = "";
    frequenceIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    lastModifier_ = "";
    lastModifierIsSet_ = false;
    lastModified_ = utility::datetime();
    lastModifiedIsSet_ = false;
    lastModifiedTimestamp_ = 0L;
    lastModifiedTimestampIsSet_ = false;
    lastChangeTime_ = utility::datetime();
    lastChangeTimeIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
    originUri_ = "";
    originUriIsSet_ = false;
    parentUri_ = "";
    parentUriIsSet_ = false;
    parentPath_ = "";
    parentPathIsSet_ = false;
    creationVersionUri_ = "";
    creationVersionUriIsSet_ = false;
    creationDate_ = utility::datetime();
    creationDateIsSet_ = false;
    creationDateTimestamp_ = 0L;
    creationDateTimestampIsSet_ = false;
    authorName_ = "";
    authorNameIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    isFeature_ = "";
    isFeatureIsSet_ = false;
    relateHtsm_ = "";
    relateHtsmIsSet_ = false;
    awUniqueId_ = "";
    awUniqueIdIsSet_ = false;
    testMindId_ = "";
    testMindIdIsSet_ = false;
    testMindUrl_ = "";
    testMindUrlIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    caseTotal_ = 0;
    caseTotalIsSet_ = false;
    execdTotal_ = 0;
    execdTotalIsSet_ = false;
    isDirectRelation_ = false;
    isDirectRelationIsSet_ = false;
    hasChild_ = false;
    hasChildIsSet_ = false;
}

TestItemVo::~TestItemVo() = default;

void TestItemVo::validate()
{
}

web::json::value TestItemVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(authorIsSet_) {
        val[utility::conversions::to_string_t("author")] = ModelBase::toJson(author_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(rankIsSet_) {
        val[utility::conversions::to_string_t("rank")] = ModelBase::toJson(rank_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(frequenceIsSet_) {
        val[utility::conversions::to_string_t("frequence")] = ModelBase::toJson(frequence_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(lastModifierIsSet_) {
        val[utility::conversions::to_string_t("last_modifier")] = ModelBase::toJson(lastModifier_);
    }
    if(lastModifiedIsSet_) {
        val[utility::conversions::to_string_t("last_modified")] = ModelBase::toJson(lastModified_);
    }
    if(lastModifiedTimestampIsSet_) {
        val[utility::conversions::to_string_t("last_modified_timestamp")] = ModelBase::toJson(lastModifiedTimestamp_);
    }
    if(lastChangeTimeIsSet_) {
        val[utility::conversions::to_string_t("last_change_time")] = ModelBase::toJson(lastChangeTime_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }
    if(originUriIsSet_) {
        val[utility::conversions::to_string_t("origin_uri")] = ModelBase::toJson(originUri_);
    }
    if(parentUriIsSet_) {
        val[utility::conversions::to_string_t("parent_uri")] = ModelBase::toJson(parentUri_);
    }
    if(parentPathIsSet_) {
        val[utility::conversions::to_string_t("parent_path")] = ModelBase::toJson(parentPath_);
    }
    if(creationVersionUriIsSet_) {
        val[utility::conversions::to_string_t("creation_version_uri")] = ModelBase::toJson(creationVersionUri_);
    }
    if(creationDateIsSet_) {
        val[utility::conversions::to_string_t("creation_date")] = ModelBase::toJson(creationDate_);
    }
    if(creationDateTimestampIsSet_) {
        val[utility::conversions::to_string_t("creation_date_timestamp")] = ModelBase::toJson(creationDateTimestamp_);
    }
    if(authorNameIsSet_) {
        val[utility::conversions::to_string_t("author_name")] = ModelBase::toJson(authorName_);
    }
    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(isFeatureIsSet_) {
        val[utility::conversions::to_string_t("is_feature")] = ModelBase::toJson(isFeature_);
    }
    if(relateHtsmIsSet_) {
        val[utility::conversions::to_string_t("relate_htsm")] = ModelBase::toJson(relateHtsm_);
    }
    if(awUniqueIdIsSet_) {
        val[utility::conversions::to_string_t("aw_unique_id")] = ModelBase::toJson(awUniqueId_);
    }
    if(testMindIdIsSet_) {
        val[utility::conversions::to_string_t("test_mind_id")] = ModelBase::toJson(testMindId_);
    }
    if(testMindUrlIsSet_) {
        val[utility::conversions::to_string_t("test_mind_url")] = ModelBase::toJson(testMindUrl_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(caseTotalIsSet_) {
        val[utility::conversions::to_string_t("case_total")] = ModelBase::toJson(caseTotal_);
    }
    if(execdTotalIsSet_) {
        val[utility::conversions::to_string_t("execd_total")] = ModelBase::toJson(execdTotal_);
    }
    if(isDirectRelationIsSet_) {
        val[utility::conversions::to_string_t("is_direct_relation")] = ModelBase::toJson(isDirectRelation_);
    }
    if(hasChildIsSet_) {
        val[utility::conversions::to_string_t("has_child")] = ModelBase::toJson(hasChild_);
    }

    return val;
}
bool TestItemVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUri(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rank"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rank"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRank(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("frequence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frequence"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrequence(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_modifier"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modifier"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModifier(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_modified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modified"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModified(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_modified_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modified_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModifiedTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_change_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_change_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastChangeTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("origin_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creation_version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creation_version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationVersionUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creation_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creation_date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creation_date_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creation_date_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationDateTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("comment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComment(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_feature"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_feature"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFeature(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relate_htsm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relate_htsm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelateHtsm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("aw_unique_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("aw_unique_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAwUniqueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_mind_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_mind_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestMindId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_mind_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_mind_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestMindUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execd_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execd_total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecdTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_direct_relation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_direct_relation"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDirectRelation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("has_child"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("has_child"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHasChild(refVal);
        }
    }
    return ok;
}


std::string TestItemVo::getUri() const
{
    return uri_;
}

void TestItemVo::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool TestItemVo::uriIsSet() const
{
    return uriIsSet_;
}

void TestItemVo::unseturi()
{
    uriIsSet_ = false;
}

std::string TestItemVo::getType() const
{
    return type_;
}

void TestItemVo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool TestItemVo::typeIsSet() const
{
    return typeIsSet_;
}

void TestItemVo::unsettype()
{
    typeIsSet_ = false;
}

std::string TestItemVo::getAuthor() const
{
    return author_;
}

void TestItemVo::setAuthor(const std::string& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool TestItemVo::authorIsSet() const
{
    return authorIsSet_;
}

void TestItemVo::unsetauthor()
{
    authorIsSet_ = false;
}

std::string TestItemVo::getName() const
{
    return name_;
}

void TestItemVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TestItemVo::nameIsSet() const
{
    return nameIsSet_;
}

void TestItemVo::unsetname()
{
    nameIsSet_ = false;
}

int32_t TestItemVo::getRank() const
{
    return rank_;
}

void TestItemVo::setRank(int32_t value)
{
    rank_ = value;
    rankIsSet_ = true;
}

bool TestItemVo::rankIsSet() const
{
    return rankIsSet_;
}

void TestItemVo::unsetrank()
{
    rankIsSet_ = false;
}

std::string TestItemVo::getOwner() const
{
    return owner_;
}

void TestItemVo::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool TestItemVo::ownerIsSet() const
{
    return ownerIsSet_;
}

void TestItemVo::unsetowner()
{
    ownerIsSet_ = false;
}

std::string TestItemVo::getFrequence() const
{
    return frequence_;
}

void TestItemVo::setFrequence(const std::string& value)
{
    frequence_ = value;
    frequenceIsSet_ = true;
}

bool TestItemVo::frequenceIsSet() const
{
    return frequenceIsSet_;
}

void TestItemVo::unsetfrequence()
{
    frequenceIsSet_ = false;
}

std::string TestItemVo::getRegion() const
{
    return region_;
}

void TestItemVo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool TestItemVo::regionIsSet() const
{
    return regionIsSet_;
}

void TestItemVo::unsetregion()
{
    regionIsSet_ = false;
}

std::string TestItemVo::getLastModifier() const
{
    return lastModifier_;
}

void TestItemVo::setLastModifier(const std::string& value)
{
    lastModifier_ = value;
    lastModifierIsSet_ = true;
}

bool TestItemVo::lastModifierIsSet() const
{
    return lastModifierIsSet_;
}

void TestItemVo::unsetlastModifier()
{
    lastModifierIsSet_ = false;
}

utility::datetime TestItemVo::getLastModified() const
{
    return lastModified_;
}

void TestItemVo::setLastModified(const utility::datetime& value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool TestItemVo::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void TestItemVo::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

int64_t TestItemVo::getLastModifiedTimestamp() const
{
    return lastModifiedTimestamp_;
}

void TestItemVo::setLastModifiedTimestamp(int64_t value)
{
    lastModifiedTimestamp_ = value;
    lastModifiedTimestampIsSet_ = true;
}

bool TestItemVo::lastModifiedTimestampIsSet() const
{
    return lastModifiedTimestampIsSet_;
}

void TestItemVo::unsetlastModifiedTimestamp()
{
    lastModifiedTimestampIsSet_ = false;
}

utility::datetime TestItemVo::getLastChangeTime() const
{
    return lastChangeTime_;
}

void TestItemVo::setLastChangeTime(const utility::datetime& value)
{
    lastChangeTime_ = value;
    lastChangeTimeIsSet_ = true;
}

bool TestItemVo::lastChangeTimeIsSet() const
{
    return lastChangeTimeIsSet_;
}

void TestItemVo::unsetlastChangeTime()
{
    lastChangeTimeIsSet_ = false;
}

std::string TestItemVo::getVersionUri() const
{
    return versionUri_;
}

void TestItemVo::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool TestItemVo::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void TestItemVo::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::string TestItemVo::getOriginUri() const
{
    return originUri_;
}

void TestItemVo::setOriginUri(const std::string& value)
{
    originUri_ = value;
    originUriIsSet_ = true;
}

bool TestItemVo::originUriIsSet() const
{
    return originUriIsSet_;
}

void TestItemVo::unsetoriginUri()
{
    originUriIsSet_ = false;
}

std::string TestItemVo::getParentUri() const
{
    return parentUri_;
}

void TestItemVo::setParentUri(const std::string& value)
{
    parentUri_ = value;
    parentUriIsSet_ = true;
}

bool TestItemVo::parentUriIsSet() const
{
    return parentUriIsSet_;
}

void TestItemVo::unsetparentUri()
{
    parentUriIsSet_ = false;
}

std::string TestItemVo::getParentPath() const
{
    return parentPath_;
}

void TestItemVo::setParentPath(const std::string& value)
{
    parentPath_ = value;
    parentPathIsSet_ = true;
}

bool TestItemVo::parentPathIsSet() const
{
    return parentPathIsSet_;
}

void TestItemVo::unsetparentPath()
{
    parentPathIsSet_ = false;
}

std::string TestItemVo::getCreationVersionUri() const
{
    return creationVersionUri_;
}

void TestItemVo::setCreationVersionUri(const std::string& value)
{
    creationVersionUri_ = value;
    creationVersionUriIsSet_ = true;
}

bool TestItemVo::creationVersionUriIsSet() const
{
    return creationVersionUriIsSet_;
}

void TestItemVo::unsetcreationVersionUri()
{
    creationVersionUriIsSet_ = false;
}

utility::datetime TestItemVo::getCreationDate() const
{
    return creationDate_;
}

void TestItemVo::setCreationDate(const utility::datetime& value)
{
    creationDate_ = value;
    creationDateIsSet_ = true;
}

bool TestItemVo::creationDateIsSet() const
{
    return creationDateIsSet_;
}

void TestItemVo::unsetcreationDate()
{
    creationDateIsSet_ = false;
}

int64_t TestItemVo::getCreationDateTimestamp() const
{
    return creationDateTimestamp_;
}

void TestItemVo::setCreationDateTimestamp(int64_t value)
{
    creationDateTimestamp_ = value;
    creationDateTimestampIsSet_ = true;
}

bool TestItemVo::creationDateTimestampIsSet() const
{
    return creationDateTimestampIsSet_;
}

void TestItemVo::unsetcreationDateTimestamp()
{
    creationDateTimestampIsSet_ = false;
}

std::string TestItemVo::getAuthorName() const
{
    return authorName_;
}

void TestItemVo::setAuthorName(const std::string& value)
{
    authorName_ = value;
    authorNameIsSet_ = true;
}

bool TestItemVo::authorNameIsSet() const
{
    return authorNameIsSet_;
}

void TestItemVo::unsetauthorName()
{
    authorNameIsSet_ = false;
}

std::string TestItemVo::getComment() const
{
    return comment_;
}

void TestItemVo::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool TestItemVo::commentIsSet() const
{
    return commentIsSet_;
}

void TestItemVo::unsetcomment()
{
    commentIsSet_ = false;
}

std::string TestItemVo::getNumber() const
{
    return number_;
}

void TestItemVo::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool TestItemVo::numberIsSet() const
{
    return numberIsSet_;
}

void TestItemVo::unsetnumber()
{
    numberIsSet_ = false;
}

std::string TestItemVo::getIsFeature() const
{
    return isFeature_;
}

void TestItemVo::setIsFeature(const std::string& value)
{
    isFeature_ = value;
    isFeatureIsSet_ = true;
}

bool TestItemVo::isFeatureIsSet() const
{
    return isFeatureIsSet_;
}

void TestItemVo::unsetisFeature()
{
    isFeatureIsSet_ = false;
}

std::string TestItemVo::getRelateHtsm() const
{
    return relateHtsm_;
}

void TestItemVo::setRelateHtsm(const std::string& value)
{
    relateHtsm_ = value;
    relateHtsmIsSet_ = true;
}

bool TestItemVo::relateHtsmIsSet() const
{
    return relateHtsmIsSet_;
}

void TestItemVo::unsetrelateHtsm()
{
    relateHtsmIsSet_ = false;
}

std::string TestItemVo::getAwUniqueId() const
{
    return awUniqueId_;
}

void TestItemVo::setAwUniqueId(const std::string& value)
{
    awUniqueId_ = value;
    awUniqueIdIsSet_ = true;
}

bool TestItemVo::awUniqueIdIsSet() const
{
    return awUniqueIdIsSet_;
}

void TestItemVo::unsetawUniqueId()
{
    awUniqueIdIsSet_ = false;
}

std::string TestItemVo::getTestMindId() const
{
    return testMindId_;
}

void TestItemVo::setTestMindId(const std::string& value)
{
    testMindId_ = value;
    testMindIdIsSet_ = true;
}

bool TestItemVo::testMindIdIsSet() const
{
    return testMindIdIsSet_;
}

void TestItemVo::unsettestMindId()
{
    testMindIdIsSet_ = false;
}

std::string TestItemVo::getTestMindUrl() const
{
    return testMindUrl_;
}

void TestItemVo::setTestMindUrl(const std::string& value)
{
    testMindUrl_ = value;
    testMindUrlIsSet_ = true;
}

bool TestItemVo::testMindUrlIsSet() const
{
    return testMindUrlIsSet_;
}

void TestItemVo::unsettestMindUrl()
{
    testMindUrlIsSet_ = false;
}

std::string TestItemVo::getProjectUuid() const
{
    return projectUuid_;
}

void TestItemVo::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool TestItemVo::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void TestItemVo::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

int32_t TestItemVo::getCaseTotal() const
{
    return caseTotal_;
}

void TestItemVo::setCaseTotal(int32_t value)
{
    caseTotal_ = value;
    caseTotalIsSet_ = true;
}

bool TestItemVo::caseTotalIsSet() const
{
    return caseTotalIsSet_;
}

void TestItemVo::unsetcaseTotal()
{
    caseTotalIsSet_ = false;
}

int32_t TestItemVo::getExecdTotal() const
{
    return execdTotal_;
}

void TestItemVo::setExecdTotal(int32_t value)
{
    execdTotal_ = value;
    execdTotalIsSet_ = true;
}

bool TestItemVo::execdTotalIsSet() const
{
    return execdTotalIsSet_;
}

void TestItemVo::unsetexecdTotal()
{
    execdTotalIsSet_ = false;
}

bool TestItemVo::isIsDirectRelation() const
{
    return isDirectRelation_;
}

void TestItemVo::setIsDirectRelation(bool value)
{
    isDirectRelation_ = value;
    isDirectRelationIsSet_ = true;
}

bool TestItemVo::isDirectRelationIsSet() const
{
    return isDirectRelationIsSet_;
}

void TestItemVo::unsetisDirectRelation()
{
    isDirectRelationIsSet_ = false;
}

bool TestItemVo::isHasChild() const
{
    return hasChild_;
}

void TestItemVo::setHasChild(bool value)
{
    hasChild_ = value;
    hasChildIsSet_ = true;
}

bool TestItemVo::hasChildIsSet() const
{
    return hasChildIsSet_;
}

void TestItemVo::unsethasChild()
{
    hasChildIsSet_ = false;
}

}
}
}
}
}


