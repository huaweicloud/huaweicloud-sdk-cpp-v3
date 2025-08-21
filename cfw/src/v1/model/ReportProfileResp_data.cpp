

#include "huaweicloud/cfw/v1/model/ReportProfileResp_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ReportProfileResp_data::ReportProfileResp_data()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ReportProfileResp_data::~ReportProfileResp_data() = default;

void ReportProfileResp_data::validate()
{
}

web::json::value ReportProfileResp_data::toJson() const
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
bool ReportProfileResp_data::fromJson(const web::json::value& val)
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


std::string ReportProfileResp_data::getId() const
{
    return id_;
}

void ReportProfileResp_data::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ReportProfileResp_data::idIsSet() const
{
    return idIsSet_;
}

void ReportProfileResp_data::unsetid()
{
    idIsSet_ = false;
}

std::string ReportProfileResp_data::getName() const
{
    return name_;
}

void ReportProfileResp_data::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ReportProfileResp_data::nameIsSet() const
{
    return nameIsSet_;
}

void ReportProfileResp_data::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


