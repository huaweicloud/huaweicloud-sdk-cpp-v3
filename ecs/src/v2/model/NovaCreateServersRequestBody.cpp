

#include "huaweicloud/ecs/v2/model/NovaCreateServersRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaCreateServersRequestBody::NovaCreateServersRequestBody()
{
    serverIsSet_ = false;
    osschedulerHintsIsSet_ = false;
}

NovaCreateServersRequestBody::~NovaCreateServersRequestBody() = default;

void NovaCreateServersRequestBody::validate()
{
}

web::json::value NovaCreateServersRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIsSet_) {
        val[utility::conversions::to_string_t("server")] = ModelBase::toJson(server_);
    }
    if(osschedulerHintsIsSet_) {
        val[utility::conversions::to_string_t("os:scheduler_hints")] = ModelBase::toJson(osschedulerHints_);
    }

    return val;
}

bool NovaCreateServersRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server"));
        if(!fieldValue.is_null())
        {
            NovaCreateServersOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os:scheduler_hints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os:scheduler_hints"));
        if(!fieldValue.is_null())
        {
            NovaCreateServersSchedulerHint refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsschedulerHints(refVal);
        }
    }
    return ok;
}


NovaCreateServersOption NovaCreateServersRequestBody::getServer() const
{
    return server_;
}

void NovaCreateServersRequestBody::setServer(const NovaCreateServersOption& value)
{
    server_ = value;
    serverIsSet_ = true;
}

bool NovaCreateServersRequestBody::serverIsSet() const
{
    return serverIsSet_;
}

void NovaCreateServersRequestBody::unsetserver()
{
    serverIsSet_ = false;
}

NovaCreateServersSchedulerHint NovaCreateServersRequestBody::getOsschedulerHints() const
{
    return osschedulerHints_;
}

void NovaCreateServersRequestBody::setOsschedulerHints(const NovaCreateServersSchedulerHint& value)
{
    osschedulerHints_ = value;
    osschedulerHintsIsSet_ = true;
}

bool NovaCreateServersRequestBody::osschedulerHintsIsSet() const
{
    return osschedulerHintsIsSet_;
}

void NovaCreateServersRequestBody::unsetosschedulerHints()
{
    osschedulerHintsIsSet_ = false;
}

}
}
}
}
}


