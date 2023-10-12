

#include "huaweicloud/codeartsdeploy/v2/model/ImportHostToEnvironmentRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ImportHostToEnvironmentRequestBody::ImportHostToEnvironmentRequestBody()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    hostIdsIsSet_ = false;
}

ImportHostToEnvironmentRequestBody::~ImportHostToEnvironmentRequestBody() = default;

void ImportHostToEnvironmentRequestBody::validate()
{
}

web::json::value ImportHostToEnvironmentRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(hostIdsIsSet_) {
        val[utility::conversions::to_string_t("host_ids")] = ModelBase::toJson(hostIds_);
    }

    return val;
}
bool ImportHostToEnvironmentRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("host_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostIds(refVal);
        }
    }
    return ok;
}


std::string ImportHostToEnvironmentRequestBody::getGroupId() const
{
    return groupId_;
}

void ImportHostToEnvironmentRequestBody::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ImportHostToEnvironmentRequestBody::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ImportHostToEnvironmentRequestBody::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::vector<std::string>& ImportHostToEnvironmentRequestBody::getHostIds()
{
    return hostIds_;
}

void ImportHostToEnvironmentRequestBody::setHostIds(const std::vector<std::string>& value)
{
    hostIds_ = value;
    hostIdsIsSet_ = true;
}

bool ImportHostToEnvironmentRequestBody::hostIdsIsSet() const
{
    return hostIdsIsSet_;
}

void ImportHostToEnvironmentRequestBody::unsethostIds()
{
    hostIdsIsSet_ = false;
}

}
}
}
}
}


