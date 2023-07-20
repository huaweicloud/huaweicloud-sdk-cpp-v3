

#include "huaweicloud/gaussdbfornosql/v3/model/ApplicableInstanceRsp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ApplicableInstanceRsp::ApplicableInstanceRsp()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ApplicableInstanceRsp::~ApplicableInstanceRsp() = default;

void ApplicableInstanceRsp::validate()
{
}

web::json::value ApplicableInstanceRsp::toJson() const
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

bool ApplicableInstanceRsp::fromJson(const web::json::value& val)
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

std::string ApplicableInstanceRsp::getId() const
{
    return id_;
}

void ApplicableInstanceRsp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ApplicableInstanceRsp::idIsSet() const
{
    return idIsSet_;
}

void ApplicableInstanceRsp::unsetid()
{
    idIsSet_ = false;
}

std::string ApplicableInstanceRsp::getName() const
{
    return name_;
}

void ApplicableInstanceRsp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ApplicableInstanceRsp::nameIsSet() const
{
    return nameIsSet_;
}

void ApplicableInstanceRsp::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


