

#include "huaweicloud/kms/v2/model/CreateAccessPointResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateAccessPointResponse::CreateAccessPointResponse()
{
    accessPointId_ = "";
    accessPointIdIsSet_ = false;
}

CreateAccessPointResponse::~CreateAccessPointResponse() = default;

void CreateAccessPointResponse::validate()
{
}

web::json::value CreateAccessPointResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessPointIdIsSet_) {
        val[utility::conversions::to_string_t("access_point_id")] = ModelBase::toJson(accessPointId_);
    }

    return val;
}
bool CreateAccessPointResponse::fromJson(const web::json::value& val)
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


std::string CreateAccessPointResponse::getAccessPointId() const
{
    return accessPointId_;
}

void CreateAccessPointResponse::setAccessPointId(const std::string& value)
{
    accessPointId_ = value;
    accessPointIdIsSet_ = true;
}

bool CreateAccessPointResponse::accessPointIdIsSet() const
{
    return accessPointIdIsSet_;
}

void CreateAccessPointResponse::unsetaccessPointId()
{
    accessPointIdIsSet_ = false;
}

}
}
}
}
}


