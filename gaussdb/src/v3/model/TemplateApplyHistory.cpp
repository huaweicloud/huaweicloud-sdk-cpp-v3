

#include "huaweicloud/gaussdb/v3/model/TemplateApplyHistory.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




TemplateApplyHistory::TemplateApplyHistory()
{
    targetId_ = "";
    targetIdIsSet_ = false;
    targetName_ = "";
    targetNameIsSet_ = false;
    applyResult_ = "";
    applyResultIsSet_ = false;
    appliedAt_ = 0.0;
    appliedAtIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
}

TemplateApplyHistory::~TemplateApplyHistory() = default;

void TemplateApplyHistory::validate()
{
}

web::json::value TemplateApplyHistory::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetIdIsSet_) {
        val[utility::conversions::to_string_t("target_id")] = ModelBase::toJson(targetId_);
    }
    if(targetNameIsSet_) {
        val[utility::conversions::to_string_t("target_name")] = ModelBase::toJson(targetName_);
    }
    if(applyResultIsSet_) {
        val[utility::conversions::to_string_t("apply_result")] = ModelBase::toJson(applyResult_);
    }
    if(appliedAtIsSet_) {
        val[utility::conversions::to_string_t("applied_at")] = ModelBase::toJson(appliedAt_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }

    return val;
}
bool TemplateApplyHistory::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apply_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apply_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplyResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("applied_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("applied_at"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppliedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    return ok;
}


std::string TemplateApplyHistory::getTargetId() const
{
    return targetId_;
}

void TemplateApplyHistory::setTargetId(const std::string& value)
{
    targetId_ = value;
    targetIdIsSet_ = true;
}

bool TemplateApplyHistory::targetIdIsSet() const
{
    return targetIdIsSet_;
}

void TemplateApplyHistory::unsettargetId()
{
    targetIdIsSet_ = false;
}

std::string TemplateApplyHistory::getTargetName() const
{
    return targetName_;
}

void TemplateApplyHistory::setTargetName(const std::string& value)
{
    targetName_ = value;
    targetNameIsSet_ = true;
}

bool TemplateApplyHistory::targetNameIsSet() const
{
    return targetNameIsSet_;
}

void TemplateApplyHistory::unsettargetName()
{
    targetNameIsSet_ = false;
}

std::string TemplateApplyHistory::getApplyResult() const
{
    return applyResult_;
}

void TemplateApplyHistory::setApplyResult(const std::string& value)
{
    applyResult_ = value;
    applyResultIsSet_ = true;
}

bool TemplateApplyHistory::applyResultIsSet() const
{
    return applyResultIsSet_;
}

void TemplateApplyHistory::unsetapplyResult()
{
    applyResultIsSet_ = false;
}

double TemplateApplyHistory::getAppliedAt() const
{
    return appliedAt_;
}

void TemplateApplyHistory::setAppliedAt(double value)
{
    appliedAt_ = value;
    appliedAtIsSet_ = true;
}

bool TemplateApplyHistory::appliedAtIsSet() const
{
    return appliedAtIsSet_;
}

void TemplateApplyHistory::unsetappliedAt()
{
    appliedAtIsSet_ = false;
}

std::string TemplateApplyHistory::getErrorCode() const
{
    return errorCode_;
}

void TemplateApplyHistory::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool TemplateApplyHistory::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void TemplateApplyHistory::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

}
}
}
}
}


