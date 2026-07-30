

#include "huaweicloud/modelarts/v1/model/ChangeHyperinstanceOSResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ChangeHyperinstanceOSResponse::ChangeHyperinstanceOSResponse()
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

ChangeHyperinstanceOSResponse::~ChangeHyperinstanceOSResponse() = default;

void ChangeHyperinstanceOSResponse::validate()
{
}

web::json::value ChangeHyperinstanceOSResponse::toJson() const
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
bool ChangeHyperinstanceOSResponse::fromJson(const web::json::value& val)
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


int64_t ChangeHyperinstanceOSResponse::getCreateAt() const
{
    return createAt_;
}

void ChangeHyperinstanceOSResponse::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool ChangeHyperinstanceOSResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void ChangeHyperinstanceOSResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string ChangeHyperinstanceOSResponse::getHpsClusterId() const
{
    return hpsClusterId_;
}

void ChangeHyperinstanceOSResponse::setHpsClusterId(const std::string& value)
{
    hpsClusterId_ = value;
    hpsClusterIdIsSet_ = true;
}

bool ChangeHyperinstanceOSResponse::hpsClusterIdIsSet() const
{
    return hpsClusterIdIsSet_;
}

void ChangeHyperinstanceOSResponse::unsethpsClusterId()
{
    hpsClusterIdIsSet_ = false;
}

std::string ChangeHyperinstanceOSResponse::getHpsId() const
{
    return hpsId_;
}

void ChangeHyperinstanceOSResponse::setHpsId(const std::string& value)
{
    hpsId_ = value;
    hpsIdIsSet_ = true;
}

bool ChangeHyperinstanceOSResponse::hpsIdIsSet() const
{
    return hpsIdIsSet_;
}

void ChangeHyperinstanceOSResponse::unsethpsId()
{
    hpsIdIsSet_ = false;
}

std::string ChangeHyperinstanceOSResponse::getId() const
{
    return id_;
}

void ChangeHyperinstanceOSResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ChangeHyperinstanceOSResponse::idIsSet() const
{
    return idIsSet_;
}

void ChangeHyperinstanceOSResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ChangeHyperinstanceOSResponse::getName() const
{
    return name_;
}

void ChangeHyperinstanceOSResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ChangeHyperinstanceOSResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ChangeHyperinstanceOSResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ChangeHyperinstanceOSResponse::getOrderId() const
{
    return orderId_;
}

void ChangeHyperinstanceOSResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ChangeHyperinstanceOSResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ChangeHyperinstanceOSResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string ChangeHyperinstanceOSResponse::getStatus() const
{
    return status_;
}

void ChangeHyperinstanceOSResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ChangeHyperinstanceOSResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ChangeHyperinstanceOSResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<ServerResponse>& ChangeHyperinstanceOSResponse::getServers()
{
    return servers_;
}

void ChangeHyperinstanceOSResponse::setServers(const std::vector<ServerResponse>& value)
{
    servers_ = value;
    serversIsSet_ = true;
}

bool ChangeHyperinstanceOSResponse::serversIsSet() const
{
    return serversIsSet_;
}

void ChangeHyperinstanceOSResponse::unsetservers()
{
    serversIsSet_ = false;
}

int64_t ChangeHyperinstanceOSResponse::getUpdateAt() const
{
    return updateAt_;
}

void ChangeHyperinstanceOSResponse::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool ChangeHyperinstanceOSResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void ChangeHyperinstanceOSResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string ChangeHyperinstanceOSResponse::getXRequestId() const
{
    return xRequestId_;
}

void ChangeHyperinstanceOSResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ChangeHyperinstanceOSResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ChangeHyperinstanceOSResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


