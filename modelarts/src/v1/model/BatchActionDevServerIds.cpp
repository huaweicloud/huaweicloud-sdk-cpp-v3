

#include "huaweicloud/modelarts/v1/model/BatchActionDevServerIds.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchActionDevServerIds::BatchActionDevServerIds()
{
    id_ = "";
    idIsSet_ = false;
}

BatchActionDevServerIds::~BatchActionDevServerIds() = default;

void BatchActionDevServerIds::validate()
{
}

web::json::value BatchActionDevServerIds::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool BatchActionDevServerIds::fromJson(const web::json::value& val)
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


std::string BatchActionDevServerIds::getId() const
{
    return id_;
}

void BatchActionDevServerIds::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BatchActionDevServerIds::idIsSet() const
{
    return idIsSet_;
}

void BatchActionDevServerIds::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


