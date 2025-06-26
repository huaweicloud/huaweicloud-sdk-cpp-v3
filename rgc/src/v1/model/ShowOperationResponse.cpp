

#include "huaweicloud/rgc/v1/model/ShowOperationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowOperationResponse::ShowOperationResponse()
{
    operationId_ = "";
    operationIdIsSet_ = false;
    percentageComplete_ = 0;
    percentageCompleteIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    percentageDetailsIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ShowOperationResponse::~ShowOperationResponse() = default;

void ShowOperationResponse::validate()
{
}

web::json::value ShowOperationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operationIdIsSet_) {
        val[utility::conversions::to_string_t("operation_id")] = ModelBase::toJson(operationId_);
    }
    if(percentageCompleteIsSet_) {
        val[utility::conversions::to_string_t("percentage_complete")] = ModelBase::toJson(percentageComplete_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(percentageDetailsIsSet_) {
        val[utility::conversions::to_string_t("percentage_details")] = ModelBase::toJson(percentageDetails_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool ShowOperationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("operation_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("percentage_complete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("percentage_complete"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPercentageComplete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("percentage_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("percentage_details"));
        if(!fieldValue.is_null())
        {
            std::vector<OrganizationalPercentageDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPercentageDetails(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    return ok;
}


std::string ShowOperationResponse::getOperationId() const
{
    return operationId_;
}

void ShowOperationResponse::setOperationId(const std::string& value)
{
    operationId_ = value;
    operationIdIsSet_ = true;
}

bool ShowOperationResponse::operationIdIsSet() const
{
    return operationIdIsSet_;
}

void ShowOperationResponse::unsetoperationId()
{
    operationIdIsSet_ = false;
}

int32_t ShowOperationResponse::getPercentageComplete() const
{
    return percentageComplete_;
}

void ShowOperationResponse::setPercentageComplete(int32_t value)
{
    percentageComplete_ = value;
    percentageCompleteIsSet_ = true;
}

bool ShowOperationResponse::percentageCompleteIsSet() const
{
    return percentageCompleteIsSet_;
}

void ShowOperationResponse::unsetpercentageComplete()
{
    percentageCompleteIsSet_ = false;
}

std::string ShowOperationResponse::getStatus() const
{
    return status_;
}

void ShowOperationResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowOperationResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowOperationResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<OrganizationalPercentageDetail>& ShowOperationResponse::getPercentageDetails()
{
    return percentageDetails_;
}

void ShowOperationResponse::setPercentageDetails(const std::vector<OrganizationalPercentageDetail>& value)
{
    percentageDetails_ = value;
    percentageDetailsIsSet_ = true;
}

bool ShowOperationResponse::percentageDetailsIsSet() const
{
    return percentageDetailsIsSet_;
}

void ShowOperationResponse::unsetpercentageDetails()
{
    percentageDetailsIsSet_ = false;
}

std::string ShowOperationResponse::getMessage() const
{
    return message_;
}

void ShowOperationResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowOperationResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowOperationResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


