

#include "huaweicloud/mpc/v1/model/Encryption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




Encryption::Encryption()
{
    hlsEncryptIsSet_ = false;
}

Encryption::~Encryption() = default;

void Encryption::validate()
{
}

web::json::value Encryption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hlsEncryptIsSet_) {
        val[utility::conversions::to_string_t("hls_encrypt")] = ModelBase::toJson(hlsEncrypt_);
    }

    return val;
}

bool Encryption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hls_encrypt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hls_encrypt"));
        if(!fieldValue.is_null())
        {
            HlsEncrypt refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHlsEncrypt(refVal);
        }
    }
    return ok;
}


HlsEncrypt Encryption::getHlsEncrypt() const
{
    return hlsEncrypt_;
}

void Encryption::setHlsEncrypt(const HlsEncrypt& value)
{
    hlsEncrypt_ = value;
    hlsEncryptIsSet_ = true;
}

bool Encryption::hlsEncryptIsSet() const
{
    return hlsEncryptIsSet_;
}

void Encryption::unsethlsEncrypt()
{
    hlsEncryptIsSet_ = false;
}

}
}
}
}
}


