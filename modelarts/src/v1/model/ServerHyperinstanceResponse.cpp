

#include "huaweicloud/modelarts/v1/model/ServerHyperinstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServerHyperinstanceResponse::ServerHyperinstanceResponse()
{
    createAt_ = 0L;
    createAtIsSet_ = false;
    hpsClusterId_ = "";
    hpsClusterIdIsSet_ = false;
    hpsId_ = "";
    hpsIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    serversIsSet_ = false;
    updateAt_ = 0L;
    updateAtIsSet_ = false;
}

ServerHyperinstanceResponse::~ServerHyperinstanceResponse() = default;

void ServerHyperinstanceResponse::validate()
{
}

web::json::value ServerHyperinstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(hpsClusterIdIsSet_) {
        val[utility::conversions::to_string_t("hps_cluster_id")] = ModelBase::toJson(hpsClusterId_);
    }
    if(hpsIdIsSet_) {
        val[utility::conversions::to_string_t("hps_id")] = ModelBase::toJson(hpsId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(serversIsSet_) {
        val[utility::conversions::to_string_t("servers")] = ModelBase::toJson(servers_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }

    return val;
}
bool ServerHyperinstanceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hps_cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hps_cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHpsClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hps_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hps_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHpsId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("servers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("servers"));
        if(!fieldValue.is_null())
        {
            std::vector<ServerResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
        }
    }
    return ok;
}


int64_t ServerHyperinstanceResponse::getCreateAt() const
{
    return createAt_;
}

void ServerHyperinstanceResponse::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool ServerHyperinstanceResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void ServerHyperinstanceResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string ServerHyperinstanceResponse::getHpsClusterId() const
{
    return hpsClusterId_;
}

void ServerHyperinstanceResponse::setHpsClusterId(const std::string& value)
{
    hpsClusterId_ = value;
    hpsClusterIdIsSet_ = true;
}

bool ServerHyperinstanceResponse::hpsClusterIdIsSet() const
{
    return hpsClusterIdIsSet_;
}

void ServerHyperinstanceResponse::unsethpsClusterId()
{
    hpsClusterIdIsSet_ = false;
}

std::string ServerHyperinstanceResponse::getHpsId() const
{
    return hpsId_;
}

void ServerHyperinstanceResponse::setHpsId(const std::string& value)
{
    hpsId_ = value;
    hpsIdIsSet_ = true;
}

bool ServerHyperinstanceResponse::hpsIdIsSet() const
{
    return hpsIdIsSet_;
}

void ServerHyperinstanceResponse::unsethpsId()
{
    hpsIdIsSet_ = false;
}

std::string ServerHyperinstanceResponse::getId() const
{
    return id_;
}

void ServerHyperinstanceResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ServerHyperinstanceResponse::idIsSet() const
{
    return idIsSet_;
}

void ServerHyperinstanceResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ServerHyperinstanceResponse::getName() const
{
    return name_;
}

void ServerHyperinstanceResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ServerHyperinstanceResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ServerHyperinstanceResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ServerHyperinstanceResponse::getOrderId() const
{
    return orderId_;
}

void ServerHyperinstanceResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ServerHyperinstanceResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ServerHyperinstanceResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string ServerHyperinstanceResponse::getStatus() const
{
    return status_;
}

void ServerHyperinstanceResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ServerHyperinstanceResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ServerHyperinstanceResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<ServerResponse>& ServerHyperinstanceResponse::getServers()
{
    return servers_;
}

void ServerHyperinstanceResponse::setServers(const std::vector<ServerResponse>& value)
{
    servers_ = value;
    serversIsSet_ = true;
}

bool ServerHyperinstanceResponse::serversIsSet() const
{
    return serversIsSet_;
}

void ServerHyperinstanceResponse::unsetservers()
{
    serversIsSet_ = false;
}

int64_t ServerHyperinstanceResponse::getUpdateAt() const
{
    return updateAt_;
}

void ServerHyperinstanceResponse::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool ServerHyperinstanceResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void ServerHyperinstanceResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

}
}
}
}
}


