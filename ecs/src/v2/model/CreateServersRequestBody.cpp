

#include "huaweicloud/ecs/v2/model/CreateServersRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




CreateServersRequestBody::CreateServersRequestBody()
{
    dryRun_ = false;
    dryRunIsSet_ = false;
    serverIsSet_ = false;
}

CreateServersRequestBody::~CreateServersRequestBody() = default;

void CreateServersRequestBody::validate()
{
}

web::json::value CreateServersRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dryRunIsSet_) {
        val[utility::conversions::to_string_t("dry_run")] = ModelBase::toJson(dryRun_);
    }
    if(serverIsSet_) {
        val[utility::conversions::to_string_t("server")] = ModelBase::toJson(server_);
    }

    return val;
}

bool CreateServersRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dry_run"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dry_run"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDryRun(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server"));
        if(!fieldValue.is_null())
        {
            PrePaidServer refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServer(refVal);
        }
    }
    return ok;
}

bool CreateServersRequestBody::isDryRun() const
{
    return dryRun_;
}

void CreateServersRequestBody::setDryRun(bool value)
{
    dryRun_ = value;
    dryRunIsSet_ = true;
}

bool CreateServersRequestBody::dryRunIsSet() const
{
    return dryRunIsSet_;
}

void CreateServersRequestBody::unsetdryRun()
{
    dryRunIsSet_ = false;
}

PrePaidServer CreateServersRequestBody::getServer() const
{
    return server_;
}

void CreateServersRequestBody::setServer(const PrePaidServer& value)
{
    server_ = value;
    serverIsSet_ = true;
}

bool CreateServersRequestBody::serverIsSet() const
{
    return serverIsSet_;
}

void CreateServersRequestBody::unsetserver()
{
    serverIsSet_ = false;
}

}
}
}
}
}


