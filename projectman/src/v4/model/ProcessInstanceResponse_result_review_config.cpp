

#include "huaweicloud/projectman/v4/model/ProcessInstanceResponse_result_review_config.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ProcessInstanceResponse_result_review_config::ProcessInstanceResponse_result_review_config()
{
    approvalType_ = 0;
    approvalTypeIsSet_ = false;
    ratioValue_ = "";
    ratioValueIsSet_ = false;
    skipDecisioning_ = false;
    skipDecisioningIsSet_ = false;
    approvalRoles_ = "";
    approvalRolesIsSet_ = false;
    reviewRoles_ = "";
    reviewRolesIsSet_ = false;
}

ProcessInstanceResponse_result_review_config::~ProcessInstanceResponse_result_review_config() = default;

void ProcessInstanceResponse_result_review_config::validate()
{
}

web::json::value ProcessInstanceResponse_result_review_config::toJson() const
{
    web::json::value val = web::json::value::object();

    if(approvalTypeIsSet_) {
        val[utility::conversions::to_string_t("approval_type")] = ModelBase::toJson(approvalType_);
    }
    if(ratioValueIsSet_) {
        val[utility::conversions::to_string_t("ratio_value")] = ModelBase::toJson(ratioValue_);
    }
    if(skipDecisioningIsSet_) {
        val[utility::conversions::to_string_t("skip_decisioning")] = ModelBase::toJson(skipDecisioning_);
    }
    if(approvalRolesIsSet_) {
        val[utility::conversions::to_string_t("approval_roles")] = ModelBase::toJson(approvalRoles_);
    }
    if(reviewRolesIsSet_) {
        val[utility::conversions::to_string_t("review_roles")] = ModelBase::toJson(reviewRoles_);
    }

    return val;
}
bool ProcessInstanceResponse_result_review_config::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("approval_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approval_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprovalType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ratio_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ratio_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRatioValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("skip_decisioning"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("skip_decisioning"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSkipDecisioning(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("approval_roles"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approval_roles"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprovalRoles(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_roles"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_roles"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewRoles(refVal);
        }
    }
    return ok;
}


int32_t ProcessInstanceResponse_result_review_config::getApprovalType() const
{
    return approvalType_;
}

void ProcessInstanceResponse_result_review_config::setApprovalType(int32_t value)
{
    approvalType_ = value;
    approvalTypeIsSet_ = true;
}

bool ProcessInstanceResponse_result_review_config::approvalTypeIsSet() const
{
    return approvalTypeIsSet_;
}

void ProcessInstanceResponse_result_review_config::unsetapprovalType()
{
    approvalTypeIsSet_ = false;
}

std::string ProcessInstanceResponse_result_review_config::getRatioValue() const
{
    return ratioValue_;
}

void ProcessInstanceResponse_result_review_config::setRatioValue(const std::string& value)
{
    ratioValue_ = value;
    ratioValueIsSet_ = true;
}

bool ProcessInstanceResponse_result_review_config::ratioValueIsSet() const
{
    return ratioValueIsSet_;
}

void ProcessInstanceResponse_result_review_config::unsetratioValue()
{
    ratioValueIsSet_ = false;
}

bool ProcessInstanceResponse_result_review_config::isSkipDecisioning() const
{
    return skipDecisioning_;
}

void ProcessInstanceResponse_result_review_config::setSkipDecisioning(bool value)
{
    skipDecisioning_ = value;
    skipDecisioningIsSet_ = true;
}

bool ProcessInstanceResponse_result_review_config::skipDecisioningIsSet() const
{
    return skipDecisioningIsSet_;
}

void ProcessInstanceResponse_result_review_config::unsetskipDecisioning()
{
    skipDecisioningIsSet_ = false;
}

std::string ProcessInstanceResponse_result_review_config::getApprovalRoles() const
{
    return approvalRoles_;
}

void ProcessInstanceResponse_result_review_config::setApprovalRoles(const std::string& value)
{
    approvalRoles_ = value;
    approvalRolesIsSet_ = true;
}

bool ProcessInstanceResponse_result_review_config::approvalRolesIsSet() const
{
    return approvalRolesIsSet_;
}

void ProcessInstanceResponse_result_review_config::unsetapprovalRoles()
{
    approvalRolesIsSet_ = false;
}

std::string ProcessInstanceResponse_result_review_config::getReviewRoles() const
{
    return reviewRoles_;
}

void ProcessInstanceResponse_result_review_config::setReviewRoles(const std::string& value)
{
    reviewRoles_ = value;
    reviewRolesIsSet_ = true;
}

bool ProcessInstanceResponse_result_review_config::reviewRolesIsSet() const
{
    return reviewRolesIsSet_;
}

void ProcessInstanceResponse_result_review_config::unsetreviewRoles()
{
    reviewRolesIsSet_ = false;
}

}
}
}
}
}


