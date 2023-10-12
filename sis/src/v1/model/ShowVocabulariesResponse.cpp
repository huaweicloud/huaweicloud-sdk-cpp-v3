

#include "huaweicloud/sis/v1/model/ShowVocabulariesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




ShowVocabulariesResponse::ShowVocabulariesResponse()
{
    count_ = 0;
    countIsSet_ = false;
    resultIsSet_ = false;
}

ShowVocabulariesResponse::~ShowVocabulariesResponse() = default;

void ShowVocabulariesResponse::validate()
{
}

web::json::value ShowVocabulariesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ShowVocabulariesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<VocabInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


int32_t ShowVocabulariesResponse::getCount() const
{
    return count_;
}

void ShowVocabulariesResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowVocabulariesResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowVocabulariesResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<VocabInfo>& ShowVocabulariesResponse::getResult()
{
    return result_;
}

void ShowVocabulariesResponse::setResult(const std::vector<VocabInfo>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowVocabulariesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowVocabulariesResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


