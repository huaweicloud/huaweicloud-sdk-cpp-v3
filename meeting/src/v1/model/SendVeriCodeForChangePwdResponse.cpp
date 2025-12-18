

#include "huaweicloud/meeting/v1/model/SendVeriCodeForChangePwdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SendVeriCodeForChangePwdResponse::SendVeriCodeForChangePwdResponse()
{
    expire_ = 0;
    expireIsSet_ = false;
    bindPhone_ = "";
    bindPhoneIsSet_ = false;
    bindEmail_ = "";
    bindEmailIsSet_ = false;
}

SendVeriCodeForChangePwdResponse::~SendVeriCodeForChangePwdResponse() = default;

void SendVeriCodeForChangePwdResponse::validate()
{
}

web::json::value SendVeriCodeForChangePwdResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(expireIsSet_) {
        val[utility::conversions::to_string_t("expire")] = ModelBase::toJson(expire_);
    }
    if(bindPhoneIsSet_) {
        val[utility::conversions::to_string_t("bindPhone")] = ModelBase::toJson(bindPhone_);
    }
    if(bindEmailIsSet_) {
        val[utility::conversions::to_string_t("bindEmail")] = ModelBase::toJson(bindEmail_);
    }

    return val;
}
bool SendVeriCodeForChangePwdResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("expire"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpire(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bindPhone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bindPhone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBindPhone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bindEmail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bindEmail"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBindEmail(refVal);
        }
    }
    return ok;
}


int32_t SendVeriCodeForChangePwdResponse::getExpire() const
{
    return expire_;
}

void SendVeriCodeForChangePwdResponse::setExpire(int32_t value)
{
    expire_ = value;
    expireIsSet_ = true;
}

bool SendVeriCodeForChangePwdResponse::expireIsSet() const
{
    return expireIsSet_;
}

void SendVeriCodeForChangePwdResponse::unsetexpire()
{
    expireIsSet_ = false;
}

std::string SendVeriCodeForChangePwdResponse::getBindPhone() const
{
    return bindPhone_;
}

void SendVeriCodeForChangePwdResponse::setBindPhone(const std::string& value)
{
    bindPhone_ = value;
    bindPhoneIsSet_ = true;
}

bool SendVeriCodeForChangePwdResponse::bindPhoneIsSet() const
{
    return bindPhoneIsSet_;
}

void SendVeriCodeForChangePwdResponse::unsetbindPhone()
{
    bindPhoneIsSet_ = false;
}

std::string SendVeriCodeForChangePwdResponse::getBindEmail() const
{
    return bindEmail_;
}

void SendVeriCodeForChangePwdResponse::setBindEmail(const std::string& value)
{
    bindEmail_ = value;
    bindEmailIsSet_ = true;
}

bool SendVeriCodeForChangePwdResponse::bindEmailIsSet() const
{
    return bindEmailIsSet_;
}

void SendVeriCodeForChangePwdResponse::unsetbindEmail()
{
    bindEmailIsSet_ = false;
}

}
}
}
}
}


