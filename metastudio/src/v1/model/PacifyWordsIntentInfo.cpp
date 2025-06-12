

#include "huaweicloud/metastudio/v1/model/PacifyWordsIntentInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




PacifyWordsIntentInfo::PacifyWordsIntentInfo()
{
    intent_ = "";
    intentIsSet_ = false;
    descCn_ = "";
    descCnIsSet_ = false;
    descEn_ = "";
    descEnIsSet_ = false;
}

PacifyWordsIntentInfo::~PacifyWordsIntentInfo() = default;

void PacifyWordsIntentInfo::validate()
{
}

web::json::value PacifyWordsIntentInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(intentIsSet_) {
        val[utility::conversions::to_string_t("intent")] = ModelBase::toJson(intent_);
    }
    if(descCnIsSet_) {
        val[utility::conversions::to_string_t("desc_cn")] = ModelBase::toJson(descCn_);
    }
    if(descEnIsSet_) {
        val[utility::conversions::to_string_t("desc_en")] = ModelBase::toJson(descEn_);
    }

    return val;
}
bool PacifyWordsIntentInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("intent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("intent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIntent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("desc_cn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("desc_cn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescCn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("desc_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("desc_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescEn(refVal);
        }
    }
    return ok;
}


std::string PacifyWordsIntentInfo::getIntent() const
{
    return intent_;
}

void PacifyWordsIntentInfo::setIntent(const std::string& value)
{
    intent_ = value;
    intentIsSet_ = true;
}

bool PacifyWordsIntentInfo::intentIsSet() const
{
    return intentIsSet_;
}

void PacifyWordsIntentInfo::unsetintent()
{
    intentIsSet_ = false;
}

std::string PacifyWordsIntentInfo::getDescCn() const
{
    return descCn_;
}

void PacifyWordsIntentInfo::setDescCn(const std::string& value)
{
    descCn_ = value;
    descCnIsSet_ = true;
}

bool PacifyWordsIntentInfo::descCnIsSet() const
{
    return descCnIsSet_;
}

void PacifyWordsIntentInfo::unsetdescCn()
{
    descCnIsSet_ = false;
}

std::string PacifyWordsIntentInfo::getDescEn() const
{
    return descEn_;
}

void PacifyWordsIntentInfo::setDescEn(const std::string& value)
{
    descEn_ = value;
    descEnIsSet_ = true;
}

bool PacifyWordsIntentInfo::descEnIsSet() const
{
    return descEnIsSet_;
}

void PacifyWordsIntentInfo::unsetdescEn()
{
    descEnIsSet_ = false;
}

}
}
}
}
}


