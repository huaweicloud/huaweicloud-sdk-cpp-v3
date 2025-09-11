

#include "huaweicloud/functiongraph/v2/model/ListFunctionVersionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListFunctionVersionsResponse::ListFunctionVersionsResponse()
{
    versionsIsSet_ = false;
    nextMarker_ = 0L;
    nextMarkerIsSet_ = false;
    count_ = 0L;
    countIsSet_ = false;
}

ListFunctionVersionsResponse::~ListFunctionVersionsResponse() = default;

void ListFunctionVersionsResponse::validate()
{
}

web::json::value ListFunctionVersionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionsIsSet_) {
        val[utility::conversions::to_string_t("versions")] = ModelBase::toJson(versions_);
    }
    if(nextMarkerIsSet_) {
        val[utility::conversions::to_string_t("next_marker")] = ModelBase::toJson(nextMarker_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ListFunctionVersionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("versions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("versions"));
        if(!fieldValue.is_null())
        {
            std::vector<ListFunctionVersionResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersions(refVal);
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


std::vector<ListFunctionVersionResult>& ListFunctionVersionsResponse::getVersions()
{
    return versions_;
}

void ListFunctionVersionsResponse::setVersions(const std::vector<ListFunctionVersionResult>& value)
{
    versions_ = value;
    versionsIsSet_ = true;
}

bool ListFunctionVersionsResponse::versionsIsSet() const
{
    return versionsIsSet_;
}

void ListFunctionVersionsResponse::unsetversions()
{
    versionsIsSet_ = false;
}

int64_t ListFunctionVersionsResponse::getNextMarker() const
{
    return nextMarker_;
}

void ListFunctionVersionsResponse::setNextMarker(int64_t value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool ListFunctionVersionsResponse::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void ListFunctionVersionsResponse::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

int64_t ListFunctionVersionsResponse::getCount() const
{
    return count_;
}

void ListFunctionVersionsResponse::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListFunctionVersionsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListFunctionVersionsResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


