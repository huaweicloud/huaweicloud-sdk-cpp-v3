

#include "huaweicloud/functiongraph/v2/model/ListDependenciesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListDependenciesResponse::ListDependenciesResponse()
{
    dependenciesIsSet_ = false;
    nextMarker_ = 0L;
    nextMarkerIsSet_ = false;
    count_ = 0L;
    countIsSet_ = false;
}

ListDependenciesResponse::~ListDependenciesResponse() = default;

void ListDependenciesResponse::validate()
{
}

web::json::value ListDependenciesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dependenciesIsSet_) {
        val[utility::conversions::to_string_t("dependencies")] = ModelBase::toJson(dependencies_);
    }
    if(nextMarkerIsSet_) {
        val[utility::conversions::to_string_t("next_marker")] = ModelBase::toJson(nextMarker_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ListDependenciesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dependencies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dependencies"));
        if(!fieldValue.is_null())
        {
            std::vector<ListDependenciesResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDependencies(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("next_marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next_marker"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
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


std::vector<ListDependenciesResult>& ListDependenciesResponse::getDependencies()
{
    return dependencies_;
}

void ListDependenciesResponse::setDependencies(const std::vector<ListDependenciesResult>& value)
{
    dependencies_ = value;
    dependenciesIsSet_ = true;
}

bool ListDependenciesResponse::dependenciesIsSet() const
{
    return dependenciesIsSet_;
}

void ListDependenciesResponse::unsetdependencies()
{
    dependenciesIsSet_ = false;
}

int64_t ListDependenciesResponse::getNextMarker() const
{
    return nextMarker_;
}

void ListDependenciesResponse::setNextMarker(int64_t value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool ListDependenciesResponse::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void ListDependenciesResponse::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

int64_t ListDependenciesResponse::getCount() const
{
    return count_;
}

void ListDependenciesResponse::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListDependenciesResponse::countIsSet() const
{
    return countIsSet_;
}

void ListDependenciesResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


