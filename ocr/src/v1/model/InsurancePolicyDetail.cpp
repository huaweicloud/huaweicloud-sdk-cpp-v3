

#include "huaweicloud/ocr/v1/model/InsurancePolicyDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




InsurancePolicyDetail::InsurancePolicyDetail()
{
    words_ = "";
    wordsIsSet_ = false;
    locationIsSet_ = false;
}

InsurancePolicyDetail::~InsurancePolicyDetail() = default;

void InsurancePolicyDetail::validate()
{
}

web::json::value InsurancePolicyDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(wordsIsSet_) {
        val[utility::conversions::to_string_t("words")] = ModelBase::toJson(words_);
    }
    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }

    return val;
}
bool InsurancePolicyDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<int32_t>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocation(refVal);
        }
    }
    return ok;
}


std::string InsurancePolicyDetail::getWords() const
{
    return words_;
}

void InsurancePolicyDetail::setWords(const std::string& value)
{
    words_ = value;
    wordsIsSet_ = true;
}

bool InsurancePolicyDetail::wordsIsSet() const
{
    return wordsIsSet_;
}

void InsurancePolicyDetail::unsetwords()
{
    wordsIsSet_ = false;
}

std::vector<std::vector<int32_t>>& InsurancePolicyDetail::getLocation()
{
    return location_;
}

void InsurancePolicyDetail::setLocation(const std::vector<std::vector<int32_t>>& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool InsurancePolicyDetail::locationIsSet() const
{
    return locationIsSet_;
}

void InsurancePolicyDetail::unsetlocation()
{
    locationIsSet_ = false;
}

}
}
}
}
}


