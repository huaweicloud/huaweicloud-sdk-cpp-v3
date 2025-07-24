

#include "huaweicloud/cloudtest/v1/model/TestCaseCommentInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestCaseCommentInfo::TestCaseCommentInfo()
{
    comment_ = "";
    commentIsSet_ = false;
    notifierIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
}

TestCaseCommentInfo::~TestCaseCommentInfo() = default;

void TestCaseCommentInfo::validate()
{
}

web::json::value TestCaseCommentInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }
    if(notifierIsSet_) {
        val[utility::conversions::to_string_t("notifier")] = ModelBase::toJson(notifier_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }

    return val;
}
bool TestCaseCommentInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionUri(refVal);
        }
    }
    return ok;
}


std::string TestCaseCommentInfo::getComment() const
{
    return comment_;
}

void TestCaseCommentInfo::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool TestCaseCommentInfo::commentIsSet() const
{
    return commentIsSet_;
}

void TestCaseCommentInfo::unsetcomment()
{
    commentIsSet_ = false;
}

std::vector<std::string>& TestCaseCommentInfo::getNotifier()
{
    return notifier_;
}

void TestCaseCommentInfo::setNotifier(const std::vector<std::string>& value)
{
    notifier_ = value;
    notifierIsSet_ = true;
}

bool TestCaseCommentInfo::notifierIsSet() const
{
    return notifierIsSet_;
}

void TestCaseCommentInfo::unsetnotifier()
{
    notifierIsSet_ = false;
}

std::string TestCaseCommentInfo::getVersionUri() const
{
    return versionUri_;
}

void TestCaseCommentInfo::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool TestCaseCommentInfo::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void TestCaseCommentInfo::unsetversionUri()
{
    versionUriIsSet_ = false;
}

}
}
}
}
}


