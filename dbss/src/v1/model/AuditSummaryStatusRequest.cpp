

#include "huaweicloud/dbss/v1/model/AuditSummaryStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AuditSummaryStatusRequest::AuditSummaryStatusRequest()
{
    code_ = "";
    codeIsSet_ = false;
    operType_ = "";
    operTypeIsSet_ = false;
    queryBeginTime_ = 0L;
    queryBeginTimeIsSet_ = false;
    queryEndTime_ = 0L;
    queryEndTimeIsSet_ = false;
}

AuditSummaryStatusRequest::~AuditSummaryStatusRequest() = default;

void AuditSummaryStatusRequest::validate()
{
}

web::json::value AuditSummaryStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(operTypeIsSet_) {
        val[utility::conversions::to_string_t("oper_type")] = ModelBase::toJson(operType_);
    }
    if(queryBeginTimeIsSet_) {
        val[utility::conversions::to_string_t("query_begin_time")] = ModelBase::toJson(queryBeginTime_);
    }
    if(queryEndTimeIsSet_) {
        val[utility::conversions::to_string_t("query_end_time")] = ModelBase::toJson(queryEndTime_);
    }

    return val;
}
bool AuditSummaryStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("oper_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("oper_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_begin_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryEndTime(refVal);
        }
    }
    return ok;
}


std::string AuditSummaryStatusRequest::getCode() const
{
    return code_;
}

void AuditSummaryStatusRequest::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool AuditSummaryStatusRequest::codeIsSet() const
{
    return codeIsSet_;
}

void AuditSummaryStatusRequest::unsetcode()
{
    codeIsSet_ = false;
}

std::string AuditSummaryStatusRequest::getOperType() const
{
    return operType_;
}

void AuditSummaryStatusRequest::setOperType(const std::string& value)
{
    operType_ = value;
    operTypeIsSet_ = true;
}

bool AuditSummaryStatusRequest::operTypeIsSet() const
{
    return operTypeIsSet_;
}

void AuditSummaryStatusRequest::unsetoperType()
{
    operTypeIsSet_ = false;
}

int64_t AuditSummaryStatusRequest::getQueryBeginTime() const
{
    return queryBeginTime_;
}

void AuditSummaryStatusRequest::setQueryBeginTime(int64_t value)
{
    queryBeginTime_ = value;
    queryBeginTimeIsSet_ = true;
}

bool AuditSummaryStatusRequest::queryBeginTimeIsSet() const
{
    return queryBeginTimeIsSet_;
}

void AuditSummaryStatusRequest::unsetqueryBeginTime()
{
    queryBeginTimeIsSet_ = false;
}

int64_t AuditSummaryStatusRequest::getQueryEndTime() const
{
    return queryEndTime_;
}

void AuditSummaryStatusRequest::setQueryEndTime(int64_t value)
{
    queryEndTime_ = value;
    queryEndTimeIsSet_ = true;
}

bool AuditSummaryStatusRequest::queryEndTimeIsSet() const
{
    return queryEndTimeIsSet_;
}

void AuditSummaryStatusRequest::unsetqueryEndTime()
{
    queryEndTimeIsSet_ = false;
}

}
}
}
}
}


