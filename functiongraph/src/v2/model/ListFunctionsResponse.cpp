

#include "huaweicloud/functiongraph/v2/model/ListFunctionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListFunctionsResponse::ListFunctionsResponse()
{
    functionsIsSet_ = false;
    nextMarker_ = 0;
    nextMarkerIsSet_ = false;
    count_ = 0L;
    countIsSet_ = false;
}

ListFunctionsResponse::~ListFunctionsResponse() = default;

void ListFunctionsResponse::validate()
{
}

web::json::value ListFunctionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(functionsIsSet_) {
        val[utility::conversions::to_string_t("functions")] = ModelBase::toJson(functions_);
    }
    if(nextMarkerIsSet_) {
        val[utility::conversions::to_string_t("next_marker")] = ModelBase::toJson(nextMarker_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ListFunctionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("functions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("functions"));
        if(!fieldValue.is_null())
        {
            std::vector<ListFunctionResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFunctions(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


std::vector<ListFunctionResult>& ListFunctionsResponse::getFunctions()
{
    return functions_;
}

void ListFunctionsResponse::setFunctions(const std::vector<ListFunctionResult>& value)
{
    functions_ = value;
    functionsIsSet_ = true;
}

bool ListFunctionsResponse::functionsIsSet() const
{
    return functionsIsSet_;
}

void ListFunctionsResponse::unsetfunctions()
{
    functionsIsSet_ = false;
}

int32_t ListFunctionsResponse::getNextMarker() const
{
    return nextMarker_;
}

void ListFunctionsResponse::setNextMarker(int32_t value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool ListFunctionsResponse::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void ListFunctionsResponse::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

int64_t ListFunctionsResponse::getCount() const
{
    return count_;
}

void ListFunctionsResponse::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListFunctionsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListFunctionsResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


