

#include "huaweicloud/mpc/v1/model/UpdateTenantAccessInfoReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




UpdateTenantAccessInfoReq::UpdateTenantAccessInfoReq()
{
    isOpen_ = false;
    isOpenIsSet_ = false;
    agreementVersion_ = 0;
    agreementVersionIsSet_ = false;
}

UpdateTenantAccessInfoReq::~UpdateTenantAccessInfoReq() = default;

void UpdateTenantAccessInfoReq::validate()
{
}

web::json::value UpdateTenantAccessInfoReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isOpenIsSet_) {
        val[utility::conversions::to_string_t("is_open")] = ModelBase::toJson(isOpen_);
    }
    if(agreementVersionIsSet_) {
        val[utility::conversions::to_string_t("agreement_version")] = ModelBase::toJson(agreementVersion_);
    }

    return val;
}
bool UpdateTenantAccessInfoReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_open"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_open"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsOpen(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agreement_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agreement_version"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgreementVersion(refVal);
        }
    }
    return ok;
}


bool UpdateTenantAccessInfoReq::isIsOpen() const
{
    return isOpen_;
}

void UpdateTenantAccessInfoReq::setIsOpen(bool value)
{
    isOpen_ = value;
    isOpenIsSet_ = true;
}

bool UpdateTenantAccessInfoReq::isOpenIsSet() const
{
    return isOpenIsSet_;
}

void UpdateTenantAccessInfoReq::unsetisOpen()
{
    isOpenIsSet_ = false;
}

int32_t UpdateTenantAccessInfoReq::getAgreementVersion() const
{
    return agreementVersion_;
}

void UpdateTenantAccessInfoReq::setAgreementVersion(int32_t value)
{
    agreementVersion_ = value;
    agreementVersionIsSet_ = true;
}

bool UpdateTenantAccessInfoReq::agreementVersionIsSet() const
{
    return agreementVersionIsSet_;
}

void UpdateTenantAccessInfoReq::unsetagreementVersion()
{
    agreementVersionIsSet_ = false;
}

}
}
}
}
}


