

#include "huaweicloud/mpc/v1/model/ShowAgenciesTaskResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ShowAgenciesTaskResponse::ShowAgenciesTaskResponse()
{
    operateType_ = "";
    operateTypeIsSet_ = false;
}

ShowAgenciesTaskResponse::~ShowAgenciesTaskResponse() = default;

void ShowAgenciesTaskResponse::validate()
{
}

web::json::value ShowAgenciesTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operateTypeIsSet_) {
        val[utility::conversions::to_string_t("operate_type")] = ModelBase::toJson(operateType_);
    }

    return val;
}

bool ShowAgenciesTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("operate_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateType(refVal);
        }
    }
    return ok;
}


std::string ShowAgenciesTaskResponse::getOperateType() const
{
    return operateType_;
}

void ShowAgenciesTaskResponse::setOperateType(const std::string& value)
{
    operateType_ = value;
    operateTypeIsSet_ = true;
}

bool ShowAgenciesTaskResponse::operateTypeIsSet() const
{
    return operateTypeIsSet_;
}

void ShowAgenciesTaskResponse::unsetoperateType()
{
    operateTypeIsSet_ = false;
}

}
}
}
}
}


