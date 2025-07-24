

#include "huaweicloud/cloudtest/v1/model/ShowTestCaseAndDefectInfoRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowTestCaseAndDefectInfoRequestBody::ShowTestCaseAndDefectInfoRequestBody()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    branchId_ = "";
    branchIdIsSet_ = false;
    createTestcaseStartTime_ = "";
    createTestcaseStartTimeIsSet_ = false;
    createTestcaseEndTime_ = "";
    createTestcaseEndTimeIsSet_ = false;
    associateDefectStartTime_ = "";
    associateDefectStartTimeIsSet_ = false;
    associateDefectEndTime_ = "";
    associateDefectEndTimeIsSet_ = false;
}

ShowTestCaseAndDefectInfoRequestBody::~ShowTestCaseAndDefectInfoRequestBody() = default;

void ShowTestCaseAndDefectInfoRequestBody::validate()
{
}

web::json::value ShowTestCaseAndDefectInfoRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(branchIdIsSet_) {
        val[utility::conversions::to_string_t("branch_id")] = ModelBase::toJson(branchId_);
    }
    if(createTestcaseStartTimeIsSet_) {
        val[utility::conversions::to_string_t("create_testcase_start_time")] = ModelBase::toJson(createTestcaseStartTime_);
    }
    if(createTestcaseEndTimeIsSet_) {
        val[utility::conversions::to_string_t("create_testcase_end_time")] = ModelBase::toJson(createTestcaseEndTime_);
    }
    if(associateDefectStartTimeIsSet_) {
        val[utility::conversions::to_string_t("associate_defect_start_time")] = ModelBase::toJson(associateDefectStartTime_);
    }
    if(associateDefectEndTimeIsSet_) {
        val[utility::conversions::to_string_t("associate_defect_end_time")] = ModelBase::toJson(associateDefectEndTime_);
    }

    return val;
}
bool ShowTestCaseAndDefectInfoRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_testcase_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_testcase_start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTestcaseStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_testcase_end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_testcase_end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTestcaseEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_defect_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_defect_start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateDefectStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_defect_end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_defect_end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateDefectEndTime(refVal);
        }
    }
    return ok;
}


int32_t ShowTestCaseAndDefectInfoRequestBody::getOffset() const
{
    return offset_;
}

void ShowTestCaseAndDefectInfoRequestBody::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowTestCaseAndDefectInfoRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowTestCaseAndDefectInfoRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowTestCaseAndDefectInfoRequestBody::getLimit() const
{
    return limit_;
}

void ShowTestCaseAndDefectInfoRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowTestCaseAndDefectInfoRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ShowTestCaseAndDefectInfoRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowTestCaseAndDefectInfoRequestBody::getBranchId() const
{
    return branchId_;
}

void ShowTestCaseAndDefectInfoRequestBody::setBranchId(const std::string& value)
{
    branchId_ = value;
    branchIdIsSet_ = true;
}

bool ShowTestCaseAndDefectInfoRequestBody::branchIdIsSet() const
{
    return branchIdIsSet_;
}

void ShowTestCaseAndDefectInfoRequestBody::unsetbranchId()
{
    branchIdIsSet_ = false;
}

std::string ShowTestCaseAndDefectInfoRequestBody::getCreateTestcaseStartTime() const
{
    return createTestcaseStartTime_;
}

void ShowTestCaseAndDefectInfoRequestBody::setCreateTestcaseStartTime(const std::string& value)
{
    createTestcaseStartTime_ = value;
    createTestcaseStartTimeIsSet_ = true;
}

bool ShowTestCaseAndDefectInfoRequestBody::createTestcaseStartTimeIsSet() const
{
    return createTestcaseStartTimeIsSet_;
}

void ShowTestCaseAndDefectInfoRequestBody::unsetcreateTestcaseStartTime()
{
    createTestcaseStartTimeIsSet_ = false;
}

std::string ShowTestCaseAndDefectInfoRequestBody::getCreateTestcaseEndTime() const
{
    return createTestcaseEndTime_;
}

void ShowTestCaseAndDefectInfoRequestBody::setCreateTestcaseEndTime(const std::string& value)
{
    createTestcaseEndTime_ = value;
    createTestcaseEndTimeIsSet_ = true;
}

bool ShowTestCaseAndDefectInfoRequestBody::createTestcaseEndTimeIsSet() const
{
    return createTestcaseEndTimeIsSet_;
}

void ShowTestCaseAndDefectInfoRequestBody::unsetcreateTestcaseEndTime()
{
    createTestcaseEndTimeIsSet_ = false;
}

std::string ShowTestCaseAndDefectInfoRequestBody::getAssociateDefectStartTime() const
{
    return associateDefectStartTime_;
}

void ShowTestCaseAndDefectInfoRequestBody::setAssociateDefectStartTime(const std::string& value)
{
    associateDefectStartTime_ = value;
    associateDefectStartTimeIsSet_ = true;
}

bool ShowTestCaseAndDefectInfoRequestBody::associateDefectStartTimeIsSet() const
{
    return associateDefectStartTimeIsSet_;
}

void ShowTestCaseAndDefectInfoRequestBody::unsetassociateDefectStartTime()
{
    associateDefectStartTimeIsSet_ = false;
}

std::string ShowTestCaseAndDefectInfoRequestBody::getAssociateDefectEndTime() const
{
    return associateDefectEndTime_;
}

void ShowTestCaseAndDefectInfoRequestBody::setAssociateDefectEndTime(const std::string& value)
{
    associateDefectEndTime_ = value;
    associateDefectEndTimeIsSet_ = true;
}

bool ShowTestCaseAndDefectInfoRequestBody::associateDefectEndTimeIsSet() const
{
    return associateDefectEndTimeIsSet_;
}

void ShowTestCaseAndDefectInfoRequestBody::unsetassociateDefectEndTime()
{
    associateDefectEndTimeIsSet_ = false;
}

}
}
}
}
}


