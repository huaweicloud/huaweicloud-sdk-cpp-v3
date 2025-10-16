

#include "huaweicloud/cpcs/v1/model/ShowStatisticResourceResponseBody_datapoints.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowStatisticResourceResponseBody_datapoints::ShowStatisticResourceResponseBody_datapoints()
{
    data_ = 0;
    dataIsSet_ = false;
    count_ = 0L;
    countIsSet_ = false;
    apiName_ = "";
    apiNameIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    serverType_ = "";
    serverTypeIsSet_ = false;
}

ShowStatisticResourceResponseBody_datapoints::~ShowStatisticResourceResponseBody_datapoints() = default;

void ShowStatisticResourceResponseBody_datapoints::validate()
{
}

web::json::value ShowStatisticResourceResponseBody_datapoints::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(apiNameIsSet_) {
        val[utility::conversions::to_string_t("api_name")] = ModelBase::toJson(apiName_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(serverTypeIsSet_) {
        val[utility::conversions::to_string_t("server_type")] = ModelBase::toJson(serverType_);
    }

    return val;
}
bool ShowStatisticResourceResponseBody_datapoints::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("api_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("api_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerType(refVal);
        }
    }
    return ok;
}


int32_t ShowStatisticResourceResponseBody_datapoints::getData() const
{
    return data_;
}

void ShowStatisticResourceResponseBody_datapoints::setData(int32_t value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowStatisticResourceResponseBody_datapoints::dataIsSet() const
{
    return dataIsSet_;
}

void ShowStatisticResourceResponseBody_datapoints::unsetdata()
{
    dataIsSet_ = false;
}

int64_t ShowStatisticResourceResponseBody_datapoints::getCount() const
{
    return count_;
}

void ShowStatisticResourceResponseBody_datapoints::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowStatisticResourceResponseBody_datapoints::countIsSet() const
{
    return countIsSet_;
}

void ShowStatisticResourceResponseBody_datapoints::unsetcount()
{
    countIsSet_ = false;
}

std::string ShowStatisticResourceResponseBody_datapoints::getApiName() const
{
    return apiName_;
}

void ShowStatisticResourceResponseBody_datapoints::setApiName(const std::string& value)
{
    apiName_ = value;
    apiNameIsSet_ = true;
}

bool ShowStatisticResourceResponseBody_datapoints::apiNameIsSet() const
{
    return apiNameIsSet_;
}

void ShowStatisticResourceResponseBody_datapoints::unsetapiName()
{
    apiNameIsSet_ = false;
}

std::string ShowStatisticResourceResponseBody_datapoints::getTenantId() const
{
    return tenantId_;
}

void ShowStatisticResourceResponseBody_datapoints::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ShowStatisticResourceResponseBody_datapoints::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ShowStatisticResourceResponseBody_datapoints::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string ShowStatisticResourceResponseBody_datapoints::getClusterId() const
{
    return clusterId_;
}

void ShowStatisticResourceResponseBody_datapoints::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowStatisticResourceResponseBody_datapoints::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowStatisticResourceResponseBody_datapoints::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ShowStatisticResourceResponseBody_datapoints::getServerType() const
{
    return serverType_;
}

void ShowStatisticResourceResponseBody_datapoints::setServerType(const std::string& value)
{
    serverType_ = value;
    serverTypeIsSet_ = true;
}

bool ShowStatisticResourceResponseBody_datapoints::serverTypeIsSet() const
{
    return serverTypeIsSet_;
}

void ShowStatisticResourceResponseBody_datapoints::unsetserverType()
{
    serverTypeIsSet_ = false;
}

}
}
}
}
}


