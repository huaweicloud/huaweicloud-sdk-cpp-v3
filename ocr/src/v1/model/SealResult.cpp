

#include "huaweicloud/ocr/v1/model/SealResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




SealResult::SealResult()
{
    sealListIsSet_ = false;
    erasedSealImage_ = "";
    erasedSealImageIsSet_ = false;
}

SealResult::~SealResult() = default;

void SealResult::validate()
{
}

web::json::value SealResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sealListIsSet_) {
        val[utility::conversions::to_string_t("seal_list")] = ModelBase::toJson(sealList_);
    }
    if(erasedSealImageIsSet_) {
        val[utility::conversions::to_string_t("erased_seal_image")] = ModelBase::toJson(erasedSealImage_);
    }

    return val;
}
bool SealResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("seal_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("seal_list"));
        if(!fieldValue.is_null())
        {
            std::vector<SealList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSealList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("erased_seal_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("erased_seal_image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErasedSealImage(refVal);
        }
    }
    return ok;
}


std::vector<SealList>& SealResult::getSealList()
{
    return sealList_;
}

void SealResult::setSealList(const std::vector<SealList>& value)
{
    sealList_ = value;
    sealListIsSet_ = true;
}

bool SealResult::sealListIsSet() const
{
    return sealListIsSet_;
}

void SealResult::unsetsealList()
{
    sealListIsSet_ = false;
}

std::string SealResult::getErasedSealImage() const
{
    return erasedSealImage_;
}

void SealResult::setErasedSealImage(const std::string& value)
{
    erasedSealImage_ = value;
    erasedSealImageIsSet_ = true;
}

bool SealResult::erasedSealImageIsSet() const
{
    return erasedSealImageIsSet_;
}

void SealResult::unseterasedSealImage()
{
    erasedSealImageIsSet_ = false;
}

}
}
}
}
}


