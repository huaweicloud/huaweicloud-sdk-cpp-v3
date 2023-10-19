

#include "huaweicloud/cfw/v1/model/BatchDeleteRuleInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchDeleteRuleInfo::BatchDeleteRuleInfo()
{
    name_ = "";
    nameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

BatchDeleteRuleInfo::~BatchDeleteRuleInfo() = default;

void BatchDeleteRuleInfo::validate()
{
}

web::json::value BatchDeleteRuleInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool BatchDeleteRuleInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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


std::string BatchDeleteRuleInfo::getName() const
{
    return name_;
}

void BatchDeleteRuleInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BatchDeleteRuleInfo::nameIsSet() const
{
    return nameIsSet_;
}

void BatchDeleteRuleInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string BatchDeleteRuleInfo::getId() const
{
    return id_;
}

void BatchDeleteRuleInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BatchDeleteRuleInfo::idIsSet() const
{
    return idIsSet_;
}

void BatchDeleteRuleInfo::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


