

#include "huaweicloud/csms/v1/model/UserOrgRelationListResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




UserOrgRelationListResult::UserOrgRelationListResult()
{
    orgId_ = "";
    orgIdIsSet_ = false;
    relationType_ = "";
    relationTypeIsSet_ = false;
}

UserOrgRelationListResult::~UserOrgRelationListResult() = default;

void UserOrgRelationListResult::validate()
{
}

web::json::value UserOrgRelationListResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(orgIdIsSet_) {
        val[utility::conversions::to_string_t("org_id")] = ModelBase::toJson(orgId_);
    }
    if(relationTypeIsSet_) {
        val[utility::conversions::to_string_t("relation_type")] = ModelBase::toJson(relationType_);
    }

    return val;
}
bool UserOrgRelationListResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("org_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("org_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrgId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relation_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relation_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelationType(refVal);
        }
    }
    return ok;
}


std::string UserOrgRelationListResult::getOrgId() const
{
    return orgId_;
}

void UserOrgRelationListResult::setOrgId(const std::string& value)
{
    orgId_ = value;
    orgIdIsSet_ = true;
}

bool UserOrgRelationListResult::orgIdIsSet() const
{
    return orgIdIsSet_;
}

void UserOrgRelationListResult::unsetorgId()
{
    orgIdIsSet_ = false;
}

std::string UserOrgRelationListResult::getRelationType() const
{
    return relationType_;
}

void UserOrgRelationListResult::setRelationType(const std::string& value)
{
    relationType_ = value;
    relationTypeIsSet_ = true;
}

bool UserOrgRelationListResult::relationTypeIsSet() const
{
    return relationTypeIsSet_;
}

void UserOrgRelationListResult::unsetrelationType()
{
    relationTypeIsSet_ = false;
}

}
}
}
}
}


