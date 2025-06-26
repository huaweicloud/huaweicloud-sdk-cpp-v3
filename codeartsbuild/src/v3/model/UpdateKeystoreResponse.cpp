

#include "huaweicloud/codeartsbuild/v3/model/UpdateKeystoreResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




UpdateKeystoreResponse::UpdateKeystoreResponse()
{
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

UpdateKeystoreResponse::~UpdateKeystoreResponse() = default;

void UpdateKeystoreResponse::validate()
{
}

web::json::value UpdateKeystoreResponse::toJson() const
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
bool UpdateKeystoreResponse::fromJson(const web::json::value& val)
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


std::string UpdateKeystoreResponse::getError() const
{
    return error_;
}

void UpdateKeystoreResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool UpdateKeystoreResponse::errorIsSet() const
{
    return errorIsSet_;
}

void UpdateKeystoreResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string UpdateKeystoreResponse::getStatus() const
{
    return status_;
}

void UpdateKeystoreResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateKeystoreResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateKeystoreResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


