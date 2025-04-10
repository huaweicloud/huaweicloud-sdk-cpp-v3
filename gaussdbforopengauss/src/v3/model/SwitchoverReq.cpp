

#include "huaweicloud/gaussdbforopengauss/v3/model/SwitchoverReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SwitchoverReq::SwitchoverReq()
{
    postProcessConfig_ = "";
    postProcessConfigIsSet_ = false;
    disasterType_ = "";
    disasterTypeIsSet_ = false;
}

SwitchoverReq::~SwitchoverReq() = default;

void SwitchoverReq::validate()
{
}

web::json::value SwitchoverReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(postProcessConfigIsSet_) {
        val[utility::conversions::to_string_t("post_process_config")] = ModelBase::toJson(postProcessConfig_);
    }
    if(disasterTypeIsSet_) {
        val[utility::conversions::to_string_t("disaster_type")] = ModelBase::toJson(disasterType_);
    }

    return val;
}
bool SwitchoverReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("post_process_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("post_process_config"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPostProcessConfig(refVal);
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


std::string SwitchoverReq::getPostProcessConfig() const
{
    return postProcessConfig_;
}

void SwitchoverReq::setPostProcessConfig(const std::string& value)
{
    postProcessConfig_ = value;
    postProcessConfigIsSet_ = true;
}

bool SwitchoverReq::postProcessConfigIsSet() const
{
    return postProcessConfigIsSet_;
}

void SwitchoverReq::unsetpostProcessConfig()
{
    postProcessConfigIsSet_ = false;
}

std::string SwitchoverReq::getDisasterType() const
{
    return disasterType_;
}

void SwitchoverReq::setDisasterType(const std::string& value)
{
    disasterType_ = value;
    disasterTypeIsSet_ = true;
}

bool SwitchoverReq::disasterTypeIsSet() const
{
    return disasterTypeIsSet_;
}

void SwitchoverReq::unsetdisasterType()
{
    disasterTypeIsSet_ = false;
}

}
}
}
}
}


