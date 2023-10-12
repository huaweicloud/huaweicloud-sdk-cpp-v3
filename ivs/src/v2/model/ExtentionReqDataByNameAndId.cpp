

#include "huaweicloud/ivs/v2/model/ExtentionReqDataByNameAndId.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




ExtentionReqDataByNameAndId::ExtentionReqDataByNameAndId()
{
    verificationName_ = "";
    verificationNameIsSet_ = false;
    verificationId_ = "";
    verificationIdIsSet_ = false;
}

ExtentionReqDataByNameAndId::~ExtentionReqDataByNameAndId() = default;

void ExtentionReqDataByNameAndId::validate()
{
}

web::json::value ExtentionReqDataByNameAndId::toJson() const
{
    web::json::value val = web::json::value::object();

    if(verificationNameIsSet_) {
        val[utility::conversions::to_string_t("verification_name")] = ModelBase::toJson(verificationName_);
    }
    if(verificationIdIsSet_) {
        val[utility::conversions::to_string_t("verification_id")] = ModelBase::toJson(verificationId_);
    }

    return val;
}
bool ExtentionReqDataByNameAndId::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("verification_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verification_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerificationName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("verification_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verification_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerificationId(refVal);
        }
    }
    return ok;
}


std::string ExtentionReqDataByNameAndId::getVerificationName() const
{
    return verificationName_;
}

void ExtentionReqDataByNameAndId::setVerificationName(const std::string& value)
{
    verificationName_ = value;
    verificationNameIsSet_ = true;
}

bool ExtentionReqDataByNameAndId::verificationNameIsSet() const
{
    return verificationNameIsSet_;
}

void ExtentionReqDataByNameAndId::unsetverificationName()
{
    verificationNameIsSet_ = false;
}

std::string ExtentionReqDataByNameAndId::getVerificationId() const
{
    return verificationId_;
}

void ExtentionReqDataByNameAndId::setVerificationId(const std::string& value)
{
    verificationId_ = value;
    verificationIdIsSet_ = true;
}

bool ExtentionReqDataByNameAndId::verificationIdIsSet() const
{
    return verificationIdIsSet_;
}

void ExtentionReqDataByNameAndId::unsetverificationId()
{
    verificationIdIsSet_ = false;
}

}
}
}
}
}


