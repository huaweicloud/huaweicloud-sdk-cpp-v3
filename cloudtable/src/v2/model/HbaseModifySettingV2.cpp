

#include "huaweicloud/cloudtable/v2/model/HbaseModifySettingV2.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




HbaseModifySettingV2::HbaseModifySettingV2()
{
    parmName_ = "";
    parmNameIsSet_ = false;
    newValue_ = "";
    newValueIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

HbaseModifySettingV2::~HbaseModifySettingV2() = default;

void HbaseModifySettingV2::validate()
{
}

web::json::value HbaseModifySettingV2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(parmNameIsSet_) {
        val[utility::conversions::to_string_t("parm_name")] = ModelBase::toJson(parmName_);
    }
    if(newValueIsSet_) {
        val[utility::conversions::to_string_t("new_value")] = ModelBase::toJson(newValue_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}

bool HbaseModifySettingV2::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("parm_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parm_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParmName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}

std::string HbaseModifySettingV2::getParmName() const
{
    return parmName_;
}

void HbaseModifySettingV2::setParmName(const std::string& value)
{
    parmName_ = value;
    parmNameIsSet_ = true;
}

bool HbaseModifySettingV2::parmNameIsSet() const
{
    return parmNameIsSet_;
}

void HbaseModifySettingV2::unsetparmName()
{
    parmNameIsSet_ = false;
}

std::string HbaseModifySettingV2::getNewValue() const
{
    return newValue_;
}

void HbaseModifySettingV2::setNewValue(const std::string& value)
{
    newValue_ = value;
    newValueIsSet_ = true;
}

bool HbaseModifySettingV2::newValueIsSet() const
{
    return newValueIsSet_;
}

void HbaseModifySettingV2::unsetnewValue()
{
    newValueIsSet_ = false;
}

std::string HbaseModifySettingV2::getId() const
{
    return id_;
}

void HbaseModifySettingV2::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool HbaseModifySettingV2::idIsSet() const
{
    return idIsSet_;
}

void HbaseModifySettingV2::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


