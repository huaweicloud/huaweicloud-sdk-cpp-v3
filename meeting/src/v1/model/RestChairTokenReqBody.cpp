

#include "huaweicloud/meeting/v1/model/RestChairTokenReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestChairTokenReqBody::RestChairTokenReqBody()
{
    applyChair_ = 0;
    applyChairIsSet_ = false;
    chairmanPwd_ = "";
    chairmanPwdIsSet_ = false;
}

RestChairTokenReqBody::~RestChairTokenReqBody() = default;

void RestChairTokenReqBody::validate()
{
}

web::json::value RestChairTokenReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applyChairIsSet_) {
        val[utility::conversions::to_string_t("applyChair")] = ModelBase::toJson(applyChair_);
    }
    if(chairmanPwdIsSet_) {
        val[utility::conversions::to_string_t("chairmanPwd")] = ModelBase::toJson(chairmanPwd_);
    }

    return val;
}
bool RestChairTokenReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("applyChair"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("applyChair"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplyChair(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chairmanPwd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chairmanPwd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChairmanPwd(refVal);
        }
    }
    return ok;
}


int32_t RestChairTokenReqBody::getApplyChair() const
{
    return applyChair_;
}

void RestChairTokenReqBody::setApplyChair(int32_t value)
{
    applyChair_ = value;
    applyChairIsSet_ = true;
}

bool RestChairTokenReqBody::applyChairIsSet() const
{
    return applyChairIsSet_;
}

void RestChairTokenReqBody::unsetapplyChair()
{
    applyChairIsSet_ = false;
}

std::string RestChairTokenReqBody::getChairmanPwd() const
{
    return chairmanPwd_;
}

void RestChairTokenReqBody::setChairmanPwd(const std::string& value)
{
    chairmanPwd_ = value;
    chairmanPwdIsSet_ = true;
}

bool RestChairTokenReqBody::chairmanPwdIsSet() const
{
    return chairmanPwdIsSet_;
}

void RestChairTokenReqBody::unsetchairmanPwd()
{
    chairmanPwdIsSet_ = false;
}

}
}
}
}
}


