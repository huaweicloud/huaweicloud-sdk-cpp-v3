

#include "huaweicloud/cloudtest/v1/model/BatchCreateUpdateApiTestCaseVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BatchCreateUpdateApiTestCaseVo::BatchCreateUpdateApiTestCaseVo()
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
    successListIsSet_ = false;
    failedListIsSet_ = false;
}

BatchCreateUpdateApiTestCaseVo::~BatchCreateUpdateApiTestCaseVo() = default;

void BatchCreateUpdateApiTestCaseVo::validate()
{
}

web::json::value BatchCreateUpdateApiTestCaseVo::toJson() const
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
    if(successListIsSet_) {
        val[utility::conversions::to_string_t("success_list")] = ModelBase::toJson(successList_);
    }
    if(failedListIsSet_) {
        val[utility::conversions::to_string_t("failed_list")] = ModelBase::toJson(failedList_);
    }

    return val;
}
bool BatchCreateUpdateApiTestCaseVo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("success_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_list"));
        if(!fieldValue.is_null())
        {
            std::vector<TestCaseVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failed_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed_list"));
        if(!fieldValue.is_null())
        {
            std::vector<TestCaseInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedList(refVal);
        }
    }
    return ok;
}


std::string BatchCreateUpdateApiTestCaseVo::getUri() const
{
    return uri_;
}

void BatchCreateUpdateApiTestCaseVo::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool BatchCreateUpdateApiTestCaseVo::uriIsSet() const
{
    return uriIsSet_;
}

void BatchCreateUpdateApiTestCaseVo::unseturi()
{
    uriIsSet_ = false;
}

std::string BatchCreateUpdateApiTestCaseVo::getType() const
{
    return type_;
}

void BatchCreateUpdateApiTestCaseVo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool BatchCreateUpdateApiTestCaseVo::typeIsSet() const
{
    return typeIsSet_;
}

void BatchCreateUpdateApiTestCaseVo::unsettype()
{
    typeIsSet_ = false;
}

std::string BatchCreateUpdateApiTestCaseVo::getAuthor() const
{
    return author_;
}

void BatchCreateUpdateApiTestCaseVo::setAuthor(const std::string& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool BatchCreateUpdateApiTestCaseVo::authorIsSet() const
{
    return authorIsSet_;
}

void BatchCreateUpdateApiTestCaseVo::unsetauthor()
{
    authorIsSet_ = false;
}

std::string BatchCreateUpdateApiTestCaseVo::getName() const
{
    return name_;
}

void BatchCreateUpdateApiTestCaseVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BatchCreateUpdateApiTestCaseVo::nameIsSet() const
{
    return nameIsSet_;
}

void BatchCreateUpdateApiTestCaseVo::unsetname()
{
    nameIsSet_ = false;
}

int32_t BatchCreateUpdateApiTestCaseVo::getRank() const
{
    return rank_;
}

void BatchCreateUpdateApiTestCaseVo::setRank(int32_t value)
{
    rank_ = value;
    rankIsSet_ = true;
}

bool BatchCreateUpdateApiTestCaseVo::rankIsSet() const
{
    return rankIsSet_;
}

void BatchCreateUpdateApiTestCaseVo::unsetrank()
{
    rankIsSet_ = false;
}

std::string BatchCreateUpdateApiTestCaseVo::getLastModifier() const
{
    return lastModifier_;
}

void BatchCreateUpdateApiTestCaseVo::setLastModifier(const std::string& value)
{
    lastModifier_ = value;
    lastModifierIsSet_ = true;
}

bool BatchCreateUpdateApiTestCaseVo::lastModifierIsSet() const
{
    return lastModifierIsSet_;
}

void BatchCreateUpdateApiTestCaseVo::unsetlastModifier()
{
    lastModifierIsSet_ = false;
}

utility::datetime BatchCreateUpdateApiTestCaseVo::getLastModified() const
{
    return lastModified_;
}

void BatchCreateUpdateApiTestCaseVo::setLastModified(const utility::datetime& value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool BatchCreateUpdateApiTestCaseVo::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void BatchCreateUpdateApiTestCaseVo::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

int64_t BatchCreateUpdateApiTestCaseVo::getLastModifiedTimestamp() const
{
    return lastModifiedTimestamp_;
}

void BatchCreateUpdateApiTestCaseVo::setLastModifiedTimestamp(int64_t value)
{
    lastModifiedTimestamp_ = value;
    lastModifiedTimestampIsSet_ = true;
}

bool BatchCreateUpdateApiTestCaseVo::lastModifiedTimestampIsSet() const
{
    return lastModifiedTimestampIsSet_;
}

void BatchCreateUpdateApiTestCaseVo::unsetlastModifiedTimestamp()
{
    lastModifiedTimestampIsSet_ = false;
}

utility::datetime BatchCreateUpdateApiTestCaseVo::getLastChangeTime() const
{
    return lastChangeTime_;
}

void BatchCreateUpdateApiTestCaseVo::setLastChangeTime(const utility::datetime& value)
{
    lastChangeTime_ = value;
    lastChangeTimeIsSet_ = true;
}

bool BatchCreateUpdateApiTestCaseVo::lastChangeTimeIsSet() const
{
    return lastChangeTimeIsSet_;
}

void BatchCreateUpdateApiTestCaseVo::unsetlastChangeTime()
{
    lastChangeTimeIsSet_ = false;
}

std::string BatchCreateUpdateApiTestCaseVo::getVersionUri() const
{
    return versionUri_;
}

void BatchCreateUpdateApiTestCaseVo::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool BatchCreateUpdateApiTestCaseVo::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void BatchCreateUpdateApiTestCaseVo::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::string BatchCreateUpdateApiTestCaseVo::getOriginUri() const
{
    return originUri_;
}

void BatchCreateUpdateApiTestCaseVo::setOriginUri(const std::string& value)
{
    originUri_ = value;
    originUriIsSet_ = true;
}

bool BatchCreateUpdateApiTestCaseVo::originUriIsSet() const
{
    return originUriIsSet_;
}

void BatchCreateUpdateApiTestCaseVo::unsetoriginUri()
{
    originUriIsSet_ = false;
}

std::string BatchCreateUpdateApiTestCaseVo::getParentUri() const
{
    return parentUri_;
}

void BatchCreateUpdateApiTestCaseVo::setParentUri(const std::string& value)
{
    parentUri_ = value;
    parentUriIsSet_ = true;
}

bool BatchCreateUpdateApiTestCaseVo::parentUriIsSet() const
{
    return parentUriIsSet_;
}

void BatchCreateUpdateApiTestCaseVo::unsetparentUri()
{
    parentUriIsSet_ = false;
}

std::string BatchCreateUpdateApiTestCaseVo::getParentPath() const
{
    return parentPath_;
}

void BatchCreateUpdateApiTestCaseVo::setParentPath(const std::string& value)
{
    parentPath_ = value;
    parentPathIsSet_ = true;
}

bool BatchCreateUpdateApiTestCaseVo::parentPathIsSet() const
{
    return parentPathIsSet_;
}

void BatchCreateUpdateApiTestCaseVo::unsetparentPath()
{
    parentPathIsSet_ = false;
}

std::string BatchCreateUpdateApiTestCaseVo::getCreationVersionUri() const
{
    return creationVersionUri_;
}

void BatchCreateUpdateApiTestCaseVo::setCreationVersionUri(const std::string& value)
{
    creationVersionUri_ = value;
    creationVersionUriIsSet_ = true;
}

bool BatchCreateUpdateApiTestCaseVo::creationVersionUriIsSet() const
{
    return creationVersionUriIsSet_;
}

void BatchCreateUpdateApiTestCaseVo::unsetcreationVersionUri()
{
    creationVersionUriIsSet_ = false;
}

utility::datetime BatchCreateUpdateApiTestCaseVo::getCreationDate() const
{
    return creationDate_;
}

void BatchCreateUpdateApiTestCaseVo::setCreationDate(const utility::datetime& value)
{
    creationDate_ = value;
    creationDateIsSet_ = true;
}

bool BatchCreateUpdateApiTestCaseVo::creationDateIsSet() const
{
    return creationDateIsSet_;
}

void BatchCreateUpdateApiTestCaseVo::unsetcreationDate()
{
    creationDateIsSet_ = false;
}

int64_t BatchCreateUpdateApiTestCaseVo::getCreationDateTimestamp() const
{
    return creationDateTimestamp_;
}

void BatchCreateUpdateApiTestCaseVo::setCreationDateTimestamp(int64_t value)
{
    creationDateTimestamp_ = value;
    creationDateTimestampIsSet_ = true;
}

bool BatchCreateUpdateApiTestCaseVo::creationDateTimestampIsSet() const
{
    return creationDateTimestampIsSet_;
}

void BatchCreateUpdateApiTestCaseVo::unsetcreationDateTimestamp()
{
    creationDateTimestampIsSet_ = false;
}

std::string BatchCreateUpdateApiTestCaseVo::getAuthorName() const
{
    return authorName_;
}

void BatchCreateUpdateApiTestCaseVo::setAuthorName(const std::string& value)
{
    authorName_ = value;
    authorNameIsSet_ = true;
}

bool BatchCreateUpdateApiTestCaseVo::authorNameIsSet() const
{
    return authorNameIsSet_;
}

void BatchCreateUpdateApiTestCaseVo::unsetauthorName()
{
    authorNameIsSet_ = false;
}

std::string BatchCreateUpdateApiTestCaseVo::getComment() const
{
    return comment_;
}

void BatchCreateUpdateApiTestCaseVo::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool BatchCreateUpdateApiTestCaseVo::commentIsSet() const
{
    return commentIsSet_;
}

void BatchCreateUpdateApiTestCaseVo::unsetcomment()
{
    commentIsSet_ = false;
}

std::string BatchCreateUpdateApiTestCaseVo::getNumber() const
{
    return number_;
}

void BatchCreateUpdateApiTestCaseVo::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool BatchCreateUpdateApiTestCaseVo::numberIsSet() const
{
    return numberIsSet_;
}

void BatchCreateUpdateApiTestCaseVo::unsetnumber()
{
    numberIsSet_ = false;
}

std::vector<TestCaseVo>& BatchCreateUpdateApiTestCaseVo::getSuccessList()
{
    return successList_;
}

void BatchCreateUpdateApiTestCaseVo::setSuccessList(const std::vector<TestCaseVo>& value)
{
    successList_ = value;
    successListIsSet_ = true;
}

bool BatchCreateUpdateApiTestCaseVo::successListIsSet() const
{
    return successListIsSet_;
}

void BatchCreateUpdateApiTestCaseVo::unsetsuccessList()
{
    successListIsSet_ = false;
}

std::vector<TestCaseInfo>& BatchCreateUpdateApiTestCaseVo::getFailedList()
{
    return failedList_;
}

void BatchCreateUpdateApiTestCaseVo::setFailedList(const std::vector<TestCaseInfo>& value)
{
    failedList_ = value;
    failedListIsSet_ = true;
}

bool BatchCreateUpdateApiTestCaseVo::failedListIsSet() const
{
    return failedListIsSet_;
}

void BatchCreateUpdateApiTestCaseVo::unsetfailedList()
{
    failedListIsSet_ = false;
}

}
}
}
}
}


