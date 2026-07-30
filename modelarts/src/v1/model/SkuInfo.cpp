

#include "huaweicloud/modelarts/v1/model/SkuInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




SkuInfo::SkuInfo()
{
    code_ = "";
    codeIsSet_ = false;
    period_ = "";
    periodIsSet_ = false;
    queriesLimit_ = 0L;
    queriesLimitIsSet_ = false;
    price_ = 0.0f;
    priceIsSet_ = false;
}

SkuInfo::~SkuInfo() = default;

void SkuInfo::validate()
{
}

web::json::value SkuInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }
    if(queriesLimitIsSet_) {
        val[utility::conversions::to_string_t("queries_limit")] = ModelBase::toJson(queriesLimit_);
    }
    if(priceIsSet_) {
        val[utility::conversions::to_string_t("price")] = ModelBase::toJson(price_);
    }

    return val;
}
bool SkuInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("queries_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("queries_limit"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueriesLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("price"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("price"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrice(refVal);
        }
    }
    return ok;
}


std::string SkuInfo::getCode() const
{
    return code_;
}

void SkuInfo::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool SkuInfo::codeIsSet() const
{
    return codeIsSet_;
}

void SkuInfo::unsetcode()
{
    codeIsSet_ = false;
}

std::string SkuInfo::getPeriod() const
{
    return period_;
}

void SkuInfo::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool SkuInfo::periodIsSet() const
{
    return periodIsSet_;
}

void SkuInfo::unsetperiod()
{
    periodIsSet_ = false;
}

int64_t SkuInfo::getQueriesLimit() const
{
    return queriesLimit_;
}

void SkuInfo::setQueriesLimit(int64_t value)
{
    queriesLimit_ = value;
    queriesLimitIsSet_ = true;
}

bool SkuInfo::queriesLimitIsSet() const
{
    return queriesLimitIsSet_;
}

void SkuInfo::unsetqueriesLimit()
{
    queriesLimitIsSet_ = false;
}

float SkuInfo::getPrice() const
{
    return price_;
}

void SkuInfo::setPrice(float value)
{
    price_ = value;
    priceIsSet_ = true;
}

bool SkuInfo::priceIsSet() const
{
    return priceIsSet_;
}

void SkuInfo::unsetprice()
{
    priceIsSet_ = false;
}

}
}
}
}
}


