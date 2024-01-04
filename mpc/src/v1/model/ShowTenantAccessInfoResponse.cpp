

#include "huaweicloud/mpc/v1/model/ShowTenantAccessInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ShowTenantAccessInfoResponse::ShowTenantAccessInfoResponse()
{
    isOpen_ = false;
    isOpenIsSet_ = false;
    agreementVersion_ = 0;
    agreementVersionIsSet_ = false;
}

ShowTenantAccessInfoResponse::~ShowTenantAccessInfoResponse() = default;

void ShowTenantAccessInfoResponse::validate()
{
}

web::json::value ShowTenantAccessInfoResponse::toJson() const
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
bool ShowTenantAccessInfoResponse::fromJson(const web::json::value& val)
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


bool ShowTenantAccessInfoResponse::isIsOpen() const
{
    return isOpen_;
}

void ShowTenantAccessInfoResponse::setIsOpen(bool value)
{
    isOpen_ = value;
    isOpenIsSet_ = true;
}

bool ShowTenantAccessInfoResponse::isOpenIsSet() const
{
    return isOpenIsSet_;
}

void ShowTenantAccessInfoResponse::unsetisOpen()
{
    isOpenIsSet_ = false;
}

int32_t ShowTenantAccessInfoResponse::getAgreementVersion() const
{
    return agreementVersion_;
}

void ShowTenantAccessInfoResponse::setAgreementVersion(int32_t value)
{
    agreementVersion_ = value;
    agreementVersionIsSet_ = true;
}

bool ShowTenantAccessInfoResponse::agreementVersionIsSet() const
{
    return agreementVersionIsSet_;
}

void ShowTenantAccessInfoResponse::unsetagreementVersion()
{
    agreementVersionIsSet_ = false;
}

}
}
}
}
}


