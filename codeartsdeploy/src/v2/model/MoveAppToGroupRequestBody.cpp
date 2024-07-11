

#include "huaweicloud/codeartsdeploy/v2/model/MoveAppToGroupRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




MoveAppToGroupRequestBody::MoveAppToGroupRequestBody()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    applicationIdsIsSet_ = false;
}

MoveAppToGroupRequestBody::~MoveAppToGroupRequestBody() = default;

void MoveAppToGroupRequestBody::validate()
{
}

web::json::value MoveAppToGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(applicationIdsIsSet_) {
        val[utility::conversions::to_string_t("application_ids")] = ModelBase::toJson(applicationIds_);
    }

    return val;
}
bool MoveAppToGroupRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("application_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationIds(refVal);
        }
    }
    return ok;
}


std::string MoveAppToGroupRequestBody::getGroupId() const
{
    return groupId_;
}

void MoveAppToGroupRequestBody::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool MoveAppToGroupRequestBody::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void MoveAppToGroupRequestBody::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::vector<std::string>& MoveAppToGroupRequestBody::getApplicationIds()
{
    return applicationIds_;
}

void MoveAppToGroupRequestBody::setApplicationIds(const std::vector<std::string>& value)
{
    applicationIds_ = value;
    applicationIdsIsSet_ = true;
}

bool MoveAppToGroupRequestBody::applicationIdsIsSet() const
{
    return applicationIdsIsSet_;
}

void MoveAppToGroupRequestBody::unsetapplicationIds()
{
    applicationIdsIsSet_ = false;
}

}
}
}
}
}


