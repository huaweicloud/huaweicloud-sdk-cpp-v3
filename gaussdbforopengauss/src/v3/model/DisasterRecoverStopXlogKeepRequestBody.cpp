

#include "huaweicloud/gaussdbforopengauss/v3/model/DisasterRecoverStopXlogKeepRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DisasterRecoverStopXlogKeepRequestBody::DisasterRecoverStopXlogKeepRequestBody()
{
    disasterType_ = "";
    disasterTypeIsSet_ = false;
}

DisasterRecoverStopXlogKeepRequestBody::~DisasterRecoverStopXlogKeepRequestBody() = default;

void DisasterRecoverStopXlogKeepRequestBody::validate()
{
}

web::json::value DisasterRecoverStopXlogKeepRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(disasterTypeIsSet_) {
        val[utility::conversions::to_string_t("disaster_type")] = ModelBase::toJson(disasterType_);
    }

    return val;
}
bool DisasterRecoverStopXlogKeepRequestBody::fromJson(const web::json::value& val)
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


std::string DisasterRecoverStopXlogKeepRequestBody::getDisasterType() const
{
    return disasterType_;
}

void DisasterRecoverStopXlogKeepRequestBody::setDisasterType(const std::string& value)
{
    disasterType_ = value;
    disasterTypeIsSet_ = true;
}

bool DisasterRecoverStopXlogKeepRequestBody::disasterTypeIsSet() const
{
    return disasterTypeIsSet_;
}

void DisasterRecoverStopXlogKeepRequestBody::unsetdisasterType()
{
    disasterTypeIsSet_ = false;
}

}
}
}
}
}


