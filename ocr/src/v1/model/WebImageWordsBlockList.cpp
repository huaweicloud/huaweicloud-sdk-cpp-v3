

#include "huaweicloud/ocr/v1/model/WebImageWordsBlockList.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




WebImageWordsBlockList::WebImageWordsBlockList()
{
    words_ = "";
    wordsIsSet_ = false;
    confidence_ = 0.0f;
    confidenceIsSet_ = false;
    locationIsSet_ = false;
    extractedDataIsSet_ = false;
    contactInfoIsSet_ = false;
    imageSizeIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
    width_ = 0;
    widthIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    phone_ = "";
    phoneIsSet_ = false;
    province_ = "";
    provinceIsSet_ = false;
    city_ = "";
    cityIsSet_ = false;
    district_ = "";
    districtIsSet_ = false;
    detailAddress_ = "";
    detailAddressIsSet_ = false;
    fontListIsSet_ = false;
    fontScoresIsSet_ = false;
}

WebImageWordsBlockList::~WebImageWordsBlockList() = default;

void WebImageWordsBlockList::validate()
{
}

web::json::value WebImageWordsBlockList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(wordsIsSet_) {
        val[utility::conversions::to_string_t("words")] = ModelBase::toJson(words_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }
    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }
    if(extractedDataIsSet_) {
        val[utility::conversions::to_string_t("extracted_data")] = ModelBase::toJson(extractedData_);
    }
    if(contactInfoIsSet_) {
        val[utility::conversions::to_string_t("contact_info")] = ModelBase::toJson(contactInfo_);
    }
    if(imageSizeIsSet_) {
        val[utility::conversions::to_string_t("image_size")] = ModelBase::toJson(imageSize_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(phoneIsSet_) {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(phone_);
    }
    if(provinceIsSet_) {
        val[utility::conversions::to_string_t("province")] = ModelBase::toJson(province_);
    }
    if(cityIsSet_) {
        val[utility::conversions::to_string_t("city")] = ModelBase::toJson(city_);
    }
    if(districtIsSet_) {
        val[utility::conversions::to_string_t("district")] = ModelBase::toJson(district_);
    }
    if(detailAddressIsSet_) {
        val[utility::conversions::to_string_t("detail_address")] = ModelBase::toJson(detailAddress_);
    }
    if(fontListIsSet_) {
        val[utility::conversions::to_string_t("font_list")] = ModelBase::toJson(fontList_);
    }
    if(fontScoresIsSet_) {
        val[utility::conversions::to_string_t("font_scores")] = ModelBase::toJson(fontScores_);
    }

    return val;
}

bool WebImageWordsBlockList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("words"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("words"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidence(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<int32_t>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extracted_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extracted_data"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtractedData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("contact_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("contact_info"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContactInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_size"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageSize(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("province"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("province"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProvince(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("city"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("city"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("district"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("district"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDistrict(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detail_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetailAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("font_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("font_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFontList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("font_scores"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("font_scores"));
        if(!fieldValue.is_null())
        {
            std::vector<float> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFontScores(refVal);
        }
    }
    return ok;
}


std::string WebImageWordsBlockList::getWords() const
{
    return words_;
}

void WebImageWordsBlockList::setWords(const std::string& value)
{
    words_ = value;
    wordsIsSet_ = true;
}

bool WebImageWordsBlockList::wordsIsSet() const
{
    return wordsIsSet_;
}

void WebImageWordsBlockList::unsetwords()
{
    wordsIsSet_ = false;
}

float WebImageWordsBlockList::getConfidence() const
{
    return confidence_;
}

void WebImageWordsBlockList::setConfidence(float value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool WebImageWordsBlockList::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void WebImageWordsBlockList::unsetconfidence()
{
    confidenceIsSet_ = false;
}

std::vector<std::vector<int32_t>>& WebImageWordsBlockList::getLocation()
{
    return location_;
}

void WebImageWordsBlockList::setLocation(const std::vector<std::vector<int32_t>>& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool WebImageWordsBlockList::locationIsSet() const
{
    return locationIsSet_;
}

void WebImageWordsBlockList::unsetlocation()
{
    locationIsSet_ = false;
}

Object WebImageWordsBlockList::getExtractedData() const
{
    return extractedData_;
}

void WebImageWordsBlockList::setExtractedData(const Object& value)
{
    extractedData_ = value;
    extractedDataIsSet_ = true;
}

bool WebImageWordsBlockList::extractedDataIsSet() const
{
    return extractedDataIsSet_;
}

void WebImageWordsBlockList::unsetextractedData()
{
    extractedDataIsSet_ = false;
}

Object WebImageWordsBlockList::getContactInfo() const
{
    return contactInfo_;
}

void WebImageWordsBlockList::setContactInfo(const Object& value)
{
    contactInfo_ = value;
    contactInfoIsSet_ = true;
}

bool WebImageWordsBlockList::contactInfoIsSet() const
{
    return contactInfoIsSet_;
}

void WebImageWordsBlockList::unsetcontactInfo()
{
    contactInfoIsSet_ = false;
}

Object WebImageWordsBlockList::getImageSize() const
{
    return imageSize_;
}

void WebImageWordsBlockList::setImageSize(const Object& value)
{
    imageSize_ = value;
    imageSizeIsSet_ = true;
}

bool WebImageWordsBlockList::imageSizeIsSet() const
{
    return imageSizeIsSet_;
}

void WebImageWordsBlockList::unsetimageSize()
{
    imageSizeIsSet_ = false;
}

int32_t WebImageWordsBlockList::getHeight() const
{
    return height_;
}

void WebImageWordsBlockList::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool WebImageWordsBlockList::heightIsSet() const
{
    return heightIsSet_;
}

void WebImageWordsBlockList::unsetheight()
{
    heightIsSet_ = false;
}

int32_t WebImageWordsBlockList::getWidth() const
{
    return width_;
}

void WebImageWordsBlockList::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool WebImageWordsBlockList::widthIsSet() const
{
    return widthIsSet_;
}

void WebImageWordsBlockList::unsetwidth()
{
    widthIsSet_ = false;
}

std::string WebImageWordsBlockList::getName() const
{
    return name_;
}

void WebImageWordsBlockList::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WebImageWordsBlockList::nameIsSet() const
{
    return nameIsSet_;
}

void WebImageWordsBlockList::unsetname()
{
    nameIsSet_ = false;
}

std::string WebImageWordsBlockList::getPhone() const
{
    return phone_;
}

void WebImageWordsBlockList::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool WebImageWordsBlockList::phoneIsSet() const
{
    return phoneIsSet_;
}

void WebImageWordsBlockList::unsetphone()
{
    phoneIsSet_ = false;
}

std::string WebImageWordsBlockList::getProvince() const
{
    return province_;
}

void WebImageWordsBlockList::setProvince(const std::string& value)
{
    province_ = value;
    provinceIsSet_ = true;
}

bool WebImageWordsBlockList::provinceIsSet() const
{
    return provinceIsSet_;
}

void WebImageWordsBlockList::unsetprovince()
{
    provinceIsSet_ = false;
}

std::string WebImageWordsBlockList::getCity() const
{
    return city_;
}

void WebImageWordsBlockList::setCity(const std::string& value)
{
    city_ = value;
    cityIsSet_ = true;
}

bool WebImageWordsBlockList::cityIsSet() const
{
    return cityIsSet_;
}

void WebImageWordsBlockList::unsetcity()
{
    cityIsSet_ = false;
}

std::string WebImageWordsBlockList::getDistrict() const
{
    return district_;
}

void WebImageWordsBlockList::setDistrict(const std::string& value)
{
    district_ = value;
    districtIsSet_ = true;
}

bool WebImageWordsBlockList::districtIsSet() const
{
    return districtIsSet_;
}

void WebImageWordsBlockList::unsetdistrict()
{
    districtIsSet_ = false;
}

std::string WebImageWordsBlockList::getDetailAddress() const
{
    return detailAddress_;
}

void WebImageWordsBlockList::setDetailAddress(const std::string& value)
{
    detailAddress_ = value;
    detailAddressIsSet_ = true;
}

bool WebImageWordsBlockList::detailAddressIsSet() const
{
    return detailAddressIsSet_;
}

void WebImageWordsBlockList::unsetdetailAddress()
{
    detailAddressIsSet_ = false;
}

std::vector<std::string>& WebImageWordsBlockList::getFontList()
{
    return fontList_;
}

void WebImageWordsBlockList::setFontList(const std::vector<std::string>& value)
{
    fontList_ = value;
    fontListIsSet_ = true;
}

bool WebImageWordsBlockList::fontListIsSet() const
{
    return fontListIsSet_;
}

void WebImageWordsBlockList::unsetfontList()
{
    fontListIsSet_ = false;
}

std::vector<float>& WebImageWordsBlockList::getFontScores()
{
    return fontScores_;
}

void WebImageWordsBlockList::setFontScores(std::vector<float> value)
{
    fontScores_ = value;
    fontScoresIsSet_ = true;
}

bool WebImageWordsBlockList::fontScoresIsSet() const
{
    return fontScoresIsSet_;
}

void WebImageWordsBlockList::unsetfontScores()
{
    fontScoresIsSet_ = false;
}

}
}
}
}
}


