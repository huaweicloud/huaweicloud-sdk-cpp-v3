

#include "huaweicloud/gaussdb/v3/model/ChInstancesInfoRsponse_instance_param_group.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ChInstancesInfoRsponse_instance_param_group::ChInstancesInfoRsponse_instance_param_group()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ChInstancesInfoRsponse_instance_param_group::~ChInstancesInfoRsponse_instance_param_group() = default;

void ChInstancesInfoRsponse_instance_param_group::validate()
{
}

web::json::value ChInstancesInfoRsponse_instance_param_group::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ChInstancesInfoRsponse_instance_param_group::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string ChInstancesInfoRsponse_instance_param_group::getId() const
{
    return id_;
}

void ChInstancesInfoRsponse_instance_param_group::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance_param_group::idIsSet() const
{
    return idIsSet_;
}

void ChInstancesInfoRsponse_instance_param_group::unsetid()
{
    idIsSet_ = false;
}

std::string ChInstancesInfoRsponse_instance_param_group::getName() const
{
    return name_;
}

void ChInstancesInfoRsponse_instance_param_group::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance_param_group::nameIsSet() const
{
    return nameIsSet_;
}

void ChInstancesInfoRsponse_instance_param_group::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


