

#include "huaweicloud/ocr/v1/model/FinancialStatementResult_image_size.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




FinancialStatementResult_image_size::FinancialStatementResult_image_size()
{
    height_ = 0;
    heightIsSet_ = false;
    width_ = 0;
    widthIsSet_ = false;
}

FinancialStatementResult_image_size::~FinancialStatementResult_image_size() = default;

void FinancialStatementResult_image_size::validate()
{
}

web::json::value FinancialStatementResult_image_size::toJson() const
{
    web::json::value val = web::json::value::object();

    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }

    return val;
}

bool FinancialStatementResult_image_size::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("height"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("height"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("width"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("width"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWidth(refVal);
        }
    }
    return ok;
}

int32_t FinancialStatementResult_image_size::getHeight() const
{
    return height_;
}

void FinancialStatementResult_image_size::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool FinancialStatementResult_image_size::heightIsSet() const
{
    return heightIsSet_;
}

void FinancialStatementResult_image_size::unsetheight()
{
    heightIsSet_ = false;
}

int32_t FinancialStatementResult_image_size::getWidth() const
{
    return width_;
}

void FinancialStatementResult_image_size::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool FinancialStatementResult_image_size::widthIsSet() const
{
    return widthIsSet_;
}

void FinancialStatementResult_image_size::unsetwidth()
{
    widthIsSet_ = false;
}

}
}
}
}
}


