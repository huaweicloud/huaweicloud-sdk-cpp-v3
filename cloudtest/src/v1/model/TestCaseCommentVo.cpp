

#include "huaweicloud/cloudtest/v1/model/TestCaseCommentVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestCaseCommentVo::TestCaseCommentVo()
{
    uri_ = "";
    uriIsSet_ = false;
    creator_ = "";
    creatorIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
    notifierIsSet_ = false;
    testCaseUri_ = "";
    testCaseUriIsSet_ = false;
    createTime_ = utility::datetime();
    createTimeIsSet_ = false;
    createTimeTimestamp_ = 0L;
    createTimeTimestampIsSet_ = false;
    updateTime_ = utility::datetime();
    updateTimeIsSet_ = false;
    updateTimeTimestamp_ = 0L;
    updateTimeTimestampIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
}

TestCaseCommentVo::~TestCaseCommentVo() = default;

void TestCaseCommentVo::validate()
{
}

web::json::value TestCaseCommentVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }
    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }
    if(notifierIsSet_) {
        val[utility::conversions::to_string_t("notifier")] = ModelBase::toJson(notifier_);
    }
    if(testCaseUriIsSet_) {
        val[utility::conversions::to_string_t("test_case_uri")] = ModelBase::toJson(testCaseUri_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(createTimeTimestampIsSet_) {
        val[utility::conversions::to_string_t("create_time_timestamp")] = ModelBase::toJson(createTimeTimestamp_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(updateTimeTimestampIsSet_) {
        val[utility::conversions::to_string_t("update_time_timestamp")] = ModelBase::toJson(updateTimeTimestamp_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }

    return val;
}
bool TestCaseCommentVo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("notifier"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notifier"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotifier(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_case_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_case_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTimeTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimeTimestamp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    return ok;
}


std::string TestCaseCommentVo::getUri() const
{
    return uri_;
}

void TestCaseCommentVo::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool TestCaseCommentVo::uriIsSet() const
{
    return uriIsSet_;
}

void TestCaseCommentVo::unseturi()
{
    uriIsSet_ = false;
}

std::string TestCaseCommentVo::getCreator() const
{
    return creator_;
}

void TestCaseCommentVo::setCreator(const std::string& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool TestCaseCommentVo::creatorIsSet() const
{
    return creatorIsSet_;
}

void TestCaseCommentVo::unsetcreator()
{
    creatorIsSet_ = false;
}

std::string TestCaseCommentVo::getComment() const
{
    return comment_;
}

void TestCaseCommentVo::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool TestCaseCommentVo::commentIsSet() const
{
    return commentIsSet_;
}

void TestCaseCommentVo::unsetcomment()
{
    commentIsSet_ = false;
}

std::vector<std::string>& TestCaseCommentVo::getNotifier()
{
    return notifier_;
}

void TestCaseCommentVo::setNotifier(const std::vector<std::string>& value)
{
    notifier_ = value;
    notifierIsSet_ = true;
}

bool TestCaseCommentVo::notifierIsSet() const
{
    return notifierIsSet_;
}

void TestCaseCommentVo::unsetnotifier()
{
    notifierIsSet_ = false;
}

std::string TestCaseCommentVo::getTestCaseUri() const
{
    return testCaseUri_;
}

void TestCaseCommentVo::setTestCaseUri(const std::string& value)
{
    testCaseUri_ = value;
    testCaseUriIsSet_ = true;
}

bool TestCaseCommentVo::testCaseUriIsSet() const
{
    return testCaseUriIsSet_;
}

void TestCaseCommentVo::unsettestCaseUri()
{
    testCaseUriIsSet_ = false;
}

utility::datetime TestCaseCommentVo::getCreateTime() const
{
    return createTime_;
}

void TestCaseCommentVo::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TestCaseCommentVo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TestCaseCommentVo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t TestCaseCommentVo::getCreateTimeTimestamp() const
{
    return createTimeTimestamp_;
}

void TestCaseCommentVo::setCreateTimeTimestamp(int64_t value)
{
    createTimeTimestamp_ = value;
    createTimeTimestampIsSet_ = true;
}

bool TestCaseCommentVo::createTimeTimestampIsSet() const
{
    return createTimeTimestampIsSet_;
}

void TestCaseCommentVo::unsetcreateTimeTimestamp()
{
    createTimeTimestampIsSet_ = false;
}

utility::datetime TestCaseCommentVo::getUpdateTime() const
{
    return updateTime_;
}

void TestCaseCommentVo::setUpdateTime(const utility::datetime& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool TestCaseCommentVo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void TestCaseCommentVo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

int64_t TestCaseCommentVo::getUpdateTimeTimestamp() const
{
    return updateTimeTimestamp_;
}

void TestCaseCommentVo::setUpdateTimeTimestamp(int64_t value)
{
    updateTimeTimestamp_ = value;
    updateTimeTimestampIsSet_ = true;
}

bool TestCaseCommentVo::updateTimeTimestampIsSet() const
{
    return updateTimeTimestampIsSet_;
}

void TestCaseCommentVo::unsetupdateTimeTimestamp()
{
    updateTimeTimestampIsSet_ = false;
}

std::string TestCaseCommentVo::getProjectUuid() const
{
    return projectUuid_;
}

void TestCaseCommentVo::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool TestCaseCommentVo::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void TestCaseCommentVo::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string TestCaseCommentVo::getVersionUri() const
{
    return versionUri_;
}

void TestCaseCommentVo::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool TestCaseCommentVo::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void TestCaseCommentVo::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::string TestCaseCommentVo::getDisplayName() const
{
    return displayName_;
}

void TestCaseCommentVo::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool TestCaseCommentVo::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void TestCaseCommentVo::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

}
}
}
}
}


