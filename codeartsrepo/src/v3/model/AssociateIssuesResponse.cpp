

#include "huaweicloud/codeartsrepo/v3/model/AssociateIssuesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




AssociateIssuesResponse::AssociateIssuesResponse()
{
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

AssociateIssuesResponse::~AssociateIssuesResponse() = default;

void AssociateIssuesResponse::validate()
{
}

web::json::value AssociateIssuesResponse::toJson() const
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
bool AssociateIssuesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            Error refVal;
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


Error AssociateIssuesResponse::getError() const
{
    return error_;
}

void AssociateIssuesResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool AssociateIssuesResponse::errorIsSet() const
{
    return errorIsSet_;
}

void AssociateIssuesResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string AssociateIssuesResponse::getStatus() const
{
    return status_;
}

void AssociateIssuesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AssociateIssuesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void AssociateIssuesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


