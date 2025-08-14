

#include "huaweicloud/identitycenter/v1/model/RegisterRegionReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




RegisterRegionReqBody::RegisterRegionReqBody()
{
    regionId_ = "";
    regionIdIsSet_ = false;
}

RegisterRegionReqBody::~RegisterRegionReqBody() = default;

void RegisterRegionReqBody::validate()
{
}

web::json::value RegisterRegionReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }

    return val;
}
bool RegisterRegionReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
        }
    }
    return ok;
}


std::string RegisterRegionReqBody::getRegionId() const
{
    return regionId_;
}

void RegisterRegionReqBody::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool RegisterRegionReqBody::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void RegisterRegionReqBody::unsetregionId()
{
    regionIdIsSet_ = false;
}

}
}
}
}
}


