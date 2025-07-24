

#include "huaweicloud/cloudtest/v1/model/TestReportInfoRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestReportInfoRequestBody::TestReportInfoRequestBody()
{
    planId_ = "";
    planIdIsSet_ = false;
    branchId_ = "";
    branchIdIsSet_ = false;
    moduleId_ = "";
    moduleIdIsSet_ = false;
    fixedVersionId_ = "";
    fixedVersionIdIsSet_ = false;
}

TestReportInfoRequestBody::~TestReportInfoRequestBody() = default;

void TestReportInfoRequestBody::validate()
{
}

web::json::value TestReportInfoRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(planIdIsSet_) {
        val[utility::conversions::to_string_t("plan_id")] = ModelBase::toJson(planId_);
    }
    if(branchIdIsSet_) {
        val[utility::conversions::to_string_t("branch_id")] = ModelBase::toJson(branchId_);
    }
    if(moduleIdIsSet_) {
        val[utility::conversions::to_string_t("module_id")] = ModelBase::toJson(moduleId_);
    }
    if(fixedVersionIdIsSet_) {
        val[utility::conversions::to_string_t("fixed_version_id")] = ModelBase::toJson(fixedVersionId_);
    }

    return val;
}
bool TestReportInfoRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("plan_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("module_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fixed_version_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fixed_version_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFixedVersionId(refVal);
        }
    }
    return ok;
}


std::string TestReportInfoRequestBody::getPlanId() const
{
    return planId_;
}

void TestReportInfoRequestBody::setPlanId(const std::string& value)
{
    planId_ = value;
    planIdIsSet_ = true;
}

bool TestReportInfoRequestBody::planIdIsSet() const
{
    return planIdIsSet_;
}

void TestReportInfoRequestBody::unsetplanId()
{
    planIdIsSet_ = false;
}

std::string TestReportInfoRequestBody::getBranchId() const
{
    return branchId_;
}

void TestReportInfoRequestBody::setBranchId(const std::string& value)
{
    branchId_ = value;
    branchIdIsSet_ = true;
}

bool TestReportInfoRequestBody::branchIdIsSet() const
{
    return branchIdIsSet_;
}

void TestReportInfoRequestBody::unsetbranchId()
{
    branchIdIsSet_ = false;
}

std::string TestReportInfoRequestBody::getModuleId() const
{
    return moduleId_;
}

void TestReportInfoRequestBody::setModuleId(const std::string& value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool TestReportInfoRequestBody::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void TestReportInfoRequestBody::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

std::string TestReportInfoRequestBody::getFixedVersionId() const
{
    return fixedVersionId_;
}

void TestReportInfoRequestBody::setFixedVersionId(const std::string& value)
{
    fixedVersionId_ = value;
    fixedVersionIdIsSet_ = true;
}

bool TestReportInfoRequestBody::fixedVersionIdIsSet() const
{
    return fixedVersionIdIsSet_;
}

void TestReportInfoRequestBody::unsetfixedVersionId()
{
    fixedVersionIdIsSet_ = false;
}

}
}
}
}
}


