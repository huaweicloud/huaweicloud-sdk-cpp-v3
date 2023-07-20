

#include "huaweicloud/gaussdb/v3/model/ModifyInternalIpRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ModifyInternalIpRequest::ModifyInternalIpRequest()
{
    internalIp_ = "";
    internalIpIsSet_ = false;
}

ModifyInternalIpRequest::~ModifyInternalIpRequest() = default;

void ModifyInternalIpRequest::validate()
{
}

web::json::value ModifyInternalIpRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(internalIpIsSet_) {
        val[utility::conversions::to_string_t("internal_ip")] = ModelBase::toJson(internalIp_);
    }

    return val;
}

bool ModifyInternalIpRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("internal_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internal_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInternalIp(refVal);
        }
    }
    return ok;
}

std::string ModifyInternalIpRequest::getInternalIp() const
{
    return internalIp_;
}

void ModifyInternalIpRequest::setInternalIp(const std::string& value)
{
    internalIp_ = value;
    internalIpIsSet_ = true;
}

bool ModifyInternalIpRequest::internalIpIsSet() const
{
    return internalIpIsSet_;
}

void ModifyInternalIpRequest::unsetinternalIp()
{
    internalIpIsSet_ = false;
}

}
}
}
}
}


