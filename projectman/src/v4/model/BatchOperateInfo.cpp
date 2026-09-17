

#include "huaweicloud/projectman/v4/model/BatchOperateInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchOperateInfo::BatchOperateInfo()
{
    id_ = "";
    idIsSet_ = false;
    modifiedBy_ = "";
    modifiedByIsSet_ = false;
}

BatchOperateInfo::~BatchOperateInfo() = default;

void BatchOperateInfo::validate()
{
}

web::json::value BatchOperateInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(modifiedByIsSet_) {
        val[utility::conversions::to_string_t("modified_by")] = ModelBase::toJson(modifiedBy_);
    }

    return val;
}
bool BatchOperateInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedBy(refVal);
        }
    }
    return ok;
}


std::string BatchOperateInfo::getId() const
{
    return id_;
}

void BatchOperateInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BatchOperateInfo::idIsSet() const
{
    return idIsSet_;
}

void BatchOperateInfo::unsetid()
{
    idIsSet_ = false;
}

std::string BatchOperateInfo::getModifiedBy() const
{
    return modifiedBy_;
}

void BatchOperateInfo::setModifiedBy(const std::string& value)
{
    modifiedBy_ = value;
    modifiedByIsSet_ = true;
}

bool BatchOperateInfo::modifiedByIsSet() const
{
    return modifiedByIsSet_;
}

void BatchOperateInfo::unsetmodifiedBy()
{
    modifiedByIsSet_ = false;
}

}
}
}
}
}


