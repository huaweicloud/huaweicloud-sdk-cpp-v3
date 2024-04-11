

#include "huaweicloud/drs/v3/model/CreateDataLevelTableCompareJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




CreateDataLevelTableCompareJobResponse::CreateDataLevelTableCompareJobResponse()
{
    id_ = "";
    idIsSet_ = false;
}

CreateDataLevelTableCompareJobResponse::~CreateDataLevelTableCompareJobResponse() = default;

void CreateDataLevelTableCompareJobResponse::validate()
{
}

web::json::value CreateDataLevelTableCompareJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool CreateDataLevelTableCompareJobResponse::fromJson(const web::json::value& val)
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


std::string CreateDataLevelTableCompareJobResponse::getId() const
{
    return id_;
}

void CreateDataLevelTableCompareJobResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateDataLevelTableCompareJobResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateDataLevelTableCompareJobResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


