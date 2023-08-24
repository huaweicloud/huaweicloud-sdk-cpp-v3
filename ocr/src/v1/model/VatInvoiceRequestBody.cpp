

#include "huaweicloud/ocr/v1/model/VatInvoiceRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




VatInvoiceRequestBody::VatInvoiceRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    advancedMode_ = false;
    advancedModeIsSet_ = false;
    returnTextLocation_ = false;
    returnTextLocationIsSet_ = false;
    pageNum_ = 0;
    pageNumIsSet_ = false;
}

VatInvoiceRequestBody::~VatInvoiceRequestBody() = default;

void VatInvoiceRequestBody::validate()
{
}

web::json::value VatInvoiceRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(advancedModeIsSet_) {
        val[utility::conversions::to_string_t("advanced_mode")] = ModelBase::toJson(advancedMode_);
    }
    if(returnTextLocationIsSet_) {
        val[utility::conversions::to_string_t("return_text_location")] = ModelBase::toJson(returnTextLocation_);
    }
    if(pageNumIsSet_) {
        val[utility::conversions::to_string_t("page_num")] = ModelBase::toJson(pageNum_);
    }

    return val;
}

bool VatInvoiceRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("advanced_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("advanced_mode"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdvancedMode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("page_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNum(refVal);
        }
    }
    return ok;
}

std::string VatInvoiceRequestBody::getImage() const
{
    return image_;
}

void VatInvoiceRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool VatInvoiceRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void VatInvoiceRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string VatInvoiceRequestBody::getUrl() const
{
    return url_;
}

void VatInvoiceRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool VatInvoiceRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void VatInvoiceRequestBody::unseturl()
{
    urlIsSet_ = false;
}

bool VatInvoiceRequestBody::isAdvancedMode() const
{
    return advancedMode_;
}

void VatInvoiceRequestBody::setAdvancedMode(bool value)
{
    advancedMode_ = value;
    advancedModeIsSet_ = true;
}

bool VatInvoiceRequestBody::advancedModeIsSet() const
{
    return advancedModeIsSet_;
}

void VatInvoiceRequestBody::unsetadvancedMode()
{
    advancedModeIsSet_ = false;
}

bool VatInvoiceRequestBody::isReturnTextLocation() const
{
    return returnTextLocation_;
}

void VatInvoiceRequestBody::setReturnTextLocation(bool value)
{
    returnTextLocation_ = value;
    returnTextLocationIsSet_ = true;
}

bool VatInvoiceRequestBody::returnTextLocationIsSet() const
{
    return returnTextLocationIsSet_;
}

void VatInvoiceRequestBody::unsetreturnTextLocation()
{
    returnTextLocationIsSet_ = false;
}

int32_t VatInvoiceRequestBody::getPageNum() const
{
    return pageNum_;
}

void VatInvoiceRequestBody::setPageNum(int32_t value)
{
    pageNum_ = value;
    pageNumIsSet_ = true;
}

bool VatInvoiceRequestBody::pageNumIsSet() const
{
    return pageNumIsSet_;
}

void VatInvoiceRequestBody::unsetpageNum()
{
    pageNumIsSet_ = false;
}

}
}
}
}
}


