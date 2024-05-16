

#include "huaweicloud/gaussdb/v3/model/SrCreateInstanceRsp_instance_engine.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SrCreateInstanceRsp_instance_engine::SrCreateInstanceRsp_instance_engine()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

SrCreateInstanceRsp_instance_engine::~SrCreateInstanceRsp_instance_engine() = default;

void SrCreateInstanceRsp_instance_engine::validate()
{
}

web::json::value SrCreateInstanceRsp_instance_engine::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool SrCreateInstanceRsp_instance_engine::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    return ok;
}


std::string SrCreateInstanceRsp_instance_engine::getType() const
{
    return type_;
}

void SrCreateInstanceRsp_instance_engine::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SrCreateInstanceRsp_instance_engine::typeIsSet() const
{
    return typeIsSet_;
}

void SrCreateInstanceRsp_instance_engine::unsettype()
{
    typeIsSet_ = false;
}

std::string SrCreateInstanceRsp_instance_engine::getVersion() const
{
    return version_;
}

void SrCreateInstanceRsp_instance_engine::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool SrCreateInstanceRsp_instance_engine::versionIsSet() const
{
    return versionIsSet_;
}

void SrCreateInstanceRsp_instance_engine::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


