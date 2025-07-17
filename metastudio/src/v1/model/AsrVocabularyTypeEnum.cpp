

#include "huaweicloud/metastudio/v1/model/AsrVocabularyTypeEnum.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {



AsrVocabularyTypeEnum::AsrVocabularyTypeEnum()
{
}

AsrVocabularyTypeEnum::~AsrVocabularyTypeEnum()
{
}

void AsrVocabularyTypeEnum::validate()
{
}

web::json::value AsrVocabularyTypeEnum::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eAsrVocabularyTypeEnum::AsrVocabularyTypeEnum_MOBVOI) val = web::json::value::string(U("MOBVOI"));

    return val;
}

bool AsrVocabularyTypeEnum::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("MOBVOI")) value_ = eAsrVocabularyTypeEnum::AsrVocabularyTypeEnum_MOBVOI;
    return true;
}

AsrVocabularyTypeEnum::eAsrVocabularyTypeEnum AsrVocabularyTypeEnum::getValue() const
{
   return value_;
}

void AsrVocabularyTypeEnum::setValue(AsrVocabularyTypeEnum::eAsrVocabularyTypeEnum const value)
{
   value_ = value;
}


}
}
}
}
}


