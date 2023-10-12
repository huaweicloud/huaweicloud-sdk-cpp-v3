

#include "huaweicloud/ecs/v2/model/BatchResetServersPasswordRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchResetServersPasswordRequestBody::BatchResetServersPasswordRequestBody()
{
    newPassword_ = "";
    newPasswordIsSet_ = false;
    dryRun_ = false;
    dryRunIsSet_ = false;
    serversIsSet_ = false;
}

BatchResetServersPasswordRequestBody::~BatchResetServersPasswordRequestBody() = default;

void BatchResetServersPasswordRequestBody::validate()
{
}

web::json::value BatchResetServersPasswordRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(newPasswordIsSet_) {
        val[utility::conversions::to_string_t("new_password")] = ModelBase::toJson(newPassword_);
    }
    if(dryRunIsSet_) {
        val[utility::conversions::to_string_t("dry_run")] = ModelBase::toJson(dryRun_);
    }
    if(serversIsSet_) {
        val[utility::conversions::to_string_t("servers")] = ModelBase::toJson(servers_);
    }

    return val;
}
bool BatchResetServersPasswordRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("new_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dry_run"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dry_run"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDryRun(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("servers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("servers"));
        if(!fieldValue.is_null())
        {
            std::vector<ServerId> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServers(refVal);
        }
    }
    return ok;
}


std::string BatchResetServersPasswordRequestBody::getNewPassword() const
{
    return newPassword_;
}

void BatchResetServersPasswordRequestBody::setNewPassword(const std::string& value)
{
    newPassword_ = value;
    newPasswordIsSet_ = true;
}

bool BatchResetServersPasswordRequestBody::newPasswordIsSet() const
{
    return newPasswordIsSet_;
}

void BatchResetServersPasswordRequestBody::unsetnewPassword()
{
    newPasswordIsSet_ = false;
}

bool BatchResetServersPasswordRequestBody::isDryRun() const
{
    return dryRun_;
}

void BatchResetServersPasswordRequestBody::setDryRun(bool value)
{
    dryRun_ = value;
    dryRunIsSet_ = true;
}

bool BatchResetServersPasswordRequestBody::dryRunIsSet() const
{
    return dryRunIsSet_;
}

void BatchResetServersPasswordRequestBody::unsetdryRun()
{
    dryRunIsSet_ = false;
}

std::vector<ServerId>& BatchResetServersPasswordRequestBody::getServers()
{
    return servers_;
}

void BatchResetServersPasswordRequestBody::setServers(const std::vector<ServerId>& value)
{
    servers_ = value;
    serversIsSet_ = true;
}

bool BatchResetServersPasswordRequestBody::serversIsSet() const
{
    return serversIsSet_;
}

void BatchResetServersPasswordRequestBody::unsetservers()
{
    serversIsSet_ = false;
}

}
}
}
}
}


