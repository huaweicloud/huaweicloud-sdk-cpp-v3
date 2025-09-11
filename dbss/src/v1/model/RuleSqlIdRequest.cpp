

#include "huaweicloud/dbss/v1/model/RuleSqlIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RuleSqlIdRequest::RuleSqlIdRequest()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

RuleSqlIdRequest::~RuleSqlIdRequest() = default;

void RuleSqlIdRequest::validate()
{
}

web::json::value RuleSqlIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool RuleSqlIdRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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


std::string RuleSqlIdRequest::getId() const
{
    return id_;
}

void RuleSqlIdRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RuleSqlIdRequest::idIsSet() const
{
    return idIsSet_;
}

void RuleSqlIdRequest::unsetid()
{
    idIsSet_ = false;
}

std::string RuleSqlIdRequest::getStatus() const
{
    return status_;
}

void RuleSqlIdRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RuleSqlIdRequest::statusIsSet() const
{
    return statusIsSet_;
}

void RuleSqlIdRequest::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


