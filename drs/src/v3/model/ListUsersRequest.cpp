

#include "huaweicloud/drs/v3/model/ListUsersRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ListUsersRequest::ListUsersRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

ListUsersRequest::~ListUsersRequest() = default;

void ListUsersRequest::validate()
{
}

web::json::value ListUsersRequest::toJson() const
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

bool ListUsersRequest::fromJson(const web::json::value& val)
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

std::string ListUsersRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListUsersRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListUsersRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListUsersRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListUsersRequest::getJobId() const
{
    return jobId_;
}

void ListUsersRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListUsersRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListUsersRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


