

#include "huaweicloud/gaussdbforopengauss/v3/model/ReleaseDisasterReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ReleaseDisasterReq::ReleaseDisasterReq()
{
    disasterType_ = "";
    disasterTypeIsSet_ = false;
}

ReleaseDisasterReq::~ReleaseDisasterReq() = default;

void ReleaseDisasterReq::validate()
{
}

web::json::value ReleaseDisasterReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(disasterTypeIsSet_) {
        val[utility::conversions::to_string_t("disaster_type")] = ModelBase::toJson(disasterType_);
    }

    return val;
}
bool ReleaseDisasterReq::fromJson(const web::json::value& val)
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


std::string ReleaseDisasterReq::getDisasterType() const
{
    return disasterType_;
}

void ReleaseDisasterReq::setDisasterType(const std::string& value)
{
    disasterType_ = value;
    disasterTypeIsSet_ = true;
}

bool ReleaseDisasterReq::disasterTypeIsSet() const
{
    return disasterTypeIsSet_;
}

void ReleaseDisasterReq::unsetdisasterType()
{
    disasterTypeIsSet_ = false;
}

}
}
}
}
}


