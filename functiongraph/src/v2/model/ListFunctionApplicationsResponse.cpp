

#include "huaweicloud/functiongraph/v2/model/ListFunctionApplicationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListFunctionApplicationsResponse::ListFunctionApplicationsResponse()
{
    applicationsIsSet_ = false;
    nextMarker_ = 0L;
    nextMarkerIsSet_ = false;
    count_ = 0L;
    countIsSet_ = false;
}

ListFunctionApplicationsResponse::~ListFunctionApplicationsResponse() = default;

void ListFunctionApplicationsResponse::validate()
{
}

web::json::value ListFunctionApplicationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationsIsSet_) {
        val[utility::conversions::to_string_t("applications")] = ModelBase::toJson(applications_);
    }
    if(nextMarkerIsSet_) {
        val[utility::conversions::to_string_t("next_marker")] = ModelBase::toJson(nextMarker_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ListFunctionApplicationsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("applications"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("applications"));
        if(!fieldValue.is_null())
        {
            std::vector<ListFunctionApplicationResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplications(refVal);
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


std::vector<ListFunctionApplicationResult>& ListFunctionApplicationsResponse::getApplications()
{
    return applications_;
}

void ListFunctionApplicationsResponse::setApplications(const std::vector<ListFunctionApplicationResult>& value)
{
    applications_ = value;
    applicationsIsSet_ = true;
}

bool ListFunctionApplicationsResponse::applicationsIsSet() const
{
    return applicationsIsSet_;
}

void ListFunctionApplicationsResponse::unsetapplications()
{
    applicationsIsSet_ = false;
}

int64_t ListFunctionApplicationsResponse::getNextMarker() const
{
    return nextMarker_;
}

void ListFunctionApplicationsResponse::setNextMarker(int64_t value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool ListFunctionApplicationsResponse::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void ListFunctionApplicationsResponse::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

int64_t ListFunctionApplicationsResponse::getCount() const
{
    return count_;
}

void ListFunctionApplicationsResponse::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListFunctionApplicationsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListFunctionApplicationsResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


