

#include "huaweicloud/cfw/v1/model/BatchDeleteAddressSetsResp_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchDeleteAddressSetsResp_data::BatchDeleteAddressSetsResp_data()
{
    name_ = "";
    nameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

BatchDeleteAddressSetsResp_data::~BatchDeleteAddressSetsResp_data() = default;

void BatchDeleteAddressSetsResp_data::validate()
{
}

web::json::value BatchDeleteAddressSetsResp_data::toJson() const
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
bool BatchDeleteAddressSetsResp_data::fromJson(const web::json::value& val)
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


std::string BatchDeleteAddressSetsResp_data::getName() const
{
    return name_;
}

void BatchDeleteAddressSetsResp_data::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BatchDeleteAddressSetsResp_data::nameIsSet() const
{
    return nameIsSet_;
}

void BatchDeleteAddressSetsResp_data::unsetname()
{
    nameIsSet_ = false;
}

std::string BatchDeleteAddressSetsResp_data::getId() const
{
    return id_;
}

void BatchDeleteAddressSetsResp_data::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BatchDeleteAddressSetsResp_data::idIsSet() const
{
    return idIsSet_;
}

void BatchDeleteAddressSetsResp_data::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


