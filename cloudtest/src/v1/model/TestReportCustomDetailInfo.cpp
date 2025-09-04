

#include "huaweicloud/cloudtest/v1/model/TestReportCustomDetailInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestReportCustomDetailInfo::TestReportCustomDetailInfo()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    attachmentsIsSet_ = false;
}

TestReportCustomDetailInfo::~TestReportCustomDetailInfo() = default;

void TestReportCustomDetailInfo::validate()
{
}

web::json::value TestReportCustomDetailInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(attachmentsIsSet_) {
        val[utility::conversions::to_string_t("attachments")] = ModelBase::toJson(attachments_);
    }

    return val;
}
bool TestReportCustomDetailInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
            std::vector<AttachmentInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachments(refVal);
        }
    }
    return ok;
}


std::string TestReportCustomDetailInfo::getName() const
{
    return name_;
}

void TestReportCustomDetailInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TestReportCustomDetailInfo::nameIsSet() const
{
    return nameIsSet_;
}

void TestReportCustomDetailInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string TestReportCustomDetailInfo::getDescription() const
{
    return description_;
}

void TestReportCustomDetailInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TestReportCustomDetailInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TestReportCustomDetailInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<AttachmentInfo>& TestReportCustomDetailInfo::getAttachments()
{
    return attachments_;
}

void TestReportCustomDetailInfo::setAttachments(const std::vector<AttachmentInfo>& value)
{
    attachments_ = value;
    attachmentsIsSet_ = true;
}

bool TestReportCustomDetailInfo::attachmentsIsSet() const
{
    return attachmentsIsSet_;
}

void TestReportCustomDetailInfo::unsetattachments()
{
    attachmentsIsSet_ = false;
}

}
}
}
}
}


