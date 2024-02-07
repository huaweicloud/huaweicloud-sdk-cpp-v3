

#include "huaweicloud/geip/v3/model/DisassociateInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




DisassociateInstanceRequest::DisassociateInstanceRequest()
{
    isReserveGcb_ = false;
    isReserveGcbIsSet_ = false;
    globalEipId_ = "";
    globalEipIdIsSet_ = false;
}

DisassociateInstanceRequest::~DisassociateInstanceRequest() = default;

void DisassociateInstanceRequest::validate()
{
}

web::json::value DisassociateInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isReserveGcbIsSet_) {
        val[utility::conversions::to_string_t("is_reserve_gcb")] = ModelBase::toJson(isReserveGcb_);
    }
    if(globalEipIdIsSet_) {
        val[utility::conversions::to_string_t("global_eip_id")] = ModelBase::toJson(globalEipId_);
    }

    return val;
}
bool DisassociateInstanceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_reserve_gcb"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_reserve_gcb"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsReserveGcb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("global_eip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global_eip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalEipId(refVal);
        }
    }
    return ok;
}


bool DisassociateInstanceRequest::isIsReserveGcb() const
{
    return isReserveGcb_;
}

void DisassociateInstanceRequest::setIsReserveGcb(bool value)
{
    isReserveGcb_ = value;
    isReserveGcbIsSet_ = true;
}

bool DisassociateInstanceRequest::isReserveGcbIsSet() const
{
    return isReserveGcbIsSet_;
}

void DisassociateInstanceRequest::unsetisReserveGcb()
{
    isReserveGcbIsSet_ = false;
}

std::string DisassociateInstanceRequest::getGlobalEipId() const
{
    return globalEipId_;
}

void DisassociateInstanceRequest::setGlobalEipId(const std::string& value)
{
    globalEipId_ = value;
    globalEipIdIsSet_ = true;
}

bool DisassociateInstanceRequest::globalEipIdIsSet() const
{
    return globalEipIdIsSet_;
}

void DisassociateInstanceRequest::unsetglobalEipId()
{
    globalEipIdIsSet_ = false;
}

}
}
}
}
}


