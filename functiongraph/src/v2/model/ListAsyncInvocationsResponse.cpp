

#include "huaweicloud/functiongraph/v2/model/ListAsyncInvocationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListAsyncInvocationsResponse::ListAsyncInvocationsResponse()
{
    invocationsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    nextMarker_ = 0;
    nextMarkerIsSet_ = false;
}

ListAsyncInvocationsResponse::~ListAsyncInvocationsResponse() = default;

void ListAsyncInvocationsResponse::validate()
{
}

web::json::value ListAsyncInvocationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(invocationsIsSet_) {
        val[utility::conversions::to_string_t("invocations")] = ModelBase::toJson(invocations_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(nextMarkerIsSet_) {
        val[utility::conversions::to_string_t("next_marker")] = ModelBase::toJson(nextMarker_);
    }

    return val;
}
bool ListAsyncInvocationsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("invocations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("invocations"));
        if(!fieldValue.is_null())
        {
            std::vector<ListFunctionAsyncInvocationsResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInvocations(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("next_marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next_marker"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNextMarker(refVal);
        }
    }
    return ok;
}


std::vector<ListFunctionAsyncInvocationsResult>& ListAsyncInvocationsResponse::getInvocations()
{
    return invocations_;
}

void ListAsyncInvocationsResponse::setInvocations(const std::vector<ListFunctionAsyncInvocationsResult>& value)
{
    invocations_ = value;
    invocationsIsSet_ = true;
}

bool ListAsyncInvocationsResponse::invocationsIsSet() const
{
    return invocationsIsSet_;
}

void ListAsyncInvocationsResponse::unsetinvocations()
{
    invocationsIsSet_ = false;
}

int32_t ListAsyncInvocationsResponse::getCount() const
{
    return count_;
}

void ListAsyncInvocationsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListAsyncInvocationsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListAsyncInvocationsResponse::unsetcount()
{
    countIsSet_ = false;
}

int32_t ListAsyncInvocationsResponse::getNextMarker() const
{
    return nextMarker_;
}

void ListAsyncInvocationsResponse::setNextMarker(int32_t value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool ListAsyncInvocationsResponse::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void ListAsyncInvocationsResponse::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

}
}
}
}
}


