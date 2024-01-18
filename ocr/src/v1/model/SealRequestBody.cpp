

#include "huaweicloud/ocr/v1/model/SealRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




SealRequestBody::SealRequestBody()
{
    data_ = "";
    dataIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    returnSealImage_ = false;
    returnSealImageIsSet_ = false;
    returnErasedSealImage_ = false;
    returnErasedSealImageIsSet_ = false;
    pdfPageNumber_ = 0;
    pdfPageNumberIsSet_ = false;
}

SealRequestBody::~SealRequestBody() = default;

void SealRequestBody::validate()
{
}

web::json::value SealRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(returnSealImageIsSet_) {
        val[utility::conversions::to_string_t("return_seal_image")] = ModelBase::toJson(returnSealImage_);
    }
    if(returnErasedSealImageIsSet_) {
        val[utility::conversions::to_string_t("return_erased_seal_image")] = ModelBase::toJson(returnErasedSealImage_);
    }
    if(pdfPageNumberIsSet_) {
        val[utility::conversions::to_string_t("pdf_page_number")] = ModelBase::toJson(pdfPageNumber_);
    }

    return val;
}
bool SealRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("return_seal_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_seal_image"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnSealImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("return_erased_seal_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_erased_seal_image"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnErasedSealImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pdf_page_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pdf_page_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPdfPageNumber(refVal);
        }
    }
    return ok;
}


std::string SealRequestBody::getData() const
{
    return data_;
}

void SealRequestBody::setData(const std::string& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SealRequestBody::dataIsSet() const
{
    return dataIsSet_;
}

void SealRequestBody::unsetdata()
{
    dataIsSet_ = false;
}

std::string SealRequestBody::getUrl() const
{
    return url_;
}

void SealRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool SealRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void SealRequestBody::unseturl()
{
    urlIsSet_ = false;
}

bool SealRequestBody::isReturnSealImage() const
{
    return returnSealImage_;
}

void SealRequestBody::setReturnSealImage(bool value)
{
    returnSealImage_ = value;
    returnSealImageIsSet_ = true;
}

bool SealRequestBody::returnSealImageIsSet() const
{
    return returnSealImageIsSet_;
}

void SealRequestBody::unsetreturnSealImage()
{
    returnSealImageIsSet_ = false;
}

bool SealRequestBody::isReturnErasedSealImage() const
{
    return returnErasedSealImage_;
}

void SealRequestBody::setReturnErasedSealImage(bool value)
{
    returnErasedSealImage_ = value;
    returnErasedSealImageIsSet_ = true;
}

bool SealRequestBody::returnErasedSealImageIsSet() const
{
    return returnErasedSealImageIsSet_;
}

void SealRequestBody::unsetreturnErasedSealImage()
{
    returnErasedSealImageIsSet_ = false;
}

int32_t SealRequestBody::getPdfPageNumber() const
{
    return pdfPageNumber_;
}

void SealRequestBody::setPdfPageNumber(int32_t value)
{
    pdfPageNumber_ = value;
    pdfPageNumberIsSet_ = true;
}

bool SealRequestBody::pdfPageNumberIsSet() const
{
    return pdfPageNumberIsSet_;
}

void SealRequestBody::unsetpdfPageNumber()
{
    pdfPageNumberIsSet_ = false;
}

}
}
}
}
}


