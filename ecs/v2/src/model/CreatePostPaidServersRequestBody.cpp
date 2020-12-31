

#include "huaweicloud/ecs/model/CreatePostPaidServersRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




CreatePostPaidServersRequestBody::CreatePostPaidServersRequestBody()
{
    dryRun_ = false;
    dryRunIsSet_ = false;
    serverIsSet_ = false;
}

CreatePostPaidServersRequestBody::~CreatePostPaidServersRequestBody() = default;

void CreatePostPaidServersRequestBody::validate()
{
}

web::json::value CreatePostPaidServersRequestBody::toJson() const
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

bool CreatePostPaidServersRequestBody::fromJson(const web::json::value& val)
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
            PostPaidServer refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServer(refVal);
        }
    }
    return ok;
}


bool CreatePostPaidServersRequestBody::isDryRun() const
{
    return dryRun_;
}

void CreatePostPaidServersRequestBody::setDryRun(bool value)
{
    dryRun_ = value;
    dryRunIsSet_ = true;
}

bool CreatePostPaidServersRequestBody::dryRunIsSet() const
{
    return dryRunIsSet_;
}

void CreatePostPaidServersRequestBody::unsetdryRun()
{
    dryRunIsSet_ = false;
}

PostPaidServer CreatePostPaidServersRequestBody::getServer() const
{
    return server_;
}

void CreatePostPaidServersRequestBody::setServer(const PostPaidServer& value)
{
    server_ = value;
    serverIsSet_ = true;
}

bool CreatePostPaidServersRequestBody::serverIsSet() const
{
    return serverIsSet_;
}

void CreatePostPaidServersRequestBody::unsetserver()
{
    serverIsSet_ = false;
}

}
}
}
}
}


