

#include "huaweicloud/gaussdbforopengauss/v3/model/DisasterRecoverStartXlogKeepRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DisasterRecoverStartXlogKeepRequestBody::DisasterRecoverStartXlogKeepRequestBody()
{
    xlogKeepRatio_ = 0;
    xlogKeepRatioIsSet_ = false;
    disasterType_ = "";
    disasterTypeIsSet_ = false;
}

DisasterRecoverStartXlogKeepRequestBody::~DisasterRecoverStartXlogKeepRequestBody() = default;

void DisasterRecoverStartXlogKeepRequestBody::validate()
{
}

web::json::value DisasterRecoverStartXlogKeepRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xlogKeepRatioIsSet_) {
        val[utility::conversions::to_string_t("xlog_keep_ratio")] = ModelBase::toJson(xlogKeepRatio_);
    }
    if(disasterTypeIsSet_) {
        val[utility::conversions::to_string_t("disaster_type")] = ModelBase::toJson(disasterType_);
    }

    return val;
}
bool DisasterRecoverStartXlogKeepRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("xlog_keep_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("xlog_keep_ratio"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXlogKeepRatio(refVal);
        }
    }
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


int32_t DisasterRecoverStartXlogKeepRequestBody::getXlogKeepRatio() const
{
    return xlogKeepRatio_;
}

void DisasterRecoverStartXlogKeepRequestBody::setXlogKeepRatio(int32_t value)
{
    xlogKeepRatio_ = value;
    xlogKeepRatioIsSet_ = true;
}

bool DisasterRecoverStartXlogKeepRequestBody::xlogKeepRatioIsSet() const
{
    return xlogKeepRatioIsSet_;
}

void DisasterRecoverStartXlogKeepRequestBody::unsetxlogKeepRatio()
{
    xlogKeepRatioIsSet_ = false;
}

std::string DisasterRecoverStartXlogKeepRequestBody::getDisasterType() const
{
    return disasterType_;
}

void DisasterRecoverStartXlogKeepRequestBody::setDisasterType(const std::string& value)
{
    disasterType_ = value;
    disasterTypeIsSet_ = true;
}

bool DisasterRecoverStartXlogKeepRequestBody::disasterTypeIsSet() const
{
    return disasterTypeIsSet_;
}

void DisasterRecoverStartXlogKeepRequestBody::unsetdisasterType()
{
    disasterTypeIsSet_ = false;
}

}
}
}
}
}


