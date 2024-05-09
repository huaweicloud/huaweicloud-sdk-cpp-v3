

#include "huaweicloud/drs/v3/model/ListObejectLevelCompareOverviewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ListObejectLevelCompareOverviewRequest::ListObejectLevelCompareOverviewRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

ListObejectLevelCompareOverviewRequest::~ListObejectLevelCompareOverviewRequest() = default;

void ListObejectLevelCompareOverviewRequest::validate()
{
}

web::json::value ListObejectLevelCompareOverviewRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ListObejectLevelCompareOverviewRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    return ok;
}


std::string ListObejectLevelCompareOverviewRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListObejectLevelCompareOverviewRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListObejectLevelCompareOverviewRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListObejectLevelCompareOverviewRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListObejectLevelCompareOverviewRequest::getJobId() const
{
    return jobId_;
}

void ListObejectLevelCompareOverviewRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListObejectLevelCompareOverviewRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListObejectLevelCompareOverviewRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


