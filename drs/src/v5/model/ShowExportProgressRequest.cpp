

#include "huaweicloud/drs/v5/model/ShowExportProgressRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowExportProgressRequest::ShowExportProgressRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    asyncJobId_ = "";
    asyncJobIdIsSet_ = false;
}

ShowExportProgressRequest::~ShowExportProgressRequest() = default;

void ShowExportProgressRequest::validate()
{
}

web::json::value ShowExportProgressRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(asyncJobIdIsSet_) {
        val[utility::conversions::to_string_t("async_job_id")] = ModelBase::toJson(asyncJobId_);
    }

    return val;
}
bool ShowExportProgressRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("async_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("async_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAsyncJobId(refVal);
        }
    }
    return ok;
}


std::string ShowExportProgressRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowExportProgressRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowExportProgressRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowExportProgressRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowExportProgressRequest::getAsyncJobId() const
{
    return asyncJobId_;
}

void ShowExportProgressRequest::setAsyncJobId(const std::string& value)
{
    asyncJobId_ = value;
    asyncJobIdIsSet_ = true;
}

bool ShowExportProgressRequest::asyncJobIdIsSet() const
{
    return asyncJobIdIsSet_;
}

void ShowExportProgressRequest::unsetasyncJobId()
{
    asyncJobIdIsSet_ = false;
}

}
}
}
}
}


