

#include "huaweicloud/projectman/v4/model/DeleteThirdPartyAssociateVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




DeleteThirdPartyAssociateVO::DeleteThirdPartyAssociateVO()
{
    id_ = "";
    idIsSet_ = false;
}

DeleteThirdPartyAssociateVO::~DeleteThirdPartyAssociateVO() = default;

void DeleteThirdPartyAssociateVO::validate()
{
}

web::json::value DeleteThirdPartyAssociateVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DeleteThirdPartyAssociateVO::fromJson(const web::json::value& val)
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


std::string DeleteThirdPartyAssociateVO::getId() const
{
    return id_;
}

void DeleteThirdPartyAssociateVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteThirdPartyAssociateVO::idIsSet() const
{
    return idIsSet_;
}

void DeleteThirdPartyAssociateVO::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


