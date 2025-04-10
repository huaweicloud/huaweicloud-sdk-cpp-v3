

#include "huaweicloud/gaussdbforopengauss/v3/model/RestoreDisasterReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




RestoreDisasterReq::RestoreDisasterReq()
{
    disasterType_ = "";
    disasterTypeIsSet_ = false;
}

RestoreDisasterReq::~RestoreDisasterReq() = default;

void RestoreDisasterReq::validate()
{
}

web::json::value RestoreDisasterReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(disasterTypeIsSet_) {
        val[utility::conversions::to_string_t("disaster_type")] = ModelBase::toJson(disasterType_);
    }

    return val;
}
bool RestoreDisasterReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("disaster_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disaster_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisasterType(refVal);
        }
    }
    return ok;
}


std::string RestoreDisasterReq::getDisasterType() const
{
    return disasterType_;
}

void RestoreDisasterReq::setDisasterType(const std::string& value)
{
    disasterType_ = value;
    disasterTypeIsSet_ = true;
}

bool RestoreDisasterReq::disasterTypeIsSet() const
{
    return disasterTypeIsSet_;
}

void RestoreDisasterReq::unsetdisasterType()
{
    disasterTypeIsSet_ = false;
}

}
}
}
}
}


