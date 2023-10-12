

#include "huaweicloud/drs/v5/model/ListLinksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListLinksResponse::ListLinksResponse()
{
    jobLinksIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListLinksResponse::~ListLinksResponse() = default;

void ListLinksResponse::validate()
{
}

web::json::value ListLinksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobLinksIsSet_) {
        val[utility::conversions::to_string_t("job_links")] = ModelBase::toJson(jobLinks_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListLinksResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_links"));
        if(!fieldValue.is_null())
        {
            std::vector<JobLinkResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobLinks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<JobLinkResp>& ListLinksResponse::getJobLinks()
{
    return jobLinks_;
}

void ListLinksResponse::setJobLinks(const std::vector<JobLinkResp>& value)
{
    jobLinks_ = value;
    jobLinksIsSet_ = true;
}

bool ListLinksResponse::jobLinksIsSet() const
{
    return jobLinksIsSet_;
}

void ListLinksResponse::unsetjobLinks()
{
    jobLinksIsSet_ = false;
}

int32_t ListLinksResponse::getTotalCount() const
{
    return totalCount_;
}

void ListLinksResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListLinksResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListLinksResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


