

#include "huaweicloud/lts/v2/model/ListLogHistogramResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListLogHistogramResponse::ListLogHistogramResponse()
{
    histogram_ = "";
    histogramIsSet_ = false;
    count_ = 0L;
    countIsSet_ = false;
    isQueryComplete_ = false;
    isQueryCompleteIsSet_ = false;
}

ListLogHistogramResponse::~ListLogHistogramResponse() = default;

void ListLogHistogramResponse::validate()
{
}

web::json::value ListLogHistogramResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(histogramIsSet_) {
        val[utility::conversions::to_string_t("histogram")] = ModelBase::toJson(histogram_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(isQueryCompleteIsSet_) {
        val[utility::conversions::to_string_t("isQueryComplete")] = ModelBase::toJson(isQueryComplete_);
    }

    return val;
}
bool ListLogHistogramResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("histogram"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("histogram"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHistogram(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isQueryComplete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isQueryComplete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsQueryComplete(refVal);
        }
    }
    return ok;
}


std::string ListLogHistogramResponse::getHistogram() const
{
    return histogram_;
}

void ListLogHistogramResponse::setHistogram(const std::string& value)
{
    histogram_ = value;
    histogramIsSet_ = true;
}

bool ListLogHistogramResponse::histogramIsSet() const
{
    return histogramIsSet_;
}

void ListLogHistogramResponse::unsethistogram()
{
    histogramIsSet_ = false;
}

int64_t ListLogHistogramResponse::getCount() const
{
    return count_;
}

void ListLogHistogramResponse::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListLogHistogramResponse::countIsSet() const
{
    return countIsSet_;
}

void ListLogHistogramResponse::unsetcount()
{
    countIsSet_ = false;
}

bool ListLogHistogramResponse::isIsQueryComplete() const
{
    return isQueryComplete_;
}

void ListLogHistogramResponse::setIsQueryComplete(bool value)
{
    isQueryComplete_ = value;
    isQueryCompleteIsSet_ = true;
}

bool ListLogHistogramResponse::isQueryCompleteIsSet() const
{
    return isQueryCompleteIsSet_;
}

void ListLogHistogramResponse::unsetisQueryComplete()
{
    isQueryCompleteIsSet_ = false;
}

}
}
}
}
}


