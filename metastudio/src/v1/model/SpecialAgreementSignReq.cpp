

#include "huaweicloud/metastudio/v1/model/SpecialAgreementSignReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SpecialAgreementSignReq::SpecialAgreementSignReq()
{
    agreementType_ = "";
    agreementTypeIsSet_ = false;
    toSign_ = false;
    toSignIsSet_ = false;
}

SpecialAgreementSignReq::~SpecialAgreementSignReq() = default;

void SpecialAgreementSignReq::validate()
{
}

web::json::value SpecialAgreementSignReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agreementTypeIsSet_) {
        val[utility::conversions::to_string_t("agreement_type")] = ModelBase::toJson(agreementType_);
    }
    if(toSignIsSet_) {
        val[utility::conversions::to_string_t("to_sign")] = ModelBase::toJson(toSign_);
    }

    return val;
}
bool SpecialAgreementSignReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agreement_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agreement_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgreementType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("to_sign"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("to_sign"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToSign(refVal);
        }
    }
    return ok;
}


std::string SpecialAgreementSignReq::getAgreementType() const
{
    return agreementType_;
}

void SpecialAgreementSignReq::setAgreementType(const std::string& value)
{
    agreementType_ = value;
    agreementTypeIsSet_ = true;
}

bool SpecialAgreementSignReq::agreementTypeIsSet() const
{
    return agreementTypeIsSet_;
}

void SpecialAgreementSignReq::unsetagreementType()
{
    agreementTypeIsSet_ = false;
}

bool SpecialAgreementSignReq::isToSign() const
{
    return toSign_;
}

void SpecialAgreementSignReq::setToSign(bool value)
{
    toSign_ = value;
    toSignIsSet_ = true;
}

bool SpecialAgreementSignReq::toSignIsSet() const
{
    return toSignIsSet_;
}

void SpecialAgreementSignReq::unsettoSign()
{
    toSignIsSet_ = false;
}

}
}
}
}
}


