

#include "huaweicloud/cloudtest/v1/model/ExternalUserCaseAndDefect.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ExternalUserCaseAndDefect::ExternalUserCaseAndDefect()
{
    creatorIsSet_ = false;
    defectCount_ = 0;
    defectCountIsSet_ = false;
    defectIdsIsSet_ = false;
    testcaseId_ = "";
    testcaseIdIsSet_ = false;
    branchId_ = "";
    branchIdIsSet_ = false;
}

ExternalUserCaseAndDefect::~ExternalUserCaseAndDefect() = default;

void ExternalUserCaseAndDefect::validate()
{
}

web::json::value ExternalUserCaseAndDefect::toJson() const
{
    web::json::value val = web::json::value::object();

    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }
    if(defectCountIsSet_) {
        val[utility::conversions::to_string_t("defect_count")] = ModelBase::toJson(defectCount_);
    }
    if(defectIdsIsSet_) {
        val[utility::conversions::to_string_t("defect_ids")] = ModelBase::toJson(defectIds_);
    }
    if(testcaseIdIsSet_) {
        val[utility::conversions::to_string_t("testcase_id")] = ModelBase::toJson(testcaseId_);
    }
    if(branchIdIsSet_) {
        val[utility::conversions::to_string_t("branch_id")] = ModelBase::toJson(branchId_);
    }

    return val;
}
bool ExternalUserCaseAndDefect::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            NameAndIdVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defect_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defect_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefectCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defect_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defect_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefectIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testcase_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseId(refVal);
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
    return ok;
}


NameAndIdVo ExternalUserCaseAndDefect::getCreator() const
{
    return creator_;
}

void ExternalUserCaseAndDefect::setCreator(const NameAndIdVo& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool ExternalUserCaseAndDefect::creatorIsSet() const
{
    return creatorIsSet_;
}

void ExternalUserCaseAndDefect::unsetcreator()
{
    creatorIsSet_ = false;
}

int32_t ExternalUserCaseAndDefect::getDefectCount() const
{
    return defectCount_;
}

void ExternalUserCaseAndDefect::setDefectCount(int32_t value)
{
    defectCount_ = value;
    defectCountIsSet_ = true;
}

bool ExternalUserCaseAndDefect::defectCountIsSet() const
{
    return defectCountIsSet_;
}

void ExternalUserCaseAndDefect::unsetdefectCount()
{
    defectCountIsSet_ = false;
}

std::vector<std::string>& ExternalUserCaseAndDefect::getDefectIds()
{
    return defectIds_;
}

void ExternalUserCaseAndDefect::setDefectIds(const std::vector<std::string>& value)
{
    defectIds_ = value;
    defectIdsIsSet_ = true;
}

bool ExternalUserCaseAndDefect::defectIdsIsSet() const
{
    return defectIdsIsSet_;
}

void ExternalUserCaseAndDefect::unsetdefectIds()
{
    defectIdsIsSet_ = false;
}

std::string ExternalUserCaseAndDefect::getTestcaseId() const
{
    return testcaseId_;
}

void ExternalUserCaseAndDefect::setTestcaseId(const std::string& value)
{
    testcaseId_ = value;
    testcaseIdIsSet_ = true;
}

bool ExternalUserCaseAndDefect::testcaseIdIsSet() const
{
    return testcaseIdIsSet_;
}

void ExternalUserCaseAndDefect::unsettestcaseId()
{
    testcaseIdIsSet_ = false;
}

std::string ExternalUserCaseAndDefect::getBranchId() const
{
    return branchId_;
}

void ExternalUserCaseAndDefect::setBranchId(const std::string& value)
{
    branchId_ = value;
    branchIdIsSet_ = true;
}

bool ExternalUserCaseAndDefect::branchIdIsSet() const
{
    return branchIdIsSet_;
}

void ExternalUserCaseAndDefect::unsetbranchId()
{
    branchIdIsSet_ = false;
}

}
}
}
}
}


