

#include "huaweicloud/rds/v3/model/DownloadErrorlogRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DownloadErrorlogRequest::DownloadErrorlogRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

DownloadErrorlogRequest::~DownloadErrorlogRequest() = default;

void DownloadErrorlogRequest::validate()
{
}

web::json::value DownloadErrorlogRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool DownloadErrorlogRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


std::string DownloadErrorlogRequest::getXLanguage() const
{
    return xLanguage_;
}

void DownloadErrorlogRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DownloadErrorlogRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DownloadErrorlogRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DownloadErrorlogRequest::getInstanceId() const
{
    return instanceId_;
}

void DownloadErrorlogRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DownloadErrorlogRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DownloadErrorlogRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


