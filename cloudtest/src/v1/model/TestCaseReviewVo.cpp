

#include "huaweicloud/cloudtest/v1/model/TestCaseReviewVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestCaseReviewVo::TestCaseReviewVo()
{
    uri_ = "";
    uriIsSet_ = false;
    testcaseName_ = "";
    testcaseNameIsSet_ = false;
    testcaseNumber_ = "";
    testcaseNumberIsSet_ = false;
    testcaseStage_ = "";
    testcaseStageIsSet_ = false;
    testcaseLastModified_ = "";
    testcaseLastModifiedIsSet_ = false;
    testcaseLastModifiedTimestamp_ = 0L;
    testcaseLastModifiedTimestampIsSet_ = false;
    testcaseUri_ = "";
    testcaseUriIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
    versionName_ = "";
    versionNameIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
    closeComment_ = "";
    closeCommentIsSet_ = false;
    reviewer_ = "";
    reviewerIsSet_ = false;
    creationDate_ = "";
    creationDateIsSet_ = false;
    creationDateTimestamp_ = 0L;
    creationDateTimestampIsSet_ = false;
    closeUserIdsIsSet_ = false;
    actualClosePerson_ = "";
    actualClosePersonIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    closeDate_ = "";
    closeDateIsSet_ = false;
    closeDateTimestamp_ = 0L;
    closeDateTimestampIsSet_ = false;
    expectCloseDate_ = "";
    expectCloseDateIsSet_ = false;
    expectCloseDateTimestamp_ = 0L;
    expectCloseDateTimestampIsSet_ = false;
}

TestCaseReviewVo::~TestCaseReviewVo() = default;

void TestCaseReviewVo::validate()
{
}

web::json::value TestCaseReviewVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(testcaseNameIsSet_) {
        val[utility::conversions::to_string_t("testcase_name")] = ModelBase::toJson(testcaseName_);
    }
    if(testcaseNumberIsSet_) {
        val[utility::conversions::to_string_t("testcase_number")] = ModelBase::toJson(testcaseNumber_);
    }
    if(testcaseStageIsSet_) {
        val[utility::conversions::to_string_t("testcase_stage")] = ModelBase::toJson(testcaseStage_);
    }
    if(testcaseLastModifiedIsSet_) {
        val[utility::conversions::to_string_t("testcase_last_modified")] = ModelBase::toJson(testcaseLastModified_);
    }
    if(testcaseLastModifiedTimestampIsSet_) {
        val[utility::conversions::to_string_t("testcase_last_modified_timestamp")] = ModelBase::toJson(testcaseLastModifiedTimestamp_);
    }
    if(testcaseUriIsSet_) {
        val[utility::conversions::to_string_t("testcase_uri")] = ModelBase::toJson(testcaseUri_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }
    if(versionNameIsSet_) {
        val[utility::conversions::to_string_t("version_name")] = ModelBase::toJson(versionName_);
    }
    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }
    if(closeCommentIsSet_) {
        val[utility::conversions::to_string_t("close_comment")] = ModelBase::toJson(closeComment_);
    }
    if(reviewerIsSet_) {
        val[utility::conversions::to_string_t("reviewer")] = ModelBase::toJson(reviewer_);
    }
    if(creationDateIsSet_) {
        val[utility::conversions::to_string_t("creation_date")] = ModelBase::toJson(creationDate_);
    }
    if(creationDateTimestampIsSet_) {
        val[utility::conversions::to_string_t("creation_date_timestamp")] = ModelBase::toJson(creationDateTimestamp_);
    }
    if(closeUserIdsIsSet_) {
        val[utility::conversions::to_string_t("close_user_ids")] = ModelBase::toJson(closeUserIds_);
    }
    if(actualClosePersonIsSet_) {
        val[utility::conversions::to_string_t("actual_close_person")] = ModelBase::toJson(actualClosePerson_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(closeDateIsSet_) {
        val[utility::conversions::to_string_t("close_date")] = ModelBase::toJson(closeDate_);
    }
    if(closeDateTimestampIsSet_) {
        val[utility::conversions::to_string_t("close_date_timestamp")] = ModelBase::toJson(closeDateTimestamp_);
    }
    if(expectCloseDateIsSet_) {
        val[utility::conversions::to_string_t("expect_close_date")] = ModelBase::toJson(expectCloseDate_);
    }
    if(expectCloseDateTimestampIsSet_) {
        val[utility::conversions::to_string_t("expect_close_date_timestamp")] = ModelBase::toJson(expectCloseDateTimestamp_);
    }

    return val;
}
bool TestCaseReviewVo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("testcase_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testcase_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testcase_stage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_stage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseStage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testcase_last_modified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_last_modified"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseLastModified(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testcase_last_modified_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_last_modified_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseLastModifiedTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testcase_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseUri(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("version_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("close_comment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("close_comment"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloseComment(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reviewer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reviewer"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creation_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creation_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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
    if(val.has_field(utility::conversions::to_string_t("close_user_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("close_user_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<NameAndIdVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloseUserIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actual_close_person"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actual_close_person"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActualClosePerson(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("close_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("close_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloseDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("close_date_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("close_date_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloseDateTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expect_close_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expect_close_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpectCloseDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expect_close_date_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expect_close_date_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpectCloseDateTimestamp(refVal);
        }
    }
    return ok;
}


std::string TestCaseReviewVo::getUri() const
{
    return uri_;
}

void TestCaseReviewVo::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool TestCaseReviewVo::uriIsSet() const
{
    return uriIsSet_;
}

void TestCaseReviewVo::unseturi()
{
    uriIsSet_ = false;
}

std::string TestCaseReviewVo::getTestcaseName() const
{
    return testcaseName_;
}

void TestCaseReviewVo::setTestcaseName(const std::string& value)
{
    testcaseName_ = value;
    testcaseNameIsSet_ = true;
}

bool TestCaseReviewVo::testcaseNameIsSet() const
{
    return testcaseNameIsSet_;
}

void TestCaseReviewVo::unsettestcaseName()
{
    testcaseNameIsSet_ = false;
}

std::string TestCaseReviewVo::getTestcaseNumber() const
{
    return testcaseNumber_;
}

void TestCaseReviewVo::setTestcaseNumber(const std::string& value)
{
    testcaseNumber_ = value;
    testcaseNumberIsSet_ = true;
}

bool TestCaseReviewVo::testcaseNumberIsSet() const
{
    return testcaseNumberIsSet_;
}

void TestCaseReviewVo::unsettestcaseNumber()
{
    testcaseNumberIsSet_ = false;
}

std::string TestCaseReviewVo::getTestcaseStage() const
{
    return testcaseStage_;
}

void TestCaseReviewVo::setTestcaseStage(const std::string& value)
{
    testcaseStage_ = value;
    testcaseStageIsSet_ = true;
}

bool TestCaseReviewVo::testcaseStageIsSet() const
{
    return testcaseStageIsSet_;
}

void TestCaseReviewVo::unsettestcaseStage()
{
    testcaseStageIsSet_ = false;
}

std::string TestCaseReviewVo::getTestcaseLastModified() const
{
    return testcaseLastModified_;
}

void TestCaseReviewVo::setTestcaseLastModified(const std::string& value)
{
    testcaseLastModified_ = value;
    testcaseLastModifiedIsSet_ = true;
}

bool TestCaseReviewVo::testcaseLastModifiedIsSet() const
{
    return testcaseLastModifiedIsSet_;
}

void TestCaseReviewVo::unsettestcaseLastModified()
{
    testcaseLastModifiedIsSet_ = false;
}

int64_t TestCaseReviewVo::getTestcaseLastModifiedTimestamp() const
{
    return testcaseLastModifiedTimestamp_;
}

void TestCaseReviewVo::setTestcaseLastModifiedTimestamp(int64_t value)
{
    testcaseLastModifiedTimestamp_ = value;
    testcaseLastModifiedTimestampIsSet_ = true;
}

bool TestCaseReviewVo::testcaseLastModifiedTimestampIsSet() const
{
    return testcaseLastModifiedTimestampIsSet_;
}

void TestCaseReviewVo::unsettestcaseLastModifiedTimestamp()
{
    testcaseLastModifiedTimestampIsSet_ = false;
}

std::string TestCaseReviewVo::getTestcaseUri() const
{
    return testcaseUri_;
}

void TestCaseReviewVo::setTestcaseUri(const std::string& value)
{
    testcaseUri_ = value;
    testcaseUriIsSet_ = true;
}

bool TestCaseReviewVo::testcaseUriIsSet() const
{
    return testcaseUriIsSet_;
}

void TestCaseReviewVo::unsettestcaseUri()
{
    testcaseUriIsSet_ = false;
}

std::string TestCaseReviewVo::getVersionUri() const
{
    return versionUri_;
}

void TestCaseReviewVo::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool TestCaseReviewVo::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void TestCaseReviewVo::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::string TestCaseReviewVo::getVersionName() const
{
    return versionName_;
}

void TestCaseReviewVo::setVersionName(const std::string& value)
{
    versionName_ = value;
    versionNameIsSet_ = true;
}

bool TestCaseReviewVo::versionNameIsSet() const
{
    return versionNameIsSet_;
}

void TestCaseReviewVo::unsetversionName()
{
    versionNameIsSet_ = false;
}

std::string TestCaseReviewVo::getComment() const
{
    return comment_;
}

void TestCaseReviewVo::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool TestCaseReviewVo::commentIsSet() const
{
    return commentIsSet_;
}

void TestCaseReviewVo::unsetcomment()
{
    commentIsSet_ = false;
}

std::string TestCaseReviewVo::getCloseComment() const
{
    return closeComment_;
}

void TestCaseReviewVo::setCloseComment(const std::string& value)
{
    closeComment_ = value;
    closeCommentIsSet_ = true;
}

bool TestCaseReviewVo::closeCommentIsSet() const
{
    return closeCommentIsSet_;
}

void TestCaseReviewVo::unsetcloseComment()
{
    closeCommentIsSet_ = false;
}

std::string TestCaseReviewVo::getReviewer() const
{
    return reviewer_;
}

void TestCaseReviewVo::setReviewer(const std::string& value)
{
    reviewer_ = value;
    reviewerIsSet_ = true;
}

bool TestCaseReviewVo::reviewerIsSet() const
{
    return reviewerIsSet_;
}

void TestCaseReviewVo::unsetreviewer()
{
    reviewerIsSet_ = false;
}

std::string TestCaseReviewVo::getCreationDate() const
{
    return creationDate_;
}

void TestCaseReviewVo::setCreationDate(const std::string& value)
{
    creationDate_ = value;
    creationDateIsSet_ = true;
}

bool TestCaseReviewVo::creationDateIsSet() const
{
    return creationDateIsSet_;
}

void TestCaseReviewVo::unsetcreationDate()
{
    creationDateIsSet_ = false;
}

int64_t TestCaseReviewVo::getCreationDateTimestamp() const
{
    return creationDateTimestamp_;
}

void TestCaseReviewVo::setCreationDateTimestamp(int64_t value)
{
    creationDateTimestamp_ = value;
    creationDateTimestampIsSet_ = true;
}

bool TestCaseReviewVo::creationDateTimestampIsSet() const
{
    return creationDateTimestampIsSet_;
}

void TestCaseReviewVo::unsetcreationDateTimestamp()
{
    creationDateTimestampIsSet_ = false;
}

std::vector<NameAndIdVo>& TestCaseReviewVo::getCloseUserIds()
{
    return closeUserIds_;
}

void TestCaseReviewVo::setCloseUserIds(const std::vector<NameAndIdVo>& value)
{
    closeUserIds_ = value;
    closeUserIdsIsSet_ = true;
}

bool TestCaseReviewVo::closeUserIdsIsSet() const
{
    return closeUserIdsIsSet_;
}

void TestCaseReviewVo::unsetcloseUserIds()
{
    closeUserIdsIsSet_ = false;
}

std::string TestCaseReviewVo::getActualClosePerson() const
{
    return actualClosePerson_;
}

void TestCaseReviewVo::setActualClosePerson(const std::string& value)
{
    actualClosePerson_ = value;
    actualClosePersonIsSet_ = true;
}

bool TestCaseReviewVo::actualClosePersonIsSet() const
{
    return actualClosePersonIsSet_;
}

void TestCaseReviewVo::unsetactualClosePerson()
{
    actualClosePersonIsSet_ = false;
}

std::string TestCaseReviewVo::getStatus() const
{
    return status_;
}

void TestCaseReviewVo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TestCaseReviewVo::statusIsSet() const
{
    return statusIsSet_;
}

void TestCaseReviewVo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string TestCaseReviewVo::getCloseDate() const
{
    return closeDate_;
}

void TestCaseReviewVo::setCloseDate(const std::string& value)
{
    closeDate_ = value;
    closeDateIsSet_ = true;
}

bool TestCaseReviewVo::closeDateIsSet() const
{
    return closeDateIsSet_;
}

void TestCaseReviewVo::unsetcloseDate()
{
    closeDateIsSet_ = false;
}

int64_t TestCaseReviewVo::getCloseDateTimestamp() const
{
    return closeDateTimestamp_;
}

void TestCaseReviewVo::setCloseDateTimestamp(int64_t value)
{
    closeDateTimestamp_ = value;
    closeDateTimestampIsSet_ = true;
}

bool TestCaseReviewVo::closeDateTimestampIsSet() const
{
    return closeDateTimestampIsSet_;
}

void TestCaseReviewVo::unsetcloseDateTimestamp()
{
    closeDateTimestampIsSet_ = false;
}

std::string TestCaseReviewVo::getExpectCloseDate() const
{
    return expectCloseDate_;
}

void TestCaseReviewVo::setExpectCloseDate(const std::string& value)
{
    expectCloseDate_ = value;
    expectCloseDateIsSet_ = true;
}

bool TestCaseReviewVo::expectCloseDateIsSet() const
{
    return expectCloseDateIsSet_;
}

void TestCaseReviewVo::unsetexpectCloseDate()
{
    expectCloseDateIsSet_ = false;
}

int64_t TestCaseReviewVo::getExpectCloseDateTimestamp() const
{
    return expectCloseDateTimestamp_;
}

void TestCaseReviewVo::setExpectCloseDateTimestamp(int64_t value)
{
    expectCloseDateTimestamp_ = value;
    expectCloseDateTimestampIsSet_ = true;
}

bool TestCaseReviewVo::expectCloseDateTimestampIsSet() const
{
    return expectCloseDateTimestampIsSet_;
}

void TestCaseReviewVo::unsetexpectCloseDateTimestamp()
{
    expectCloseDateTimestampIsSet_ = false;
}

}
}
}
}
}


