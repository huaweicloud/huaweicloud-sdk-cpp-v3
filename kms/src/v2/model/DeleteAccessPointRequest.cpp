

#include "huaweicloud/kms/v2/model/DeleteAccessPointRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DeleteAccessPointRequest::DeleteAccessPointRequest()
{
    accessPointId_ = "";
    accessPointIdIsSet_ = false;
}

DeleteAccessPointRequest::~DeleteAccessPointRequest() = default;

void DeleteAccessPointRequest::validate()
{
}

web::json::value DeleteAccessPointRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessPointIdIsSet_) {
        val[utility::conversions::to_string_t("access_point_id")] = ModelBase::toJson(accessPointId_);
    }

    return val;
}
bool DeleteAccessPointRequest::fromJson(const web::json::value& val)
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


std::string DeleteAccessPointRequest::getAccessPointId() const
{
    return accessPointId_;
}

void DeleteAccessPointRequest::setAccessPointId(const std::string& value)
{
    accessPointId_ = value;
    accessPointIdIsSet_ = true;
}

bool DeleteAccessPointRequest::accessPointIdIsSet() const
{
    return accessPointIdIsSet_;
}

void DeleteAccessPointRequest::unsetaccessPointId()
{
    accessPointIdIsSet_ = false;
}

}
}
}
}
}


