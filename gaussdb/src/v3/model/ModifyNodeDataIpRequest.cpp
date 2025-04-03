

#include "huaweicloud/gaussdb/v3/model/ModifyNodeDataIpRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ModifyNodeDataIpRequest::ModifyNodeDataIpRequest()
{
    internalIp_ = "";
    internalIpIsSet_ = false;
}

ModifyNodeDataIpRequest::~ModifyNodeDataIpRequest() = default;

void ModifyNodeDataIpRequest::validate()
{
}

web::json::value ModifyNodeDataIpRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(internalIpIsSet_) {
        val[utility::conversions::to_string_t("internal_ip")] = ModelBase::toJson(internalIp_);
    }

    return val;
}
bool ModifyNodeDataIpRequest::fromJson(const web::json::value& val)
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


std::string ModifyNodeDataIpRequest::getInternalIp() const
{
    return internalIp_;
}

void ModifyNodeDataIpRequest::setInternalIp(const std::string& value)
{
    internalIp_ = value;
    internalIpIsSet_ = true;
}

bool ModifyNodeDataIpRequest::internalIpIsSet() const
{
    return internalIpIsSet_;
}

void ModifyNodeDataIpRequest::unsetinternalIp()
{
    internalIpIsSet_ = false;
}

}
}
}
}
}


