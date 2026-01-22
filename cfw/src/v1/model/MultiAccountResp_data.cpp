

#include "huaweicloud/cfw/v1/model/MultiAccountResp_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




MultiAccountResp_data::MultiAccountResp_data()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

MultiAccountResp_data::~MultiAccountResp_data() = default;

void MultiAccountResp_data::validate()
{
}

web::json::value MultiAccountResp_data::toJson() const
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
bool MultiAccountResp_data::fromJson(const web::json::value& val)
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


std::string MultiAccountResp_data::getId() const
{
    return id_;
}

void MultiAccountResp_data::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MultiAccountResp_data::idIsSet() const
{
    return idIsSet_;
}

void MultiAccountResp_data::unsetid()
{
    idIsSet_ = false;
}

std::string MultiAccountResp_data::getName() const
{
    return name_;
}

void MultiAccountResp_data::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MultiAccountResp_data::nameIsSet() const
{
    return nameIsSet_;
}

void MultiAccountResp_data::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


