

#include "huaweicloud/ocr/v1/model/FinancialStatementRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




FinancialStatementRequestBody::FinancialStatementRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    returnTextLocation_ = false;
    returnTextLocationIsSet_ = false;
    returnConfidence_ = false;
    returnConfidenceIsSet_ = false;
    returnExcel_ = false;
    returnExcelIsSet_ = false;
    returnTableLocation_ = false;
    returnTableLocationIsSet_ = false;
    returnImageSize_ = false;
    returnImageSizeIsSet_ = false;
    returnRectificationMatrix_ = false;
    returnRectificationMatrixIsSet_ = false;
}

FinancialStatementRequestBody::~FinancialStatementRequestBody() = default;

void FinancialStatementRequestBody::validate()
{
}

web::json::value FinancialStatementRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(returnTextLocationIsSet_) {
        val[utility::conversions::to_string_t("return_text_location")] = ModelBase::toJson(returnTextLocation_);
    }
    if(returnConfidenceIsSet_) {
        val[utility::conversions::to_string_t("return_confidence")] = ModelBase::toJson(returnConfidence_);
    }
    if(returnExcelIsSet_) {
        val[utility::conversions::to_string_t("return_excel")] = ModelBase::toJson(returnExcel_);
    }
    if(returnTableLocationIsSet_) {
        val[utility::conversions::to_string_t("return_table_location")] = ModelBase::toJson(returnTableLocation_);
    }
    if(returnImageSizeIsSet_) {
        val[utility::conversions::to_string_t("return_image_size")] = ModelBase::toJson(returnImageSize_);
    }
    if(returnRectificationMatrixIsSet_) {
        val[utility::conversions::to_string_t("return_rectification_matrix")] = ModelBase::toJson(returnRectificationMatrix_);
    }

    return val;
}

bool FinancialStatementRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("return_text_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_text_location"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnTextLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("return_confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_confidence"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnConfidence(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("return_excel"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_excel"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnExcel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("return_table_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_table_location"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnTableLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("return_image_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_image_size"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnImageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("return_rectification_matrix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_rectification_matrix"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnRectificationMatrix(refVal);
        }
    }
    return ok;
}

std::string FinancialStatementRequestBody::getImage() const
{
    return image_;
}

void FinancialStatementRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool FinancialStatementRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void FinancialStatementRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string FinancialStatementRequestBody::getUrl() const
{
    return url_;
}

void FinancialStatementRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool FinancialStatementRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void FinancialStatementRequestBody::unseturl()
{
    urlIsSet_ = false;
}

bool FinancialStatementRequestBody::isReturnTextLocation() const
{
    return returnTextLocation_;
}

void FinancialStatementRequestBody::setReturnTextLocation(bool value)
{
    returnTextLocation_ = value;
    returnTextLocationIsSet_ = true;
}

bool FinancialStatementRequestBody::returnTextLocationIsSet() const
{
    return returnTextLocationIsSet_;
}

void FinancialStatementRequestBody::unsetreturnTextLocation()
{
    returnTextLocationIsSet_ = false;
}

bool FinancialStatementRequestBody::isReturnConfidence() const
{
    return returnConfidence_;
}

void FinancialStatementRequestBody::setReturnConfidence(bool value)
{
    returnConfidence_ = value;
    returnConfidenceIsSet_ = true;
}

bool FinancialStatementRequestBody::returnConfidenceIsSet() const
{
    return returnConfidenceIsSet_;
}

void FinancialStatementRequestBody::unsetreturnConfidence()
{
    returnConfidenceIsSet_ = false;
}

bool FinancialStatementRequestBody::isReturnExcel() const
{
    return returnExcel_;
}

void FinancialStatementRequestBody::setReturnExcel(bool value)
{
    returnExcel_ = value;
    returnExcelIsSet_ = true;
}

bool FinancialStatementRequestBody::returnExcelIsSet() const
{
    return returnExcelIsSet_;
}

void FinancialStatementRequestBody::unsetreturnExcel()
{
    returnExcelIsSet_ = false;
}

bool FinancialStatementRequestBody::isReturnTableLocation() const
{
    return returnTableLocation_;
}

void FinancialStatementRequestBody::setReturnTableLocation(bool value)
{
    returnTableLocation_ = value;
    returnTableLocationIsSet_ = true;
}

bool FinancialStatementRequestBody::returnTableLocationIsSet() const
{
    return returnTableLocationIsSet_;
}

void FinancialStatementRequestBody::unsetreturnTableLocation()
{
    returnTableLocationIsSet_ = false;
}

bool FinancialStatementRequestBody::isReturnImageSize() const
{
    return returnImageSize_;
}

void FinancialStatementRequestBody::setReturnImageSize(bool value)
{
    returnImageSize_ = value;
    returnImageSizeIsSet_ = true;
}

bool FinancialStatementRequestBody::returnImageSizeIsSet() const
{
    return returnImageSizeIsSet_;
}

void FinancialStatementRequestBody::unsetreturnImageSize()
{
    returnImageSizeIsSet_ = false;
}

bool FinancialStatementRequestBody::isReturnRectificationMatrix() const
{
    return returnRectificationMatrix_;
}

void FinancialStatementRequestBody::setReturnRectificationMatrix(bool value)
{
    returnRectificationMatrix_ = value;
    returnRectificationMatrixIsSet_ = true;
}

bool FinancialStatementRequestBody::returnRectificationMatrixIsSet() const
{
    return returnRectificationMatrixIsSet_;
}

void FinancialStatementRequestBody::unsetreturnRectificationMatrix()
{
    returnRectificationMatrixIsSet_ = false;
}

}
}
}
}
}


