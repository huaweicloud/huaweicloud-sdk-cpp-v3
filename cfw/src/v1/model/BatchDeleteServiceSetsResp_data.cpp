

#include "huaweicloud/cfw/v1/model/BatchDeleteServiceSetsResp_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchDeleteServiceSetsResp_data::BatchDeleteServiceSetsResp_data()
{
    name_ = "";
    nameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

BatchDeleteServiceSetsResp_data::~BatchDeleteServiceSetsResp_data() = default;

void BatchDeleteServiceSetsResp_data::validate()
{
}

web::json::value BatchDeleteServiceSetsResp_data::toJson() const
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
bool BatchDeleteServiceSetsResp_data::fromJson(const web::json::value& val)
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


std::string BatchDeleteServiceSetsResp_data::getName() const
{
    return name_;
}

void BatchDeleteServiceSetsResp_data::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BatchDeleteServiceSetsResp_data::nameIsSet() const
{
    return nameIsSet_;
}

void BatchDeleteServiceSetsResp_data::unsetname()
{
    nameIsSet_ = false;
}

std::string BatchDeleteServiceSetsResp_data::getId() const
{
    return id_;
}

void BatchDeleteServiceSetsResp_data::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BatchDeleteServiceSetsResp_data::idIsSet() const
{
    return idIsSet_;
}

void BatchDeleteServiceSetsResp_data::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


