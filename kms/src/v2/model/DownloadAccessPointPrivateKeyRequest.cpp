

#include "huaweicloud/kms/v2/model/DownloadAccessPointPrivateKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DownloadAccessPointPrivateKeyRequest::DownloadAccessPointPrivateKeyRequest()
{
    accessPointId_ = "";
    accessPointIdIsSet_ = false;
}

DownloadAccessPointPrivateKeyRequest::~DownloadAccessPointPrivateKeyRequest() = default;

void DownloadAccessPointPrivateKeyRequest::validate()
{
}

web::json::value DownloadAccessPointPrivateKeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessPointIdIsSet_) {
        val[utility::conversions::to_string_t("access_point_id")] = ModelBase::toJson(accessPointId_);
    }

    return val;
}
bool DownloadAccessPointPrivateKeyRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DownloadAccessPointPrivateKeyRequest::getAccessPointId() const
{
    return accessPointId_;
}

void DownloadAccessPointPrivateKeyRequest::setAccessPointId(const std::string& value)
{
    accessPointId_ = value;
    accessPointIdIsSet_ = true;
}

bool DownloadAccessPointPrivateKeyRequest::accessPointIdIsSet() const
{
    return accessPointIdIsSet_;
}

void DownloadAccessPointPrivateKeyRequest::unsetaccessPointId()
{
    accessPointIdIsSet_ = false;
}

}
}
}
}
}


