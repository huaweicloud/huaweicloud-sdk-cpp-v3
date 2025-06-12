

#include "huaweicloud/metastudio/v1/model/UpdateHotWordsReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateHotWordsReq::UpdateHotWordsReq()
{
    hotWordsTypeIsSet_ = false;
    sisHotWordsIsSet_ = false;
}

UpdateHotWordsReq::~UpdateHotWordsReq() = default;

void UpdateHotWordsReq::validate()
{
}

web::json::value UpdateHotWordsReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hotWordsTypeIsSet_) {
        val[utility::conversions::to_string_t("hot_words_type")] = ModelBase::toJson(hotWordsType_);
    }
    if(sisHotWordsIsSet_) {
        val[utility::conversions::to_string_t("sis_hot_words")] = ModelBase::toJson(sisHotWords_);
    }

    return val;
}
bool UpdateHotWordsReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hot_words_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hot_words_type"));
        if(!fieldValue.is_null())
        {
            HotWordsTypeEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHotWordsType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sis_hot_words"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sis_hot_words"));
        if(!fieldValue.is_null())
        {
            UpdateSisHotWords refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSisHotWords(refVal);
        }
    }
    return ok;
}


HotWordsTypeEnum UpdateHotWordsReq::getHotWordsType() const
{
    return hotWordsType_;
}

void UpdateHotWordsReq::setHotWordsType(const HotWordsTypeEnum& value)
{
    hotWordsType_ = value;
    hotWordsTypeIsSet_ = true;
}

bool UpdateHotWordsReq::hotWordsTypeIsSet() const
{
    return hotWordsTypeIsSet_;
}

void UpdateHotWordsReq::unsethotWordsType()
{
    hotWordsTypeIsSet_ = false;
}

UpdateSisHotWords UpdateHotWordsReq::getSisHotWords() const
{
    return sisHotWords_;
}

void UpdateHotWordsReq::setSisHotWords(const UpdateSisHotWords& value)
{
    sisHotWords_ = value;
    sisHotWordsIsSet_ = true;
}

bool UpdateHotWordsReq::sisHotWordsIsSet() const
{
    return sisHotWordsIsSet_;
}

void UpdateHotWordsReq::unsetsisHotWords()
{
    sisHotWordsIsSet_ = false;
}

}
}
}
}
}


