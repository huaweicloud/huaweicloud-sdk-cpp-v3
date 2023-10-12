

#include "huaweicloud/dds/v3/model/ListSslCertDownloadAddressRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListSslCertDownloadAddressRequest::ListSslCertDownloadAddressRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListSslCertDownloadAddressRequest::~ListSslCertDownloadAddressRequest() = default;

void ListSslCertDownloadAddressRequest::validate()
{
}

web::json::value ListSslCertDownloadAddressRequest::toJson() const
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
bool ListSslCertDownloadAddressRequest::fromJson(const web::json::value& val)
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


std::string ListSslCertDownloadAddressRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListSslCertDownloadAddressRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListSslCertDownloadAddressRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListSslCertDownloadAddressRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListSslCertDownloadAddressRequest::getInstanceId() const
{
    return instanceId_;
}

void ListSslCertDownloadAddressRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSslCertDownloadAddressRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSslCertDownloadAddressRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


