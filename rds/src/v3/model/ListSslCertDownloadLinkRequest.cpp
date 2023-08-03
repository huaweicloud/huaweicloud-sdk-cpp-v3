

#include "huaweicloud/rds/v3/model/ListSslCertDownloadLinkRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSslCertDownloadLinkRequest::ListSslCertDownloadLinkRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListSslCertDownloadLinkRequest::~ListSslCertDownloadLinkRequest() = default;

void ListSslCertDownloadLinkRequest::validate()
{
}

web::json::value ListSslCertDownloadLinkRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}

bool ListSslCertDownloadLinkRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}

std::string ListSslCertDownloadLinkRequest::getInstanceId() const
{
    return instanceId_;
}

void ListSslCertDownloadLinkRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSslCertDownloadLinkRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSslCertDownloadLinkRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListSslCertDownloadLinkRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListSslCertDownloadLinkRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListSslCertDownloadLinkRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListSslCertDownloadLinkRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


