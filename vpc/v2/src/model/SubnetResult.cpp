

#include "huaweicloud/vpc/model/SubnetResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




SubnetResult::SubnetResult()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

SubnetResult::~SubnetResult() = default;

void SubnetResult::validate()
{
}

web::json::value SubnetResult::toJson() const
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

bool SubnetResult::fromJson(const web::json::value& val)
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


std::string SubnetResult::getId() const
{
    return id_;
}

void SubnetResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SubnetResult::idIsSet() const
{
    return idIsSet_;
}

void SubnetResult::unsetid()
{
    idIsSet_ = false;
}

std::string SubnetResult::getStatus() const
{
    return status_;
}

void SubnetResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SubnetResult::statusIsSet() const
{
    return statusIsSet_;
}

void SubnetResult::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


