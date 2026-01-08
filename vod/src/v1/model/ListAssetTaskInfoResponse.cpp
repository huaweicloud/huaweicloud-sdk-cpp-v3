

#include "huaweicloud/vod/v1/model/ListAssetTaskInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListAssetTaskInfoResponse::ListAssetTaskInfoResponse()
{
    resultsIsSet_ = false;
    count_ = 0L;
    countIsSet_ = false;
    nextMarker_ = "";
    nextMarkerIsSet_ = false;
}

ListAssetTaskInfoResponse::~ListAssetTaskInfoResponse() = default;

void ListAssetTaskInfoResponse::validate()
{
}

web::json::value ListAssetTaskInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultsIsSet_) {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(results_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(nextMarkerIsSet_) {
        val[utility::conversions::to_string_t("next_marker")] = ModelBase::toJson(nextMarker_);
    }

    return val;
}
bool ListAssetTaskInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<Result> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("next_marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next_marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNextMarker(refVal);
        }
    }
    return ok;
}


std::vector<Result>& ListAssetTaskInfoResponse::getResults()
{
    return results_;
}

void ListAssetTaskInfoResponse::setResults(const std::vector<Result>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool ListAssetTaskInfoResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void ListAssetTaskInfoResponse::unsetresults()
{
    resultsIsSet_ = false;
}

int64_t ListAssetTaskInfoResponse::getCount() const
{
    return count_;
}

void ListAssetTaskInfoResponse::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListAssetTaskInfoResponse::countIsSet() const
{
    return countIsSet_;
}

void ListAssetTaskInfoResponse::unsetcount()
{
    countIsSet_ = false;
}

std::string ListAssetTaskInfoResponse::getNextMarker() const
{
    return nextMarker_;
}

void ListAssetTaskInfoResponse::setNextMarker(const std::string& value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool ListAssetTaskInfoResponse::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void ListAssetTaskInfoResponse::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

}
}
}
}
}


