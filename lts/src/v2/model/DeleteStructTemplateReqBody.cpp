

#include "huaweicloud/lts/v2/model/DeleteStructTemplateReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DeleteStructTemplateReqBody::DeleteStructTemplateReqBody()
{
    id_ = "";
    idIsSet_ = false;
}

DeleteStructTemplateReqBody::~DeleteStructTemplateReqBody() = default;

void DeleteStructTemplateReqBody::validate()
{
}

web::json::value DeleteStructTemplateReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DeleteStructTemplateReqBody::fromJson(const web::json::value& val)
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


std::string DeleteStructTemplateReqBody::getId() const
{
    return id_;
}

void DeleteStructTemplateReqBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteStructTemplateReqBody::idIsSet() const
{
    return idIsSet_;
}

void DeleteStructTemplateReqBody::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


