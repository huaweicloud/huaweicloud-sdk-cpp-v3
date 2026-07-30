

#include "huaweicloud/modelarts/v1/model/ScaleUpHyperinstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ScaleUpHyperinstanceResponse::ScaleUpHyperinstanceResponse()
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

ScaleUpHyperinstanceResponse::~ScaleUpHyperinstanceResponse() = default;

void ScaleUpHyperinstanceResponse::validate()
{
}

web::json::value ScaleUpHyperinstanceResponse::toJson() const
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
bool ScaleUpHyperinstanceResponse::fromJson(const web::json::value& val)
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


int64_t ScaleUpHyperinstanceResponse::getCreateAt() const
{
    return createAt_;
}

void ScaleUpHyperinstanceResponse::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool ScaleUpHyperinstanceResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void ScaleUpHyperinstanceResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string ScaleUpHyperinstanceResponse::getHpsClusterId() const
{
    return hpsClusterId_;
}

void ScaleUpHyperinstanceResponse::setHpsClusterId(const std::string& value)
{
    hpsClusterId_ = value;
    hpsClusterIdIsSet_ = true;
}

bool ScaleUpHyperinstanceResponse::hpsClusterIdIsSet() const
{
    return hpsClusterIdIsSet_;
}

void ScaleUpHyperinstanceResponse::unsethpsClusterId()
{
    hpsClusterIdIsSet_ = false;
}

std::string ScaleUpHyperinstanceResponse::getHpsId() const
{
    return hpsId_;
}

void ScaleUpHyperinstanceResponse::setHpsId(const std::string& value)
{
    hpsId_ = value;
    hpsIdIsSet_ = true;
}

bool ScaleUpHyperinstanceResponse::hpsIdIsSet() const
{
    return hpsIdIsSet_;
}

void ScaleUpHyperinstanceResponse::unsethpsId()
{
    hpsIdIsSet_ = false;
}

std::string ScaleUpHyperinstanceResponse::getId() const
{
    return id_;
}

void ScaleUpHyperinstanceResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ScaleUpHyperinstanceResponse::idIsSet() const
{
    return idIsSet_;
}

void ScaleUpHyperinstanceResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ScaleUpHyperinstanceResponse::getName() const
{
    return name_;
}

void ScaleUpHyperinstanceResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ScaleUpHyperinstanceResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ScaleUpHyperinstanceResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ScaleUpHyperinstanceResponse::getOrderId() const
{
    return orderId_;
}

void ScaleUpHyperinstanceResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ScaleUpHyperinstanceResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ScaleUpHyperinstanceResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string ScaleUpHyperinstanceResponse::getStatus() const
{
    return status_;
}

void ScaleUpHyperinstanceResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ScaleUpHyperinstanceResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ScaleUpHyperinstanceResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<ServerResponse>& ScaleUpHyperinstanceResponse::getServers()
{
    return servers_;
}

void ScaleUpHyperinstanceResponse::setServers(const std::vector<ServerResponse>& value)
{
    servers_ = value;
    serversIsSet_ = true;
}

bool ScaleUpHyperinstanceResponse::serversIsSet() const
{
    return serversIsSet_;
}

void ScaleUpHyperinstanceResponse::unsetservers()
{
    serversIsSet_ = false;
}

int64_t ScaleUpHyperinstanceResponse::getUpdateAt() const
{
    return updateAt_;
}

void ScaleUpHyperinstanceResponse::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool ScaleUpHyperinstanceResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void ScaleUpHyperinstanceResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

}
}
}
}
}


