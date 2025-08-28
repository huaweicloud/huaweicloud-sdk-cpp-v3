

#include "huaweicloud/metastudio/v1/model/ShowTtsJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowTtsJobResponse::ShowTtsJobResponse()
{
    count_ = 0;
    countIsSet_ = false;
    dataIsSet_ = false;
}

ShowTtsJobResponse::~ShowTtsJobResponse() = default;

void ShowTtsJobResponse::validate()
{
}

web::json::value ShowTtsJobResponse::toJson() const
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
bool ShowTtsJobResponse::fromJson(const web::json::value& val)
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
            std::vector<TtsJobDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t ShowTtsJobResponse::getCount() const
{
    return count_;
}

void ShowTtsJobResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowTtsJobResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowTtsJobResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<TtsJobDetail>& ShowTtsJobResponse::getData()
{
    return data_;
}

void ShowTtsJobResponse::setData(const std::vector<TtsJobDetail>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowTtsJobResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowTtsJobResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


