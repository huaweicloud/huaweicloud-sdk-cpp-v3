

#include "huaweicloud/cloudtest/v1/model/TestReportCustomDetailVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestReportCustomDetailVo::TestReportCustomDetailVo()
{
    uri_ = "";
    uriIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    display_ = 0;
    displayIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    attachmentsIsSet_ = false;
    creator_ = "";
    creatorIsSet_ = false;
    updator_ = "";
    updatorIsSet_ = false;
    testReportUri_ = "";
    testReportUriIsSet_ = false;
    createTime_ = utility::datetime();
    createTimeIsSet_ = false;
    createTimestamp_ = 0L;
    createTimestampIsSet_ = false;
    creatorName_ = "";
    creatorNameIsSet_ = false;
    updateTime_ = utility::datetime();
    updateTimeIsSet_ = false;
    updateTimestamp_ = 0L;
    updateTimestampIsSet_ = false;
    updatorName_ = "";
    updatorNameIsSet_ = false;
}

TestReportCustomDetailVo::~TestReportCustomDetailVo() = default;

void TestReportCustomDetailVo::validate()
{
}

web::json::value TestReportCustomDetailVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(displayIsSet_) {
        val[utility::conversions::to_string_t("display")] = ModelBase::toJson(display_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(attachmentsIsSet_) {
        val[utility::conversions::to_string_t("attachments")] = ModelBase::toJson(attachments_);
    }
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }
    if(updatorIsSet_) {
        val[utility::conversions::to_string_t("updator")] = ModelBase::toJson(updator_);
    }
    if(testReportUriIsSet_) {
        val[utility::conversions::to_string_t("test_report_uri")] = ModelBase::toJson(testReportUri_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(createTimestampIsSet_) {
        val[utility::conversions::to_string_t("create_timestamp")] = ModelBase::toJson(createTimestamp_);
    }
    if(creatorNameIsSet_) {
        val[utility::conversions::to_string_t("creator_name")] = ModelBase::toJson(creatorName_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(updateTimestampIsSet_) {
        val[utility::conversions::to_string_t("update_timestamp")] = ModelBase::toJson(updateTimestamp_);
    }
    if(updatorNameIsSet_) {
        val[utility::conversions::to_string_t("updator_name")] = ModelBase::toJson(updatorName_);
    }

    return val;
}
bool TestReportCustomDetailVo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attachments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachments"));
        if(!fieldValue.is_null())
        {
            std::vector<AttachmentVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachments(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("updator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_report_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_report_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestReportUri(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("update_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updator_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updator_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatorName(refVal);
        }
    }
    return ok;
}


std::string TestReportCustomDetailVo::getUri() const
{
    return uri_;
}

void TestReportCustomDetailVo::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool TestReportCustomDetailVo::uriIsSet() const
{
    return uriIsSet_;
}

void TestReportCustomDetailVo::unseturi()
{
    uriIsSet_ = false;
}

std::string TestReportCustomDetailVo::getName() const
{
    return name_;
}

void TestReportCustomDetailVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TestReportCustomDetailVo::nameIsSet() const
{
    return nameIsSet_;
}

void TestReportCustomDetailVo::unsetname()
{
    nameIsSet_ = false;
}

int32_t TestReportCustomDetailVo::getDisplay() const
{
    return display_;
}

void TestReportCustomDetailVo::setDisplay(int32_t value)
{
    display_ = value;
    displayIsSet_ = true;
}

bool TestReportCustomDetailVo::displayIsSet() const
{
    return displayIsSet_;
}

void TestReportCustomDetailVo::unsetdisplay()
{
    displayIsSet_ = false;
}

std::string TestReportCustomDetailVo::getDescription() const
{
    return description_;
}

void TestReportCustomDetailVo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TestReportCustomDetailVo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TestReportCustomDetailVo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<AttachmentVo>& TestReportCustomDetailVo::getAttachments()
{
    return attachments_;
}

void TestReportCustomDetailVo::setAttachments(const std::vector<AttachmentVo>& value)
{
    attachments_ = value;
    attachmentsIsSet_ = true;
}

bool TestReportCustomDetailVo::attachmentsIsSet() const
{
    return attachmentsIsSet_;
}

void TestReportCustomDetailVo::unsetattachments()
{
    attachmentsIsSet_ = false;
}

std::string TestReportCustomDetailVo::getCreator() const
{
    return creator_;
}

void TestReportCustomDetailVo::setCreator(const std::string& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool TestReportCustomDetailVo::creatorIsSet() const
{
    return creatorIsSet_;
}

void TestReportCustomDetailVo::unsetcreator()
{
    creatorIsSet_ = false;
}

std::string TestReportCustomDetailVo::getUpdator() const
{
    return updator_;
}

void TestReportCustomDetailVo::setUpdator(const std::string& value)
{
    updator_ = value;
    updatorIsSet_ = true;
}

bool TestReportCustomDetailVo::updatorIsSet() const
{
    return updatorIsSet_;
}

void TestReportCustomDetailVo::unsetupdator()
{
    updatorIsSet_ = false;
}

std::string TestReportCustomDetailVo::getTestReportUri() const
{
    return testReportUri_;
}

void TestReportCustomDetailVo::setTestReportUri(const std::string& value)
{
    testReportUri_ = value;
    testReportUriIsSet_ = true;
}

bool TestReportCustomDetailVo::testReportUriIsSet() const
{
    return testReportUriIsSet_;
}

void TestReportCustomDetailVo::unsettestReportUri()
{
    testReportUriIsSet_ = false;
}

utility::datetime TestReportCustomDetailVo::getCreateTime() const
{
    return createTime_;
}

void TestReportCustomDetailVo::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TestReportCustomDetailVo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TestReportCustomDetailVo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t TestReportCustomDetailVo::getCreateTimestamp() const
{
    return createTimestamp_;
}

void TestReportCustomDetailVo::setCreateTimestamp(int64_t value)
{
    createTimestamp_ = value;
    createTimestampIsSet_ = true;
}

bool TestReportCustomDetailVo::createTimestampIsSet() const
{
    return createTimestampIsSet_;
}

void TestReportCustomDetailVo::unsetcreateTimestamp()
{
    createTimestampIsSet_ = false;
}

std::string TestReportCustomDetailVo::getCreatorName() const
{
    return creatorName_;
}

void TestReportCustomDetailVo::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool TestReportCustomDetailVo::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void TestReportCustomDetailVo::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

utility::datetime TestReportCustomDetailVo::getUpdateTime() const
{
    return updateTime_;
}

void TestReportCustomDetailVo::setUpdateTime(const utility::datetime& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool TestReportCustomDetailVo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void TestReportCustomDetailVo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

int64_t TestReportCustomDetailVo::getUpdateTimestamp() const
{
    return updateTimestamp_;
}

void TestReportCustomDetailVo::setUpdateTimestamp(int64_t value)
{
    updateTimestamp_ = value;
    updateTimestampIsSet_ = true;
}

bool TestReportCustomDetailVo::updateTimestampIsSet() const
{
    return updateTimestampIsSet_;
}

void TestReportCustomDetailVo::unsetupdateTimestamp()
{
    updateTimestampIsSet_ = false;
}

std::string TestReportCustomDetailVo::getUpdatorName() const
{
    return updatorName_;
}

void TestReportCustomDetailVo::setUpdatorName(const std::string& value)
{
    updatorName_ = value;
    updatorNameIsSet_ = true;
}

bool TestReportCustomDetailVo::updatorNameIsSet() const
{
    return updatorNameIsSet_;
}

void TestReportCustomDetailVo::unsetupdatorName()
{
    updatorNameIsSet_ = false;
}

}
}
}
}
}


