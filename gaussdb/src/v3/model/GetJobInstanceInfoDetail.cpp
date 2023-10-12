

#include "huaweicloud/gaussdb/v3/model/GetJobInstanceInfoDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




GetJobInstanceInfoDetail::GetJobInstanceInfoDetail()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

GetJobInstanceInfoDetail::~GetJobInstanceInfoDetail() = default;

void GetJobInstanceInfoDetail::validate()
{
}

web::json::value GetJobInstanceInfoDetail::toJson() const
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
bool GetJobInstanceInfoDetail::fromJson(const web::json::value& val)
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


std::string GetJobInstanceInfoDetail::getId() const
{
    return id_;
}

void GetJobInstanceInfoDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GetJobInstanceInfoDetail::idIsSet() const
{
    return idIsSet_;
}

void GetJobInstanceInfoDetail::unsetid()
{
    idIsSet_ = false;
}

std::string GetJobInstanceInfoDetail::getName() const
{
    return name_;
}

void GetJobInstanceInfoDetail::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GetJobInstanceInfoDetail::nameIsSet() const
{
    return nameIsSet_;
}

void GetJobInstanceInfoDetail::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


