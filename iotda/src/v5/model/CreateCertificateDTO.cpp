

#include "huaweicloud/iotda/v5/model/CreateCertificateDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateCertificateDTO::CreateCertificateDTO()
{
    content_ = "";
    contentIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
}

CreateCertificateDTO::~CreateCertificateDTO() = default;

void CreateCertificateDTO::validate()
{
}

web::json::value CreateCertificateDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }

    return val;
}
bool CreateCertificateDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    return ok;
}


std::string CreateCertificateDTO::getContent() const
{
    return content_;
}

void CreateCertificateDTO::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool CreateCertificateDTO::contentIsSet() const
{
    return contentIsSet_;
}

void CreateCertificateDTO::unsetcontent()
{
    contentIsSet_ = false;
}

std::string CreateCertificateDTO::getAppId() const
{
    return appId_;
}

void CreateCertificateDTO::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool CreateCertificateDTO::appIdIsSet() const
{
    return appIdIsSet_;
}

void CreateCertificateDTO::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}


