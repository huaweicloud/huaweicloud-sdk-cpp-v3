

#include "huaweicloud/tms/v1/model/ChangeAssociatedResourceOpenStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ChangeAssociatedResourceOpenStatusResponse::ChangeAssociatedResourceOpenStatusResponse()
{
    status_ = "";
    statusIsSet_ = false;
    errorsIsSet_ = false;
}

ChangeAssociatedResourceOpenStatusResponse::~ChangeAssociatedResourceOpenStatusResponse() = default;

void ChangeAssociatedResourceOpenStatusResponse::validate()
{
}

web::json::value ChangeAssociatedResourceOpenStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(errorsIsSet_) {
        val[utility::conversions::to_string_t("errors")] = ModelBase::toJson(errors_);
    }

    return val;
}
bool ChangeAssociatedResourceOpenStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("errors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("errors"));
        if(!fieldValue.is_null())
        {
            std::vector<ErrorInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrors(refVal);
        }
    }
    return ok;
}


std::string ChangeAssociatedResourceOpenStatusResponse::getStatus() const
{
    return status_;
}

void ChangeAssociatedResourceOpenStatusResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ChangeAssociatedResourceOpenStatusResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ChangeAssociatedResourceOpenStatusResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<ErrorInfo>& ChangeAssociatedResourceOpenStatusResponse::getErrors()
{
    return errors_;
}

void ChangeAssociatedResourceOpenStatusResponse::setErrors(const std::vector<ErrorInfo>& value)
{
    errors_ = value;
    errorsIsSet_ = true;
}

bool ChangeAssociatedResourceOpenStatusResponse::errorsIsSet() const
{
    return errorsIsSet_;
}

void ChangeAssociatedResourceOpenStatusResponse::unseterrors()
{
    errorsIsSet_ = false;
}

}
}
}
}
}


