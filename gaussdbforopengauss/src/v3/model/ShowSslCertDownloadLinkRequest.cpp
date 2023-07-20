

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowSslCertDownloadLinkRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowSslCertDownloadLinkRequest::ShowSslCertDownloadLinkRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowSslCertDownloadLinkRequest::~ShowSslCertDownloadLinkRequest() = default;

void ShowSslCertDownloadLinkRequest::validate()
{
}

web::json::value ShowSslCertDownloadLinkRequest::toJson() const
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

bool ShowSslCertDownloadLinkRequest::fromJson(const web::json::value& val)
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

std::string ShowSslCertDownloadLinkRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowSslCertDownloadLinkRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowSslCertDownloadLinkRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowSslCertDownloadLinkRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowSslCertDownloadLinkRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowSslCertDownloadLinkRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowSslCertDownloadLinkRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowSslCertDownloadLinkRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


