

#include "huaweicloud/drs/v5/model/QueryCompareJobProgressResp_global_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




QueryCompareJobProgressResp_global_info::QueryCompareJobProgressResp_global_info()
{
    srcSpeed_ = "";
    srcSpeedIsSet_ = false;
}

QueryCompareJobProgressResp_global_info::~QueryCompareJobProgressResp_global_info() = default;

void QueryCompareJobProgressResp_global_info::validate()
{
}

web::json::value QueryCompareJobProgressResp_global_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(srcSpeedIsSet_) {
        val[utility::conversions::to_string_t("src_speed")] = ModelBase::toJson(srcSpeed_);
    }

    return val;
}
bool QueryCompareJobProgressResp_global_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("src_speed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_speed"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcSpeed(refVal);
        }
    }
    return ok;
}


std::string QueryCompareJobProgressResp_global_info::getSrcSpeed() const
{
    return srcSpeed_;
}

void QueryCompareJobProgressResp_global_info::setSrcSpeed(const std::string& value)
{
    srcSpeed_ = value;
    srcSpeedIsSet_ = true;
}

bool QueryCompareJobProgressResp_global_info::srcSpeedIsSet() const
{
    return srcSpeedIsSet_;
}

void QueryCompareJobProgressResp_global_info::unsetsrcSpeed()
{
    srcSpeedIsSet_ = false;
}

}
}
}
}
}


