

#include "huaweicloud/cfw/v1/model/ResponseData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ResponseData::ResponseData()
{
    id_ = "";
    idIsSet_ = false;
}

ResponseData::~ResponseData() = default;

void ResponseData::validate()
{
}

web::json::value ResponseData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool ResponseData::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ResponseData::getId() const
{
    return id_;
}

void ResponseData::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ResponseData::idIsSet() const
{
    return idIsSet_;
}

void ResponseData::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


