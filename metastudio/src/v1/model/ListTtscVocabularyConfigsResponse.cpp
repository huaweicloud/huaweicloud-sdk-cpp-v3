

#include "huaweicloud/metastudio/v1/model/ListTtscVocabularyConfigsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListTtscVocabularyConfigsResponse::ListTtscVocabularyConfigsResponse()
{
    count_ = 0;
    countIsSet_ = false;
    dataIsSet_ = false;
}

ListTtscVocabularyConfigsResponse::~ListTtscVocabularyConfigsResponse() = default;

void ListTtscVocabularyConfigsResponse::validate()
{
}

web::json::value ListTtscVocabularyConfigsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListTtscVocabularyConfigsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<VocabularyConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t ListTtscVocabularyConfigsResponse::getCount() const
{
    return count_;
}

void ListTtscVocabularyConfigsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListTtscVocabularyConfigsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListTtscVocabularyConfigsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<VocabularyConfig>& ListTtscVocabularyConfigsResponse::getData()
{
    return data_;
}

void ListTtscVocabularyConfigsResponse::setData(const std::vector<VocabularyConfig>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListTtscVocabularyConfigsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListTtscVocabularyConfigsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


