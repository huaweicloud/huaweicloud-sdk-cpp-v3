

#include "huaweicloud/modelarts/v1/model/CreateTempApiKeyReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateTempApiKeyReq::CreateTempApiKeyReq()
{
    expireTime_ = 0L;
    expireTimeIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
}

CreateTempApiKeyReq::~CreateTempApiKeyReq() = default;

void CreateTempApiKeyReq::validate()
{
}

web::json::value CreateTempApiKeyReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }

    return val;
}
bool CreateTempApiKeyReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("expire_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    return ok;
}


int64_t CreateTempApiKeyReq::getExpireTime() const
{
    return expireTime_;
}

void CreateTempApiKeyReq::setExpireTime(int64_t value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool CreateTempApiKeyReq::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void CreateTempApiKeyReq::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

std::string CreateTempApiKeyReq::getWorkspaceId() const
{
    return workspaceId_;
}

void CreateTempApiKeyReq::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool CreateTempApiKeyReq::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void CreateTempApiKeyReq::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

}
}
}
}
}


