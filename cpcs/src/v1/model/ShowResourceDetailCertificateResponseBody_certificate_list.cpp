

#include "huaweicloud/cpcs/v1/model/ShowResourceDetailCertificateResponseBody_certificate_list.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowResourceDetailCertificateResponseBody_certificate_list::ShowResourceDetailCertificateResponseBody_certificate_list()
{
    name_ = "";
    nameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    serverType_ = "";
    serverTypeIsSet_ = false;
    certificateType_ = "";
    certificateTypeIsSet_ = false;
    algorithmType_ = "";
    algorithmTypeIsSet_ = false;
    algorithm_ = "";
    algorithmIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    expiredTime_ = 0L;
    expiredTimeIsSet_ = false;
    issuer_ = "";
    issuerIsSet_ = false;
    user_ = "";
    userIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
}

ShowResourceDetailCertificateResponseBody_certificate_list::~ShowResourceDetailCertificateResponseBody_certificate_list() = default;

void ShowResourceDetailCertificateResponseBody_certificate_list::validate()
{
}

web::json::value ShowResourceDetailCertificateResponseBody_certificate_list::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
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
    if(certificateTypeIsSet_) {
        val[utility::conversions::to_string_t("certificate_type")] = ModelBase::toJson(certificateType_);
    }
    if(algorithmTypeIsSet_) {
        val[utility::conversions::to_string_t("algorithm_type")] = ModelBase::toJson(algorithmType_);
    }
    if(algorithmIsSet_) {
        val[utility::conversions::to_string_t("algorithm")] = ModelBase::toJson(algorithm_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(expiredTimeIsSet_) {
        val[utility::conversions::to_string_t("expired_time")] = ModelBase::toJson(expiredTime_);
    }
    if(issuerIsSet_) {
        val[utility::conversions::to_string_t("issuer")] = ModelBase::toJson(issuer_);
    }
    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }

    return val;
}
bool ShowResourceDetailCertificateResponseBody_certificate_list::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("certificate_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("algorithm_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("algorithm_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlgorithmType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("algorithm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("algorithm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlgorithm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expired_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expired_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiredTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issuer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issuer"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    return ok;
}


std::string ShowResourceDetailCertificateResponseBody_certificate_list::getName() const
{
    return name_;
}

void ShowResourceDetailCertificateResponseBody_certificate_list::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowResourceDetailCertificateResponseBody_certificate_list::nameIsSet() const
{
    return nameIsSet_;
}

void ShowResourceDetailCertificateResponseBody_certificate_list::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowResourceDetailCertificateResponseBody_certificate_list::getId() const
{
    return id_;
}

void ShowResourceDetailCertificateResponseBody_certificate_list::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowResourceDetailCertificateResponseBody_certificate_list::idIsSet() const
{
    return idIsSet_;
}

void ShowResourceDetailCertificateResponseBody_certificate_list::unsetid()
{
    idIsSet_ = false;
}

std::string ShowResourceDetailCertificateResponseBody_certificate_list::getTenantId() const
{
    return tenantId_;
}

void ShowResourceDetailCertificateResponseBody_certificate_list::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ShowResourceDetailCertificateResponseBody_certificate_list::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ShowResourceDetailCertificateResponseBody_certificate_list::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string ShowResourceDetailCertificateResponseBody_certificate_list::getClusterId() const
{
    return clusterId_;
}

void ShowResourceDetailCertificateResponseBody_certificate_list::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowResourceDetailCertificateResponseBody_certificate_list::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowResourceDetailCertificateResponseBody_certificate_list::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ShowResourceDetailCertificateResponseBody_certificate_list::getServerType() const
{
    return serverType_;
}

void ShowResourceDetailCertificateResponseBody_certificate_list::setServerType(const std::string& value)
{
    serverType_ = value;
    serverTypeIsSet_ = true;
}

bool ShowResourceDetailCertificateResponseBody_certificate_list::serverTypeIsSet() const
{
    return serverTypeIsSet_;
}

void ShowResourceDetailCertificateResponseBody_certificate_list::unsetserverType()
{
    serverTypeIsSet_ = false;
}

std::string ShowResourceDetailCertificateResponseBody_certificate_list::getCertificateType() const
{
    return certificateType_;
}

void ShowResourceDetailCertificateResponseBody_certificate_list::setCertificateType(const std::string& value)
{
    certificateType_ = value;
    certificateTypeIsSet_ = true;
}

bool ShowResourceDetailCertificateResponseBody_certificate_list::certificateTypeIsSet() const
{
    return certificateTypeIsSet_;
}

void ShowResourceDetailCertificateResponseBody_certificate_list::unsetcertificateType()
{
    certificateTypeIsSet_ = false;
}

std::string ShowResourceDetailCertificateResponseBody_certificate_list::getAlgorithmType() const
{
    return algorithmType_;
}

void ShowResourceDetailCertificateResponseBody_certificate_list::setAlgorithmType(const std::string& value)
{
    algorithmType_ = value;
    algorithmTypeIsSet_ = true;
}

bool ShowResourceDetailCertificateResponseBody_certificate_list::algorithmTypeIsSet() const
{
    return algorithmTypeIsSet_;
}

void ShowResourceDetailCertificateResponseBody_certificate_list::unsetalgorithmType()
{
    algorithmTypeIsSet_ = false;
}

std::string ShowResourceDetailCertificateResponseBody_certificate_list::getAlgorithm() const
{
    return algorithm_;
}

void ShowResourceDetailCertificateResponseBody_certificate_list::setAlgorithm(const std::string& value)
{
    algorithm_ = value;
    algorithmIsSet_ = true;
}

bool ShowResourceDetailCertificateResponseBody_certificate_list::algorithmIsSet() const
{
    return algorithmIsSet_;
}

void ShowResourceDetailCertificateResponseBody_certificate_list::unsetalgorithm()
{
    algorithmIsSet_ = false;
}

int64_t ShowResourceDetailCertificateResponseBody_certificate_list::getStartTime() const
{
    return startTime_;
}

void ShowResourceDetailCertificateResponseBody_certificate_list::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowResourceDetailCertificateResponseBody_certificate_list::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowResourceDetailCertificateResponseBody_certificate_list::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowResourceDetailCertificateResponseBody_certificate_list::getExpiredTime() const
{
    return expiredTime_;
}

void ShowResourceDetailCertificateResponseBody_certificate_list::setExpiredTime(int64_t value)
{
    expiredTime_ = value;
    expiredTimeIsSet_ = true;
}

bool ShowResourceDetailCertificateResponseBody_certificate_list::expiredTimeIsSet() const
{
    return expiredTimeIsSet_;
}

void ShowResourceDetailCertificateResponseBody_certificate_list::unsetexpiredTime()
{
    expiredTimeIsSet_ = false;
}

std::string ShowResourceDetailCertificateResponseBody_certificate_list::getIssuer() const
{
    return issuer_;
}

void ShowResourceDetailCertificateResponseBody_certificate_list::setIssuer(const std::string& value)
{
    issuer_ = value;
    issuerIsSet_ = true;
}

bool ShowResourceDetailCertificateResponseBody_certificate_list::issuerIsSet() const
{
    return issuerIsSet_;
}

void ShowResourceDetailCertificateResponseBody_certificate_list::unsetissuer()
{
    issuerIsSet_ = false;
}

std::string ShowResourceDetailCertificateResponseBody_certificate_list::getUser() const
{
    return user_;
}

void ShowResourceDetailCertificateResponseBody_certificate_list::setUser(const std::string& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool ShowResourceDetailCertificateResponseBody_certificate_list::userIsSet() const
{
    return userIsSet_;
}

void ShowResourceDetailCertificateResponseBody_certificate_list::unsetuser()
{
    userIsSet_ = false;
}

int32_t ShowResourceDetailCertificateResponseBody_certificate_list::getStatus() const
{
    return status_;
}

void ShowResourceDetailCertificateResponseBody_certificate_list::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowResourceDetailCertificateResponseBody_certificate_list::statusIsSet() const
{
    return statusIsSet_;
}

void ShowResourceDetailCertificateResponseBody_certificate_list::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowResourceDetailCertificateResponseBody_certificate_list::getCreateTime() const
{
    return createTime_;
}

void ShowResourceDetailCertificateResponseBody_certificate_list::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowResourceDetailCertificateResponseBody_certificate_list::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowResourceDetailCertificateResponseBody_certificate_list::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

}
}
}
}
}


