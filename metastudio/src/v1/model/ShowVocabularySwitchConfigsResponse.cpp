

#include "huaweicloud/metastudio/v1/model/ShowVocabularySwitchConfigsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowVocabularySwitchConfigsResponse::ShowVocabularySwitchConfigsResponse()
{
    count_ = 0;
    countIsSet_ = false;
    dataIsSet_ = false;
}

ShowVocabularySwitchConfigsResponse::~ShowVocabularySwitchConfigsResponse() = default;

void ShowVocabularySwitchConfigsResponse::validate()
{
}

web::json::value ShowVocabularySwitchConfigsResponse::toJson() const
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
bool ShowVocabularySwitchConfigsResponse::fromJson(const web::json::value& val)
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
            std::vector<SaveTtscTenantConfigsRequestBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t ShowVocabularySwitchConfigsResponse::getCount() const
{
    return count_;
}

void ShowVocabularySwitchConfigsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowVocabularySwitchConfigsResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowVocabularySwitchConfigsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<SaveTtscTenantConfigsRequestBody>& ShowVocabularySwitchConfigsResponse::getData()
{
    return data_;
}

void ShowVocabularySwitchConfigsResponse::setData(const std::vector<SaveTtscTenantConfigsRequestBody>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowVocabularySwitchConfigsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowVocabularySwitchConfigsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


