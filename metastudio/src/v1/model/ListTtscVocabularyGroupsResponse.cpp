

#include "huaweicloud/metastudio/v1/model/ListTtscVocabularyGroupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListTtscVocabularyGroupsResponse::ListTtscVocabularyGroupsResponse()
{
    count_ = 0;
    countIsSet_ = false;
    dataIsSet_ = false;
}

ListTtscVocabularyGroupsResponse::~ListTtscVocabularyGroupsResponse() = default;

void ListTtscVocabularyGroupsResponse::validate()
{
}

web::json::value ListTtscVocabularyGroupsResponse::toJson() const
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
bool ListTtscVocabularyGroupsResponse::fromJson(const web::json::value& val)
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
            std::vector<TtscGroupAssetsConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t ListTtscVocabularyGroupsResponse::getCount() const
{
    return count_;
}

void ListTtscVocabularyGroupsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListTtscVocabularyGroupsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListTtscVocabularyGroupsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<TtscGroupAssetsConfig>& ListTtscVocabularyGroupsResponse::getData()
{
    return data_;
}

void ListTtscVocabularyGroupsResponse::setData(const std::vector<TtscGroupAssetsConfig>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListTtscVocabularyGroupsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListTtscVocabularyGroupsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


