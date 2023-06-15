

#include "huaweicloud/live/v2/model/HttpCode.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




HttpCode::HttpCode()
{
    code_ = 0;
    codeIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    proportion_ = 0.0;
    proportionIsSet_ = false;
}

HttpCode::~HttpCode() = default;

void HttpCode::validate()
{
}

web::json::value HttpCode::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(proportionIsSet_) {
        val[utility::conversions::to_string_t("proportion")] = ModelBase::toJson(proportion_);
    }

    return val;
}

bool HttpCode::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proportion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proportion"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProportion(refVal);
        }
    }
    return ok;
}


int32_t HttpCode::getCode() const
{
    return code_;
}

void HttpCode::setCode(int32_t value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool HttpCode::codeIsSet() const
{
    return codeIsSet_;
}

void HttpCode::unsetcode()
{
    codeIsSet_ = false;
}

int32_t HttpCode::getCount() const
{
    return count_;
}

void HttpCode::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool HttpCode::countIsSet() const
{
    return countIsSet_;
}

void HttpCode::unsetcount()
{
    countIsSet_ = false;
}

double HttpCode::getProportion() const
{
    return proportion_;
}

void HttpCode::setProportion(double value)
{
    proportion_ = value;
    proportionIsSet_ = true;
}

bool HttpCode::proportionIsSet() const
{
    return proportionIsSet_;
}

void HttpCode::unsetproportion()
{
    proportionIsSet_ = false;
}

}
}
}
}
}


