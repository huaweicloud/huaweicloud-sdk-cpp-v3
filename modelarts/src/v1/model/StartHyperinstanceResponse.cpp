

#include "huaweicloud/modelarts/v1/model/StartHyperinstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




StartHyperinstanceResponse::StartHyperinstanceResponse()
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
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

StartHyperinstanceResponse::~StartHyperinstanceResponse() = default;

void StartHyperinstanceResponse::validate()
{
}

web::json::value StartHyperinstanceResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool StartHyperinstanceResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


int64_t StartHyperinstanceResponse::getCreateAt() const
{
    return createAt_;
}

void StartHyperinstanceResponse::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool StartHyperinstanceResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void StartHyperinstanceResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string StartHyperinstanceResponse::getHpsClusterId() const
{
    return hpsClusterId_;
}

void StartHyperinstanceResponse::setHpsClusterId(const std::string& value)
{
    hpsClusterId_ = value;
    hpsClusterIdIsSet_ = true;
}

bool StartHyperinstanceResponse::hpsClusterIdIsSet() const
{
    return hpsClusterIdIsSet_;
}

void StartHyperinstanceResponse::unsethpsClusterId()
{
    hpsClusterIdIsSet_ = false;
}

std::string StartHyperinstanceResponse::getHpsId() const
{
    return hpsId_;
}

void StartHyperinstanceResponse::setHpsId(const std::string& value)
{
    hpsId_ = value;
    hpsIdIsSet_ = true;
}

bool StartHyperinstanceResponse::hpsIdIsSet() const
{
    return hpsIdIsSet_;
}

void StartHyperinstanceResponse::unsethpsId()
{
    hpsIdIsSet_ = false;
}

std::string StartHyperinstanceResponse::getId() const
{
    return id_;
}

void StartHyperinstanceResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool StartHyperinstanceResponse::idIsSet() const
{
    return idIsSet_;
}

void StartHyperinstanceResponse::unsetid()
{
    idIsSet_ = false;
}

std::string StartHyperinstanceResponse::getName() const
{
    return name_;
}

void StartHyperinstanceResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool StartHyperinstanceResponse::nameIsSet() const
{
    return nameIsSet_;
}

void StartHyperinstanceResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string StartHyperinstanceResponse::getOrderId() const
{
    return orderId_;
}

void StartHyperinstanceResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool StartHyperinstanceResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void StartHyperinstanceResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string StartHyperinstanceResponse::getStatus() const
{
    return status_;
}

void StartHyperinstanceResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool StartHyperinstanceResponse::statusIsSet() const
{
    return statusIsSet_;
}

void StartHyperinstanceResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<ServerResponse>& StartHyperinstanceResponse::getServers()
{
    return servers_;
}

void StartHyperinstanceResponse::setServers(const std::vector<ServerResponse>& value)
{
    servers_ = value;
    serversIsSet_ = true;
}

bool StartHyperinstanceResponse::serversIsSet() const
{
    return serversIsSet_;
}

void StartHyperinstanceResponse::unsetservers()
{
    serversIsSet_ = false;
}

int64_t StartHyperinstanceResponse::getUpdateAt() const
{
    return updateAt_;
}

void StartHyperinstanceResponse::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool StartHyperinstanceResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void StartHyperinstanceResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string StartHyperinstanceResponse::getXRequestId() const
{
    return xRequestId_;
}

void StartHyperinstanceResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool StartHyperinstanceResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void StartHyperinstanceResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


