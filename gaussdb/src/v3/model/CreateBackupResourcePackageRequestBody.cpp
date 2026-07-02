

#include "huaweicloud/gaussdb/v3/model/CreateBackupResourcePackageRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateBackupResourcePackageRequestBody::CreateBackupResourcePackageRequestBody()
{
    specCode_ = "";
    specCodeIsSet_ = false;
    num_ = 0;
    numIsSet_ = false;
    chargeInfoIsSet_ = false;
}

CreateBackupResourcePackageRequestBody::~CreateBackupResourcePackageRequestBody() = default;

void CreateBackupResourcePackageRequestBody::validate()
{
}

web::json::value CreateBackupResourcePackageRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }
    if(numIsSet_) {
        val[utility::conversions::to_string_t("num")] = ModelBase::toJson(num_);
    }
    if(chargeInfoIsSet_) {
        val[utility::conversions::to_string_t("charge_info")] = ModelBase::toJson(chargeInfo_);
    }

    return val;
}
bool CreateBackupResourcePackageRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charge_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_info"));
        if(!fieldValue.is_null())
        {
            TaurusDbChargeInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeInfo(refVal);
        }
    }
    return ok;
}


std::string CreateBackupResourcePackageRequestBody::getSpecCode() const
{
    return specCode_;
}

void CreateBackupResourcePackageRequestBody::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool CreateBackupResourcePackageRequestBody::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void CreateBackupResourcePackageRequestBody::unsetspecCode()
{
    specCodeIsSet_ = false;
}

int32_t CreateBackupResourcePackageRequestBody::getNum() const
{
    return num_;
}

void CreateBackupResourcePackageRequestBody::setNum(int32_t value)
{
    num_ = value;
    numIsSet_ = true;
}

bool CreateBackupResourcePackageRequestBody::numIsSet() const
{
    return numIsSet_;
}

void CreateBackupResourcePackageRequestBody::unsetnum()
{
    numIsSet_ = false;
}

TaurusDbChargeInfo CreateBackupResourcePackageRequestBody::getChargeInfo() const
{
    return chargeInfo_;
}

void CreateBackupResourcePackageRequestBody::setChargeInfo(const TaurusDbChargeInfo& value)
{
    chargeInfo_ = value;
    chargeInfoIsSet_ = true;
}

bool CreateBackupResourcePackageRequestBody::chargeInfoIsSet() const
{
    return chargeInfoIsSet_;
}

void CreateBackupResourcePackageRequestBody::unsetchargeInfo()
{
    chargeInfoIsSet_ = false;
}

}
}
}
}
}


