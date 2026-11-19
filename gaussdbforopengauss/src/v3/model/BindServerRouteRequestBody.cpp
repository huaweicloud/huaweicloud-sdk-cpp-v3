

#include "huaweicloud/gaussdbforopengauss/v3/model/BindServerRouteRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




BindServerRouteRequestBody::BindServerRouteRequestBody()
{
    operate_ = "";
    operateIsSet_ = false;
    targetServerIpsIsSet_ = false;
}

BindServerRouteRequestBody::~BindServerRouteRequestBody() = default;

void BindServerRouteRequestBody::validate()
{
}

web::json::value BindServerRouteRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operateIsSet_) {
        val[utility::conversions::to_string_t("operate")] = ModelBase::toJson(operate_);
    }
    if(targetServerIpsIsSet_) {
        val[utility::conversions::to_string_t("target_server_ips")] = ModelBase::toJson(targetServerIps_);
    }

    return val;
}
bool BindServerRouteRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("operate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_server_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_server_ips"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetServerIps(refVal);
        }
    }
    return ok;
}


std::string BindServerRouteRequestBody::getOperate() const
{
    return operate_;
}

void BindServerRouteRequestBody::setOperate(const std::string& value)
{
    operate_ = value;
    operateIsSet_ = true;
}

bool BindServerRouteRequestBody::operateIsSet() const
{
    return operateIsSet_;
}

void BindServerRouteRequestBody::unsetoperate()
{
    operateIsSet_ = false;
}

std::vector<std::string>& BindServerRouteRequestBody::getTargetServerIps()
{
    return targetServerIps_;
}

void BindServerRouteRequestBody::setTargetServerIps(const std::vector<std::string>& value)
{
    targetServerIps_ = value;
    targetServerIpsIsSet_ = true;
}

bool BindServerRouteRequestBody::targetServerIpsIsSet() const
{
    return targetServerIpsIsSet_;
}

void BindServerRouteRequestBody::unsettargetServerIps()
{
    targetServerIpsIsSet_ = false;
}

}
}
}
}
}


