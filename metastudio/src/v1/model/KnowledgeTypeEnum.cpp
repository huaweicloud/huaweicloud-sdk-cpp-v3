

#include "huaweicloud/metastudio/v1/model/KnowledgeTypeEnum.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {



KnowledgeTypeEnum::KnowledgeTypeEnum()
{
}

KnowledgeTypeEnum::~KnowledgeTypeEnum()
{
}

void KnowledgeTypeEnum::validate()
{
}

web::json::value KnowledgeTypeEnum::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eKnowledgeTypeEnum::KnowledgeTypeEnum_QUESTION_ANSWER) val = web::json::value::string(U("QUESTION_ANSWER"));
    if (value_ == eKnowledgeTypeEnum::KnowledgeTypeEnum_DOCUMENT) val = web::json::value::string(U("DOCUMENT"));

    return val;
}

bool KnowledgeTypeEnum::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("QUESTION_ANSWER")) value_ = eKnowledgeTypeEnum::KnowledgeTypeEnum_QUESTION_ANSWER;
    if (s == utility::conversions::to_string_t("DOCUMENT")) value_ = eKnowledgeTypeEnum::KnowledgeTypeEnum_DOCUMENT;
    return true;
}

KnowledgeTypeEnum::eKnowledgeTypeEnum KnowledgeTypeEnum::getValue() const
{
   return value_;
}

void KnowledgeTypeEnum::setValue(KnowledgeTypeEnum::eKnowledgeTypeEnum const value)
{
   value_ = value;
}


}
}
}
}
}


