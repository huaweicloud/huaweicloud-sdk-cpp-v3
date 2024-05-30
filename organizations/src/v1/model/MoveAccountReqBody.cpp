

#include "huaweicloud/organizations/v1/model/MoveAccountReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




MoveAccountReqBody::MoveAccountReqBody()
{
    sourceParentId_ = "";
    sourceParentIdIsSet_ = false;
    destinationParentId_ = "";
    destinationParentIdIsSet_ = false;
}

MoveAccountReqBody::~MoveAccountReqBody() = default;

void MoveAccountReqBody::validate()
{
}

web::json::value MoveAccountReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceParentIdIsSet_) {
        val[utility::conversions::to_string_t("source_parent_id")] = ModelBase::toJson(sourceParentId_);
    }
    if(destinationParentIdIsSet_) {
        val[utility::conversions::to_string_t("destination_parent_id")] = ModelBase::toJson(destinationParentId_);
    }

    return val;
}
bool MoveAccountReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceParentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationParentId(refVal);
        }
    }
    return ok;
}


std::string MoveAccountReqBody::getSourceParentId() const
{
    return sourceParentId_;
}

void MoveAccountReqBody::setSourceParentId(const std::string& value)
{
    sourceParentId_ = value;
    sourceParentIdIsSet_ = true;
}

bool MoveAccountReqBody::sourceParentIdIsSet() const
{
    return sourceParentIdIsSet_;
}

void MoveAccountReqBody::unsetsourceParentId()
{
    sourceParentIdIsSet_ = false;
}

std::string MoveAccountReqBody::getDestinationParentId() const
{
    return destinationParentId_;
}

void MoveAccountReqBody::setDestinationParentId(const std::string& value)
{
    destinationParentId_ = value;
    destinationParentIdIsSet_ = true;
}

bool MoveAccountReqBody::destinationParentIdIsSet() const
{
    return destinationParentIdIsSet_;
}

void MoveAccountReqBody::unsetdestinationParentId()
{
    destinationParentIdIsSet_ = false;
}

}
}
}
}
}


