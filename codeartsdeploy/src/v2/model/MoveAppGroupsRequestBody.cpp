

#include "huaweicloud/codeartsdeploy/v2/model/MoveAppGroupsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




MoveAppGroupsRequestBody::MoveAppGroupsRequestBody()
{
    id_ = "";
    idIsSet_ = false;
    movement_ = 0;
    movementIsSet_ = false;
}

MoveAppGroupsRequestBody::~MoveAppGroupsRequestBody() = default;

void MoveAppGroupsRequestBody::validate()
{
}

web::json::value MoveAppGroupsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(movementIsSet_) {
        val[utility::conversions::to_string_t("movement")] = ModelBase::toJson(movement_);
    }

    return val;
}
bool MoveAppGroupsRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("movement"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("movement"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMovement(refVal);
        }
    }
    return ok;
}


std::string MoveAppGroupsRequestBody::getId() const
{
    return id_;
}

void MoveAppGroupsRequestBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MoveAppGroupsRequestBody::idIsSet() const
{
    return idIsSet_;
}

void MoveAppGroupsRequestBody::unsetid()
{
    idIsSet_ = false;
}

int32_t MoveAppGroupsRequestBody::getMovement() const
{
    return movement_;
}

void MoveAppGroupsRequestBody::setMovement(int32_t value)
{
    movement_ = value;
    movementIsSet_ = true;
}

bool MoveAppGroupsRequestBody::movementIsSet() const
{
    return movementIsSet_;
}

void MoveAppGroupsRequestBody::unsetmovement()
{
    movementIsSet_ = false;
}

}
}
}
}
}


