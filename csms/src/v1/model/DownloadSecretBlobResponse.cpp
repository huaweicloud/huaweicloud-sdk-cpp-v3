

#include "huaweicloud/csms/v1/model/DownloadSecretBlobResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




DownloadSecretBlobResponse::DownloadSecretBlobResponse()
{
    secretBlob_ = "";
    secretBlobIsSet_ = false;
}

DownloadSecretBlobResponse::~DownloadSecretBlobResponse() = default;

void DownloadSecretBlobResponse::validate()
{
}

web::json::value DownloadSecretBlobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretBlobIsSet_) {
        val[utility::conversions::to_string_t("secret_blob")] = ModelBase::toJson(secretBlob_);
    }

    return val;
}

bool DownloadSecretBlobResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("secret_blob"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_blob"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretBlob(refVal);
        }
    }
    return ok;
}

std::string DownloadSecretBlobResponse::getSecretBlob() const
{
    return secretBlob_;
}

void DownloadSecretBlobResponse::setSecretBlob(const std::string& value)
{
    secretBlob_ = value;
    secretBlobIsSet_ = true;
}

bool DownloadSecretBlobResponse::secretBlobIsSet() const
{
    return secretBlobIsSet_;
}

void DownloadSecretBlobResponse::unsetsecretBlob()
{
    secretBlobIsSet_ = false;
}

}
}
}
}
}


