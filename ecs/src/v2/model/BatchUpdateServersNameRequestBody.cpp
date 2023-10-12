

#include "huaweicloud/ecs/v2/model/BatchUpdateServersNameRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchUpdateServersNameRequestBody::BatchUpdateServersNameRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    dryRun_ = false;
    dryRunIsSet_ = false;
    serversIsSet_ = false;
}

BatchUpdateServersNameRequestBody::~BatchUpdateServersNameRequestBody() = default;

void BatchUpdateServersNameRequestBody::validate()
{
}

web::json::value BatchUpdateServersNameRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(dryRunIsSet_) {
        val[utility::conversions::to_string_t("dry_run")] = ModelBase::toJson(dryRun_);
    }
    if(serversIsSet_) {
        val[utility::conversions::to_string_t("servers")] = ModelBase::toJson(servers_);
    }

    return val;
}
bool BatchUpdateServersNameRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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


std::string BatchUpdateServersNameRequestBody::getName() const
{
    return name_;
}

void BatchUpdateServersNameRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BatchUpdateServersNameRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void BatchUpdateServersNameRequestBody::unsetname()
{
    nameIsSet_ = false;
}

bool BatchUpdateServersNameRequestBody::isDryRun() const
{
    return dryRun_;
}

void BatchUpdateServersNameRequestBody::setDryRun(bool value)
{
    dryRun_ = value;
    dryRunIsSet_ = true;
}

bool BatchUpdateServersNameRequestBody::dryRunIsSet() const
{
    return dryRunIsSet_;
}

void BatchUpdateServersNameRequestBody::unsetdryRun()
{
    dryRunIsSet_ = false;
}

std::vector<ServerId>& BatchUpdateServersNameRequestBody::getServers()
{
    return servers_;
}

void BatchUpdateServersNameRequestBody::setServers(const std::vector<ServerId>& value)
{
    servers_ = value;
    serversIsSet_ = true;
}

bool BatchUpdateServersNameRequestBody::serversIsSet() const
{
    return serversIsSet_;
}

void BatchUpdateServersNameRequestBody::unsetservers()
{
    serversIsSet_ = false;
}

}
}
}
}
}


