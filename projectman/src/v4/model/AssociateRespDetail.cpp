

#include "huaweicloud/projectman/v4/model/AssociateRespDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




AssociateRespDetail::AssociateRespDetail()
{
    issueId_ = "";
    issueIdIsSet_ = false;
    failMsg_ = "";
    failMsgIsSet_ = false;
    operationFlag_ = 0;
    operationFlagIsSet_ = false;
    modifiedDate_ = 0L;
    modifiedDateIsSet_ = false;
    modifiedBy_ = "";
    modifiedByIsSet_ = false;
}

AssociateRespDetail::~AssociateRespDetail() = default;

void AssociateRespDetail::validate()
{
}

web::json::value AssociateRespDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(failMsgIsSet_) {
        val[utility::conversions::to_string_t("fail_msg")] = ModelBase::toJson(failMsg_);
    }
    if(operationFlagIsSet_) {
        val[utility::conversions::to_string_t("operation_flag")] = ModelBase::toJson(operationFlag_);
    }
    if(modifiedDateIsSet_) {
        val[utility::conversions::to_string_t("modified_date")] = ModelBase::toJson(modifiedDate_);
    }
    if(modifiedByIsSet_) {
        val[utility::conversions::to_string_t("modified_by")] = ModelBase::toJson(modifiedBy_);
    }

    return val;
}
bool AssociateRespDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("issue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailMsg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation_flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_flag"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationFlag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_date"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedBy(refVal);
        }
    }
    return ok;
}


std::string AssociateRespDetail::getIssueId() const
{
    return issueId_;
}

void AssociateRespDetail::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool AssociateRespDetail::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void AssociateRespDetail::unsetissueId()
{
    issueIdIsSet_ = false;
}

std::string AssociateRespDetail::getFailMsg() const
{
    return failMsg_;
}

void AssociateRespDetail::setFailMsg(const std::string& value)
{
    failMsg_ = value;
    failMsgIsSet_ = true;
}

bool AssociateRespDetail::failMsgIsSet() const
{
    return failMsgIsSet_;
}

void AssociateRespDetail::unsetfailMsg()
{
    failMsgIsSet_ = false;
}

int32_t AssociateRespDetail::getOperationFlag() const
{
    return operationFlag_;
}

void AssociateRespDetail::setOperationFlag(int32_t value)
{
    operationFlag_ = value;
    operationFlagIsSet_ = true;
}

bool AssociateRespDetail::operationFlagIsSet() const
{
    return operationFlagIsSet_;
}

void AssociateRespDetail::unsetoperationFlag()
{
    operationFlagIsSet_ = false;
}

int64_t AssociateRespDetail::getModifiedDate() const
{
    return modifiedDate_;
}

void AssociateRespDetail::setModifiedDate(int64_t value)
{
    modifiedDate_ = value;
    modifiedDateIsSet_ = true;
}

bool AssociateRespDetail::modifiedDateIsSet() const
{
    return modifiedDateIsSet_;
}

void AssociateRespDetail::unsetmodifiedDate()
{
    modifiedDateIsSet_ = false;
}

std::string AssociateRespDetail::getModifiedBy() const
{
    return modifiedBy_;
}

void AssociateRespDetail::setModifiedBy(const std::string& value)
{
    modifiedBy_ = value;
    modifiedByIsSet_ = true;
}

bool AssociateRespDetail::modifiedByIsSet() const
{
    return modifiedByIsSet_;
}

void AssociateRespDetail::unsetmodifiedBy()
{
    modifiedByIsSet_ = false;
}

}
}
}
}
}


