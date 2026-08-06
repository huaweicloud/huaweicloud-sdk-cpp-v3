

#include "huaweicloud/kms/v2/model/DownloadAccessPointPrivateKeyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DownloadAccessPointPrivateKeyResponse::DownloadAccessPointPrivateKeyResponse()
{
    accessPointId_ = "";
    accessPointIdIsSet_ = false;
    privateKey_ = "";
    privateKeyIsSet_ = false;
}

DownloadAccessPointPrivateKeyResponse::~DownloadAccessPointPrivateKeyResponse() = default;

void DownloadAccessPointPrivateKeyResponse::validate()
{
}

web::json::value DownloadAccessPointPrivateKeyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessPointIdIsSet_) {
        val[utility::conversions::to_string_t("access_point_id")] = ModelBase::toJson(accessPointId_);
    }
    if(privateKeyIsSet_) {
        val[utility::conversions::to_string_t("private_key")] = ModelBase::toJson(privateKey_);
    }

    return val;
}
bool DownloadAccessPointPrivateKeyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("access_point_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_point_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessPointId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("private_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("private_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateKey(refVal);
        }
    }
    return ok;
}


std::string DownloadAccessPointPrivateKeyResponse::getAccessPointId() const
{
    return accessPointId_;
}

void DownloadAccessPointPrivateKeyResponse::setAccessPointId(const std::string& value)
{
    accessPointId_ = value;
    accessPointIdIsSet_ = true;
}

bool DownloadAccessPointPrivateKeyResponse::accessPointIdIsSet() const
{
    return accessPointIdIsSet_;
}

void DownloadAccessPointPrivateKeyResponse::unsetaccessPointId()
{
    accessPointIdIsSet_ = false;
}

std::string DownloadAccessPointPrivateKeyResponse::getPrivateKey() const
{
    return privateKey_;
}

void DownloadAccessPointPrivateKeyResponse::setPrivateKey(const std::string& value)
{
    privateKey_ = value;
    privateKeyIsSet_ = true;
}

bool DownloadAccessPointPrivateKeyResponse::privateKeyIsSet() const
{
    return privateKeyIsSet_;
}

void DownloadAccessPointPrivateKeyResponse::unsetprivateKey()
{
    privateKeyIsSet_ = false;
}

}
}
}
}
}


