

#include "huaweicloud/functiongraph/v2/model/ListDependencyVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListDependencyVersionResponse::ListDependencyVersionResponse()
{
    dependenciesIsSet_ = false;
    nextMarker_ = 0L;
    nextMarkerIsSet_ = false;
    count_ = 0L;
    countIsSet_ = false;
}

ListDependencyVersionResponse::~ListDependencyVersionResponse() = default;

void ListDependencyVersionResponse::validate()
{
}

web::json::value ListDependencyVersionResponse::toJson() const
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
bool ListDependencyVersionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dependencies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dependencies"));
        if(!fieldValue.is_null())
        {
            std::vector<ListDependencyVersionsResult> refVal;
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


std::vector<ListDependencyVersionsResult>& ListDependencyVersionResponse::getDependencies()
{
    return dependencies_;
}

void ListDependencyVersionResponse::setDependencies(const std::vector<ListDependencyVersionsResult>& value)
{
    dependencies_ = value;
    dependenciesIsSet_ = true;
}

bool ListDependencyVersionResponse::dependenciesIsSet() const
{
    return dependenciesIsSet_;
}

void ListDependencyVersionResponse::unsetdependencies()
{
    dependenciesIsSet_ = false;
}

int64_t ListDependencyVersionResponse::getNextMarker() const
{
    return nextMarker_;
}

void ListDependencyVersionResponse::setNextMarker(int64_t value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool ListDependencyVersionResponse::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void ListDependencyVersionResponse::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

int64_t ListDependencyVersionResponse::getCount() const
{
    return count_;
}

void ListDependencyVersionResponse::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListDependencyVersionResponse::countIsSet() const
{
    return countIsSet_;
}

void ListDependencyVersionResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


