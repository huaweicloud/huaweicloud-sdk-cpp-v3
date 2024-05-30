

#include "huaweicloud/organizations/v1/model/PolicyTachReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




PolicyTachReqBody::PolicyTachReqBody()
{
    entityId_ = "";
    entityIdIsSet_ = false;
}

PolicyTachReqBody::~PolicyTachReqBody() = default;

void PolicyTachReqBody::validate()
{
}

web::json::value PolicyTachReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(entityIdIsSet_) {
        val[utility::conversions::to_string_t("entity_id")] = ModelBase::toJson(entityId_);
    }

    return val;
}
bool PolicyTachReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("entity_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entity_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntityId(refVal);
        }
    }
    return ok;
}


std::string PolicyTachReqBody::getEntityId() const
{
    return entityId_;
}

void PolicyTachReqBody::setEntityId(const std::string& value)
{
    entityId_ = value;
    entityIdIsSet_ = true;
}

bool PolicyTachReqBody::entityIdIsSet() const
{
    return entityIdIsSet_;
}

void PolicyTachReqBody::unsetentityId()
{
    entityIdIsSet_ = false;
}

}
}
}
}
}


