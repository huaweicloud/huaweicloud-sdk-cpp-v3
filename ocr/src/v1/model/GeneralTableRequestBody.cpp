

#include "huaweicloud/ocr/v1/model/GeneralTableRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




GeneralTableRequestBody::GeneralTableRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    returnTextLocation_ = false;
    returnTextLocationIsSet_ = false;
    returnCharLocation_ = false;
    returnCharLocationIsSet_ = false;
    returnConfidence_ = false;
    returnConfidenceIsSet_ = false;
    returnExcel_ = false;
    returnExcelIsSet_ = false;
    returnRectificationMatrix_ = false;
    returnRectificationMatrixIsSet_ = false;
}

GeneralTableRequestBody::~GeneralTableRequestBody() = default;

void GeneralTableRequestBody::validate()
{
}

web::json::value GeneralTableRequestBody::toJson() const
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
    if(returnCharLocationIsSet_) {
        val[utility::conversions::to_string_t("return_char_location")] = ModelBase::toJson(returnCharLocation_);
    }
    if(returnConfidenceIsSet_) {
        val[utility::conversions::to_string_t("return_confidence")] = ModelBase::toJson(returnConfidence_);
    }
    if(returnExcelIsSet_) {
        val[utility::conversions::to_string_t("return_excel")] = ModelBase::toJson(returnExcel_);
    }
    if(returnRectificationMatrixIsSet_) {
        val[utility::conversions::to_string_t("return_rectification_matrix")] = ModelBase::toJson(returnRectificationMatrix_);
    }

    return val;
}
bool GeneralTableRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("return_char_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_char_location"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnCharLocation(refVal);
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


std::string GeneralTableRequestBody::getImage() const
{
    return image_;
}

void GeneralTableRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool GeneralTableRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void GeneralTableRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string GeneralTableRequestBody::getUrl() const
{
    return url_;
}

void GeneralTableRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool GeneralTableRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void GeneralTableRequestBody::unseturl()
{
    urlIsSet_ = false;
}

bool GeneralTableRequestBody::isReturnTextLocation() const
{
    return returnTextLocation_;
}

void GeneralTableRequestBody::setReturnTextLocation(bool value)
{
    returnTextLocation_ = value;
    returnTextLocationIsSet_ = true;
}

bool GeneralTableRequestBody::returnTextLocationIsSet() const
{
    return returnTextLocationIsSet_;
}

void GeneralTableRequestBody::unsetreturnTextLocation()
{
    returnTextLocationIsSet_ = false;
}

bool GeneralTableRequestBody::isReturnCharLocation() const
{
    return returnCharLocation_;
}

void GeneralTableRequestBody::setReturnCharLocation(bool value)
{
    returnCharLocation_ = value;
    returnCharLocationIsSet_ = true;
}

bool GeneralTableRequestBody::returnCharLocationIsSet() const
{
    return returnCharLocationIsSet_;
}

void GeneralTableRequestBody::unsetreturnCharLocation()
{
    returnCharLocationIsSet_ = false;
}

bool GeneralTableRequestBody::isReturnConfidence() const
{
    return returnConfidence_;
}

void GeneralTableRequestBody::setReturnConfidence(bool value)
{
    returnConfidence_ = value;
    returnConfidenceIsSet_ = true;
}

bool GeneralTableRequestBody::returnConfidenceIsSet() const
{
    return returnConfidenceIsSet_;
}

void GeneralTableRequestBody::unsetreturnConfidence()
{
    returnConfidenceIsSet_ = false;
}

bool GeneralTableRequestBody::isReturnExcel() const
{
    return returnExcel_;
}

void GeneralTableRequestBody::setReturnExcel(bool value)
{
    returnExcel_ = value;
    returnExcelIsSet_ = true;
}

bool GeneralTableRequestBody::returnExcelIsSet() const
{
    return returnExcelIsSet_;
}

void GeneralTableRequestBody::unsetreturnExcel()
{
    returnExcelIsSet_ = false;
}

bool GeneralTableRequestBody::isReturnRectificationMatrix() const
{
    return returnRectificationMatrix_;
}

void GeneralTableRequestBody::setReturnRectificationMatrix(bool value)
{
    returnRectificationMatrix_ = value;
    returnRectificationMatrixIsSet_ = true;
}

bool GeneralTableRequestBody::returnRectificationMatrixIsSet() const
{
    return returnRectificationMatrixIsSet_;
}

void GeneralTableRequestBody::unsetreturnRectificationMatrix()
{
    returnRectificationMatrixIsSet_ = false;
}

}
}
}
}
}


