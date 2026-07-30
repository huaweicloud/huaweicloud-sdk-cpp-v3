

#include "huaweicloud/modelarts/v1/model/ModifyInferIntranetConnectionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ModifyInferIntranetConnectionsResponse::ModifyInferIntranetConnectionsResponse()
{
    applicantUserName_ = "";
    applicantUserNameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    ownerDomainName_ = "";
    ownerDomainNameIsSet_ = false;
    scene_ = "";
    sceneIsSet_ = false;
    serviceId_ = "";
    serviceIdIsSet_ = false;
    serviceName_ = "";
    serviceNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    urlListIsSet_ = false;
    customUrlListIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    dispatcherGroupId_ = "";
    dispatcherGroupIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    maosNetworkName_ = "";
    maosNetworkNameIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    poolId_ = "";
    poolIdIsSet_ = false;
    createAt_ = "";
    createAtIsSet_ = false;
    updateAt_ = "";
    updateAtIsSet_ = false;
}

ModifyInferIntranetConnectionsResponse::~ModifyInferIntranetConnectionsResponse() = default;

void ModifyInferIntranetConnectionsResponse::validate()
{
}

web::json::value ModifyInferIntranetConnectionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicantUserNameIsSet_) {
        val[utility::conversions::to_string_t("applicant_user_name")] = ModelBase::toJson(applicantUserName_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(ownerDomainNameIsSet_) {
        val[utility::conversions::to_string_t("owner_domain_name")] = ModelBase::toJson(ownerDomainName_);
    }
    if(sceneIsSet_) {
        val[utility::conversions::to_string_t("scene")] = ModelBase::toJson(scene_);
    }
    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(serviceNameIsSet_) {
        val[utility::conversions::to_string_t("service_name")] = ModelBase::toJson(serviceName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(urlListIsSet_) {
        val[utility::conversions::to_string_t("url_list")] = ModelBase::toJson(urlList_);
    }
    if(customUrlListIsSet_) {
        val[utility::conversions::to_string_t("custom_url_list")] = ModelBase::toJson(customUrlList_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(dispatcherGroupIdIsSet_) {
        val[utility::conversions::to_string_t("dispatcher_group_id")] = ModelBase::toJson(dispatcherGroupId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(maosNetworkNameIsSet_) {
        val[utility::conversions::to_string_t("maos_network_name")] = ModelBase::toJson(maosNetworkName_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(poolIdIsSet_) {
        val[utility::conversions::to_string_t("pool_id")] = ModelBase::toJson(poolId_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }

    return val;
}
bool ModifyInferIntranetConnectionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("applicant_user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("applicant_user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicantUserName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner_domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner_domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scene"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scene"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScene(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrlList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_url_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_url_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomUrlList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dispatcher_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dispatcher_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDispatcherGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maos_network_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maos_network_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaosNetworkName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
        }
    }
    return ok;
}


std::string ModifyInferIntranetConnectionsResponse::getApplicantUserName() const
{
    return applicantUserName_;
}

void ModifyInferIntranetConnectionsResponse::setApplicantUserName(const std::string& value)
{
    applicantUserName_ = value;
    applicantUserNameIsSet_ = true;
}

bool ModifyInferIntranetConnectionsResponse::applicantUserNameIsSet() const
{
    return applicantUserNameIsSet_;
}

void ModifyInferIntranetConnectionsResponse::unsetapplicantUserName()
{
    applicantUserNameIsSet_ = false;
}

std::string ModifyInferIntranetConnectionsResponse::getId() const
{
    return id_;
}

void ModifyInferIntranetConnectionsResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ModifyInferIntranetConnectionsResponse::idIsSet() const
{
    return idIsSet_;
}

void ModifyInferIntranetConnectionsResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ModifyInferIntranetConnectionsResponse::getMessage() const
{
    return message_;
}

void ModifyInferIntranetConnectionsResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ModifyInferIntranetConnectionsResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ModifyInferIntranetConnectionsResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::string ModifyInferIntranetConnectionsResponse::getOwnerDomainName() const
{
    return ownerDomainName_;
}

void ModifyInferIntranetConnectionsResponse::setOwnerDomainName(const std::string& value)
{
    ownerDomainName_ = value;
    ownerDomainNameIsSet_ = true;
}

bool ModifyInferIntranetConnectionsResponse::ownerDomainNameIsSet() const
{
    return ownerDomainNameIsSet_;
}

void ModifyInferIntranetConnectionsResponse::unsetownerDomainName()
{
    ownerDomainNameIsSet_ = false;
}

std::string ModifyInferIntranetConnectionsResponse::getScene() const
{
    return scene_;
}

void ModifyInferIntranetConnectionsResponse::setScene(const std::string& value)
{
    scene_ = value;
    sceneIsSet_ = true;
}

bool ModifyInferIntranetConnectionsResponse::sceneIsSet() const
{
    return sceneIsSet_;
}

void ModifyInferIntranetConnectionsResponse::unsetscene()
{
    sceneIsSet_ = false;
}

std::string ModifyInferIntranetConnectionsResponse::getServiceId() const
{
    return serviceId_;
}

void ModifyInferIntranetConnectionsResponse::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ModifyInferIntranetConnectionsResponse::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ModifyInferIntranetConnectionsResponse::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string ModifyInferIntranetConnectionsResponse::getServiceName() const
{
    return serviceName_;
}

void ModifyInferIntranetConnectionsResponse::setServiceName(const std::string& value)
{
    serviceName_ = value;
    serviceNameIsSet_ = true;
}

bool ModifyInferIntranetConnectionsResponse::serviceNameIsSet() const
{
    return serviceNameIsSet_;
}

void ModifyInferIntranetConnectionsResponse::unsetserviceName()
{
    serviceNameIsSet_ = false;
}

std::string ModifyInferIntranetConnectionsResponse::getStatus() const
{
    return status_;
}

void ModifyInferIntranetConnectionsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ModifyInferIntranetConnectionsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ModifyInferIntranetConnectionsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ModifyInferIntranetConnectionsResponse::getSubnetId() const
{
    return subnetId_;
}

void ModifyInferIntranetConnectionsResponse::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool ModifyInferIntranetConnectionsResponse::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void ModifyInferIntranetConnectionsResponse::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::vector<std::string>& ModifyInferIntranetConnectionsResponse::getUrlList()
{
    return urlList_;
}

void ModifyInferIntranetConnectionsResponse::setUrlList(const std::vector<std::string>& value)
{
    urlList_ = value;
    urlListIsSet_ = true;
}

bool ModifyInferIntranetConnectionsResponse::urlListIsSet() const
{
    return urlListIsSet_;
}

void ModifyInferIntranetConnectionsResponse::unseturlList()
{
    urlListIsSet_ = false;
}

std::vector<std::string>& ModifyInferIntranetConnectionsResponse::getCustomUrlList()
{
    return customUrlList_;
}

void ModifyInferIntranetConnectionsResponse::setCustomUrlList(const std::vector<std::string>& value)
{
    customUrlList_ = value;
    customUrlListIsSet_ = true;
}

bool ModifyInferIntranetConnectionsResponse::customUrlListIsSet() const
{
    return customUrlListIsSet_;
}

void ModifyInferIntranetConnectionsResponse::unsetcustomUrlList()
{
    customUrlListIsSet_ = false;
}

std::string ModifyInferIntranetConnectionsResponse::getVpcId() const
{
    return vpcId_;
}

void ModifyInferIntranetConnectionsResponse::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool ModifyInferIntranetConnectionsResponse::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void ModifyInferIntranetConnectionsResponse::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string ModifyInferIntranetConnectionsResponse::getDispatcherGroupId() const
{
    return dispatcherGroupId_;
}

void ModifyInferIntranetConnectionsResponse::setDispatcherGroupId(const std::string& value)
{
    dispatcherGroupId_ = value;
    dispatcherGroupIdIsSet_ = true;
}

bool ModifyInferIntranetConnectionsResponse::dispatcherGroupIdIsSet() const
{
    return dispatcherGroupIdIsSet_;
}

void ModifyInferIntranetConnectionsResponse::unsetdispatcherGroupId()
{
    dispatcherGroupIdIsSet_ = false;
}

std::string ModifyInferIntranetConnectionsResponse::getType() const
{
    return type_;
}

void ModifyInferIntranetConnectionsResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ModifyInferIntranetConnectionsResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ModifyInferIntranetConnectionsResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string ModifyInferIntranetConnectionsResponse::getMaosNetworkName() const
{
    return maosNetworkName_;
}

void ModifyInferIntranetConnectionsResponse::setMaosNetworkName(const std::string& value)
{
    maosNetworkName_ = value;
    maosNetworkNameIsSet_ = true;
}

bool ModifyInferIntranetConnectionsResponse::maosNetworkNameIsSet() const
{
    return maosNetworkNameIsSet_;
}

void ModifyInferIntranetConnectionsResponse::unsetmaosNetworkName()
{
    maosNetworkNameIsSet_ = false;
}

std::string ModifyInferIntranetConnectionsResponse::getServiceType() const
{
    return serviceType_;
}

void ModifyInferIntranetConnectionsResponse::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool ModifyInferIntranetConnectionsResponse::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void ModifyInferIntranetConnectionsResponse::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string ModifyInferIntranetConnectionsResponse::getPoolId() const
{
    return poolId_;
}

void ModifyInferIntranetConnectionsResponse::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool ModifyInferIntranetConnectionsResponse::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void ModifyInferIntranetConnectionsResponse::unsetpoolId()
{
    poolIdIsSet_ = false;
}

std::string ModifyInferIntranetConnectionsResponse::getCreateAt() const
{
    return createAt_;
}

void ModifyInferIntranetConnectionsResponse::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool ModifyInferIntranetConnectionsResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void ModifyInferIntranetConnectionsResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string ModifyInferIntranetConnectionsResponse::getUpdateAt() const
{
    return updateAt_;
}

void ModifyInferIntranetConnectionsResponse::setUpdateAt(const std::string& value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool ModifyInferIntranetConnectionsResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void ModifyInferIntranetConnectionsResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

}
}
}
}
}


