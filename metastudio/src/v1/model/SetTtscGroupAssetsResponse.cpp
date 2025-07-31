

#include "huaweicloud/metastudio/v1/model/SetTtscGroupAssetsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SetTtscGroupAssetsResponse::SetTtscGroupAssetsResponse()
{
    id_ = "";
    idIsSet_ = false;
}

SetTtscGroupAssetsResponse::~SetTtscGroupAssetsResponse() = default;

void SetTtscGroupAssetsResponse::validate()
{
}

web::json::value SetTtscGroupAssetsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool SetTtscGroupAssetsResponse::fromJson(const web::json::value& val)
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


std::string SetTtscGroupAssetsResponse::getId() const
{
    return id_;
}

void SetTtscGroupAssetsResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SetTtscGroupAssetsResponse::idIsSet() const
{
    return idIsSet_;
}

void SetTtscGroupAssetsResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


