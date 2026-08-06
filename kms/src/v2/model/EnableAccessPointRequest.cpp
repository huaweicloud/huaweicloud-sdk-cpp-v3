

#include "huaweicloud/kms/v2/model/EnableAccessPointRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




EnableAccessPointRequest::EnableAccessPointRequest()
{
    accessPointId_ = "";
    accessPointIdIsSet_ = false;
}

EnableAccessPointRequest::~EnableAccessPointRequest() = default;

void EnableAccessPointRequest::validate()
{
}

web::json::value EnableAccessPointRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessPointIdIsSet_) {
        val[utility::conversions::to_string_t("access_point_id")] = ModelBase::toJson(accessPointId_);
    }

    return val;
}
bool EnableAccessPointRequest::fromJson(const web::json::value& val)
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


std::string EnableAccessPointRequest::getAccessPointId() const
{
    return accessPointId_;
}

void EnableAccessPointRequest::setAccessPointId(const std::string& value)
{
    accessPointId_ = value;
    accessPointIdIsSet_ = true;
}

bool EnableAccessPointRequest::accessPointIdIsSet() const
{
    return accessPointIdIsSet_;
}

void EnableAccessPointRequest::unsetaccessPointId()
{
    accessPointIdIsSet_ = false;
}

}
}
}
}
}


