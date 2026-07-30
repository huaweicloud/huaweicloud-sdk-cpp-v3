

#include "huaweicloud/modelarts/v1/model/GetHyperinstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




GetHyperinstanceResponse::GetHyperinstanceResponse()
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

GetHyperinstanceResponse::~GetHyperinstanceResponse() = default;

void GetHyperinstanceResponse::validate()
{
}

web::json::value GetHyperinstanceResponse::toJson() const
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
bool GetHyperinstanceResponse::fromJson(const web::json::value& val)
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


int64_t GetHyperinstanceResponse::getCreateAt() const
{
    return createAt_;
}

void GetHyperinstanceResponse::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool GetHyperinstanceResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void GetHyperinstanceResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string GetHyperinstanceResponse::getHpsClusterId() const
{
    return hpsClusterId_;
}

void GetHyperinstanceResponse::setHpsClusterId(const std::string& value)
{
    hpsClusterId_ = value;
    hpsClusterIdIsSet_ = true;
}

bool GetHyperinstanceResponse::hpsClusterIdIsSet() const
{
    return hpsClusterIdIsSet_;
}

void GetHyperinstanceResponse::unsethpsClusterId()
{
    hpsClusterIdIsSet_ = false;
}

std::string GetHyperinstanceResponse::getHpsId() const
{
    return hpsId_;
}

void GetHyperinstanceResponse::setHpsId(const std::string& value)
{
    hpsId_ = value;
    hpsIdIsSet_ = true;
}

bool GetHyperinstanceResponse::hpsIdIsSet() const
{
    return hpsIdIsSet_;
}

void GetHyperinstanceResponse::unsethpsId()
{
    hpsIdIsSet_ = false;
}

std::string GetHyperinstanceResponse::getId() const
{
    return id_;
}

void GetHyperinstanceResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GetHyperinstanceResponse::idIsSet() const
{
    return idIsSet_;
}

void GetHyperinstanceResponse::unsetid()
{
    idIsSet_ = false;
}

std::string GetHyperinstanceResponse::getName() const
{
    return name_;
}

void GetHyperinstanceResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GetHyperinstanceResponse::nameIsSet() const
{
    return nameIsSet_;
}

void GetHyperinstanceResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string GetHyperinstanceResponse::getOrderId() const
{
    return orderId_;
}

void GetHyperinstanceResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool GetHyperinstanceResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void GetHyperinstanceResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string GetHyperinstanceResponse::getStatus() const
{
    return status_;
}

void GetHyperinstanceResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool GetHyperinstanceResponse::statusIsSet() const
{
    return statusIsSet_;
}

void GetHyperinstanceResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<ServerResponse>& GetHyperinstanceResponse::getServers()
{
    return servers_;
}

void GetHyperinstanceResponse::setServers(const std::vector<ServerResponse>& value)
{
    servers_ = value;
    serversIsSet_ = true;
}

bool GetHyperinstanceResponse::serversIsSet() const
{
    return serversIsSet_;
}

void GetHyperinstanceResponse::unsetservers()
{
    serversIsSet_ = false;
}

int64_t GetHyperinstanceResponse::getUpdateAt() const
{
    return updateAt_;
}

void GetHyperinstanceResponse::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool GetHyperinstanceResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void GetHyperinstanceResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string GetHyperinstanceResponse::getXRequestId() const
{
    return xRequestId_;
}

void GetHyperinstanceResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool GetHyperinstanceResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void GetHyperinstanceResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


