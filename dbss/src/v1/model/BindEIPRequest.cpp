

#include "huaweicloud/dbss/v1/model/BindEIPRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




BindEIPRequest::BindEIPRequest()
{
    eip_ = "";
    eipIsSet_ = false;
    eipId_ = "";
    eipIdIsSet_ = false;
}

BindEIPRequest::~BindEIPRequest() = default;

void BindEIPRequest::validate()
{
}

web::json::value BindEIPRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eipIsSet_) {
        val[utility::conversions::to_string_t("eip")] = ModelBase::toJson(eip_);
    }
    if(eipIdIsSet_) {
        val[utility::conversions::to_string_t("eip_id")] = ModelBase::toJson(eipId_);
    }

    return val;
}
bool BindEIPRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("eip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEipId(refVal);
        }
    }
    return ok;
}


std::string BindEIPRequest::getEip() const
{
    return eip_;
}

void BindEIPRequest::setEip(const std::string& value)
{
    eip_ = value;
    eipIsSet_ = true;
}

bool BindEIPRequest::eipIsSet() const
{
    return eipIsSet_;
}

void BindEIPRequest::unseteip()
{
    eipIsSet_ = false;
}

std::string BindEIPRequest::getEipId() const
{
    return eipId_;
}

void BindEIPRequest::setEipId(const std::string& value)
{
    eipId_ = value;
    eipIdIsSet_ = true;
}

bool BindEIPRequest::eipIdIsSet() const
{
    return eipIdIsSet_;
}

void BindEIPRequest::unseteipId()
{
    eipIdIsSet_ = false;
}

}
}
}
}
}


