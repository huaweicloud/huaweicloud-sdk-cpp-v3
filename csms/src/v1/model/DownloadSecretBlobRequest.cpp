

#include "huaweicloud/csms/v1/model/DownloadSecretBlobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




DownloadSecretBlobRequest::DownloadSecretBlobRequest()
{
    secretName_ = "";
    secretNameIsSet_ = false;
}

DownloadSecretBlobRequest::~DownloadSecretBlobRequest() = default;

void DownloadSecretBlobRequest::validate()
{
}

web::json::value DownloadSecretBlobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretNameIsSet_) {
        val[utility::conversions::to_string_t("secret_name")] = ModelBase::toJson(secretName_);
    }

    return val;
}
bool DownloadSecretBlobRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("secret_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretName(refVal);
        }
    }
    return ok;
}


std::string DownloadSecretBlobRequest::getSecretName() const
{
    return secretName_;
}

void DownloadSecretBlobRequest::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool DownloadSecretBlobRequest::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void DownloadSecretBlobRequest::unsetsecretName()
{
    secretNameIsSet_ = false;
}

}
}
}
}
}


