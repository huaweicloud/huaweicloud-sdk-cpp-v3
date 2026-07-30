

#include "huaweicloud/tms/v1/model/ShowAssociatedResourceOpenStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ShowAssociatedResourceOpenStatusResponse::ShowAssociatedResourceOpenStatusResponse()
{
    status_ = "";
    statusIsSet_ = false;
    errorsIsSet_ = false;
}

ShowAssociatedResourceOpenStatusResponse::~ShowAssociatedResourceOpenStatusResponse() = default;

void ShowAssociatedResourceOpenStatusResponse::validate()
{
}

web::json::value ShowAssociatedResourceOpenStatusResponse::toJson() const
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
bool ShowAssociatedResourceOpenStatusResponse::fromJson(const web::json::value& val)
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


std::string ShowAssociatedResourceOpenStatusResponse::getStatus() const
{
    return status_;
}

void ShowAssociatedResourceOpenStatusResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowAssociatedResourceOpenStatusResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowAssociatedResourceOpenStatusResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<ErrorInfo>& ShowAssociatedResourceOpenStatusResponse::getErrors()
{
    return errors_;
}

void ShowAssociatedResourceOpenStatusResponse::setErrors(const std::vector<ErrorInfo>& value)
{
    errors_ = value;
    errorsIsSet_ = true;
}

bool ShowAssociatedResourceOpenStatusResponse::errorsIsSet() const
{
    return errorsIsSet_;
}

void ShowAssociatedResourceOpenStatusResponse::unseterrors()
{
    errorsIsSet_ = false;
}

}
}
}
}
}


