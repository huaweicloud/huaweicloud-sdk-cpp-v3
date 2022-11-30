

#include "huaweicloud/csms/v1/model/UploadSecretBlobRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




UploadSecretBlobRequestBody::UploadSecretBlobRequestBody()
{
    secretBlob_ = "";
    secretBlobIsSet_ = false;
}

UploadSecretBlobRequestBody::~UploadSecretBlobRequestBody() = default;

void UploadSecretBlobRequestBody::validate()
{
}

web::json::value UploadSecretBlobRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretBlobIsSet_) {
        val[utility::conversions::to_string_t("secret_blob")] = ModelBase::toJson(secretBlob_);
    }

    return val;
}

bool UploadSecretBlobRequestBody::fromJson(const web::json::value& val)
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


std::string UploadSecretBlobRequestBody::getSecretBlob() const
{
    return secretBlob_;
}

void UploadSecretBlobRequestBody::setSecretBlob(const std::string& value)
{
    secretBlob_ = value;
    secretBlobIsSet_ = true;
}

bool UploadSecretBlobRequestBody::secretBlobIsSet() const
{
    return secretBlobIsSet_;
}

void UploadSecretBlobRequestBody::unsetsecretBlob()
{
    secretBlobIsSet_ = false;
}

}
}
}
}
}


