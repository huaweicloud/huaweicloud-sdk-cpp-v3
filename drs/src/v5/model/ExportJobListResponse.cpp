

#include "huaweicloud/drs/v5/model/ExportJobListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ExportJobListResponse::ExportJobListResponse()
{
    id_ = "";
    idIsSet_ = false;
}

ExportJobListResponse::~ExportJobListResponse() = default;

void ExportJobListResponse::validate()
{
}

web::json::value ExportJobListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool ExportJobListResponse::fromJson(const web::json::value& val)
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


std::string ExportJobListResponse::getId() const
{
    return id_;
}

void ExportJobListResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ExportJobListResponse::idIsSet() const
{
    return idIsSet_;
}

void ExportJobListResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


