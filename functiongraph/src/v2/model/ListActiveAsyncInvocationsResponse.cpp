

#include "huaweicloud/functiongraph/v2/model/ListActiveAsyncInvocationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListActiveAsyncInvocationsResponse::ListActiveAsyncInvocationsResponse()
{
    invocationsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    nextMarker_ = 0;
    nextMarkerIsSet_ = false;
}

ListActiveAsyncInvocationsResponse::~ListActiveAsyncInvocationsResponse() = default;

void ListActiveAsyncInvocationsResponse::validate()
{
}

web::json::value ListActiveAsyncInvocationsResponse::toJson() const
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
bool ListActiveAsyncInvocationsResponse::fromJson(const web::json::value& val)
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


std::vector<ListFunctionAsyncInvocationsResult>& ListActiveAsyncInvocationsResponse::getInvocations()
{
    return invocations_;
}

void ListActiveAsyncInvocationsResponse::setInvocations(const std::vector<ListFunctionAsyncInvocationsResult>& value)
{
    invocations_ = value;
    invocationsIsSet_ = true;
}

bool ListActiveAsyncInvocationsResponse::invocationsIsSet() const
{
    return invocationsIsSet_;
}

void ListActiveAsyncInvocationsResponse::unsetinvocations()
{
    invocationsIsSet_ = false;
}

int32_t ListActiveAsyncInvocationsResponse::getCount() const
{
    return count_;
}

void ListActiveAsyncInvocationsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListActiveAsyncInvocationsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListActiveAsyncInvocationsResponse::unsetcount()
{
    countIsSet_ = false;
}

int32_t ListActiveAsyncInvocationsResponse::getNextMarker() const
{
    return nextMarker_;
}

void ListActiveAsyncInvocationsResponse::setNextMarker(int32_t value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool ListActiveAsyncInvocationsResponse::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void ListActiveAsyncInvocationsResponse::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

}
}
}
}
}


