

#include "huaweicloud/gaussdb/v3/model/CreateBackupResourcePackageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateBackupResourcePackageResponse::CreateBackupResourcePackageResponse()
{
    orderId_ = "";
    orderIdIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
    num_ = 0;
    numIsSet_ = false;
    periodType_ = "";
    periodTypeIsSet_ = false;
    periodNum_ = 0;
    periodNumIsSet_ = false;
}

CreateBackupResourcePackageResponse::~CreateBackupResourcePackageResponse() = default;

void CreateBackupResourcePackageResponse::validate()
{
}

web::json::value CreateBackupResourcePackageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }
    if(numIsSet_) {
        val[utility::conversions::to_string_t("num")] = ModelBase::toJson(num_);
    }
    if(periodTypeIsSet_) {
        val[utility::conversions::to_string_t("period_type")] = ModelBase::toJson(periodType_);
    }
    if(periodNumIsSet_) {
        val[utility::conversions::to_string_t("period_num")] = ModelBase::toJson(periodNum_);
    }

    return val;
}
bool CreateBackupResourcePackageResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("period_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodNum(refVal);
        }
    }
    return ok;
}


std::string CreateBackupResourcePackageResponse::getOrderId() const
{
    return orderId_;
}

void CreateBackupResourcePackageResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool CreateBackupResourcePackageResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void CreateBackupResourcePackageResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string CreateBackupResourcePackageResponse::getSpecCode() const
{
    return specCode_;
}

void CreateBackupResourcePackageResponse::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool CreateBackupResourcePackageResponse::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void CreateBackupResourcePackageResponse::unsetspecCode()
{
    specCodeIsSet_ = false;
}

int32_t CreateBackupResourcePackageResponse::getNum() const
{
    return num_;
}

void CreateBackupResourcePackageResponse::setNum(int32_t value)
{
    num_ = value;
    numIsSet_ = true;
}

bool CreateBackupResourcePackageResponse::numIsSet() const
{
    return numIsSet_;
}

void CreateBackupResourcePackageResponse::unsetnum()
{
    numIsSet_ = false;
}

std::string CreateBackupResourcePackageResponse::getPeriodType() const
{
    return periodType_;
}

void CreateBackupResourcePackageResponse::setPeriodType(const std::string& value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool CreateBackupResourcePackageResponse::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void CreateBackupResourcePackageResponse::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

int32_t CreateBackupResourcePackageResponse::getPeriodNum() const
{
    return periodNum_;
}

void CreateBackupResourcePackageResponse::setPeriodNum(int32_t value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool CreateBackupResourcePackageResponse::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void CreateBackupResourcePackageResponse::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

}
}
}
}
}


