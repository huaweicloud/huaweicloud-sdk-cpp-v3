

#include "huaweicloud/codeartsbuild/v3/model/CheckWebhookUrlResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CheckWebhookUrlResponse::CheckWebhookUrlResponse()
{
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

CheckWebhookUrlResponse::~CheckWebhookUrlResponse() = default;

void CheckWebhookUrlResponse::validate()
{
}

web::json::value CheckWebhookUrlResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool CheckWebhookUrlResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
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
    return ok;
}


std::string CheckWebhookUrlResponse::getError() const
{
    return error_;
}

void CheckWebhookUrlResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool CheckWebhookUrlResponse::errorIsSet() const
{
    return errorIsSet_;
}

void CheckWebhookUrlResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string CheckWebhookUrlResponse::getStatus() const
{
    return status_;
}

void CheckWebhookUrlResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CheckWebhookUrlResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CheckWebhookUrlResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


