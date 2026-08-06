

#include "huaweicloud/kms/v2/model/DisableAccessPointRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DisableAccessPointRequest::DisableAccessPointRequest()
{
    accessPointId_ = "";
    accessPointIdIsSet_ = false;
}

DisableAccessPointRequest::~DisableAccessPointRequest() = default;

void DisableAccessPointRequest::validate()
{
}

web::json::value DisableAccessPointRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessPointIdIsSet_) {
        val[utility::conversions::to_string_t("access_point_id")] = ModelBase::toJson(accessPointId_);
    }

    return val;
}
bool DisableAccessPointRequest::fromJson(const web::json::value& val)
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


std::string DisableAccessPointRequest::getAccessPointId() const
{
    return accessPointId_;
}

void DisableAccessPointRequest::setAccessPointId(const std::string& value)
{
    accessPointId_ = value;
    accessPointIdIsSet_ = true;
}

bool DisableAccessPointRequest::accessPointIdIsSet() const
{
    return accessPointIdIsSet_;
}

void DisableAccessPointRequest::unsetaccessPointId()
{
    accessPointIdIsSet_ = false;
}

}
}
}
}
}


