

#include "huaweicloud/gaussdb/v3/model/SwitchGaussMySqlProxyBinlogPullRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SwitchGaussMySqlProxyBinlogPullRequestBody::SwitchGaussMySqlProxyBinlogPullRequestBody()
{
    type_ = "";
    typeIsSet_ = false;
    supportBinlogPull_ = false;
    supportBinlogPullIsSet_ = false;
    binlogRouteMaster_ = false;
    binlogRouteMasterIsSet_ = false;
}

SwitchGaussMySqlProxyBinlogPullRequestBody::~SwitchGaussMySqlProxyBinlogPullRequestBody() = default;

void SwitchGaussMySqlProxyBinlogPullRequestBody::validate()
{
}

web::json::value SwitchGaussMySqlProxyBinlogPullRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(supportBinlogPullIsSet_) {
        val[utility::conversions::to_string_t("support_binlog_pull")] = ModelBase::toJson(supportBinlogPull_);
    }
    if(binlogRouteMasterIsSet_) {
        val[utility::conversions::to_string_t("binlog_route_master")] = ModelBase::toJson(binlogRouteMaster_);
    }

    return val;
}
bool SwitchGaussMySqlProxyBinlogPullRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_binlog_pull"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_binlog_pull"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportBinlogPull(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("binlog_route_master"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("binlog_route_master"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBinlogRouteMaster(refVal);
        }
    }
    return ok;
}


std::string SwitchGaussMySqlProxyBinlogPullRequestBody::getType() const
{
    return type_;
}

void SwitchGaussMySqlProxyBinlogPullRequestBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SwitchGaussMySqlProxyBinlogPullRequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void SwitchGaussMySqlProxyBinlogPullRequestBody::unsettype()
{
    typeIsSet_ = false;
}

bool SwitchGaussMySqlProxyBinlogPullRequestBody::isSupportBinlogPull() const
{
    return supportBinlogPull_;
}

void SwitchGaussMySqlProxyBinlogPullRequestBody::setSupportBinlogPull(bool value)
{
    supportBinlogPull_ = value;
    supportBinlogPullIsSet_ = true;
}

bool SwitchGaussMySqlProxyBinlogPullRequestBody::supportBinlogPullIsSet() const
{
    return supportBinlogPullIsSet_;
}

void SwitchGaussMySqlProxyBinlogPullRequestBody::unsetsupportBinlogPull()
{
    supportBinlogPullIsSet_ = false;
}

bool SwitchGaussMySqlProxyBinlogPullRequestBody::isBinlogRouteMaster() const
{
    return binlogRouteMaster_;
}

void SwitchGaussMySqlProxyBinlogPullRequestBody::setBinlogRouteMaster(bool value)
{
    binlogRouteMaster_ = value;
    binlogRouteMasterIsSet_ = true;
}

bool SwitchGaussMySqlProxyBinlogPullRequestBody::binlogRouteMasterIsSet() const
{
    return binlogRouteMasterIsSet_;
}

void SwitchGaussMySqlProxyBinlogPullRequestBody::unsetbinlogRouteMaster()
{
    binlogRouteMasterIsSet_ = false;
}

}
}
}
}
}


