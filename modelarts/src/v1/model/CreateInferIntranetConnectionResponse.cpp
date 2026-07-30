

#include "huaweicloud/modelarts/v1/model/CreateInferIntranetConnectionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateInferIntranetConnectionResponse::CreateInferIntranetConnectionResponse()
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

CreateInferIntranetConnectionResponse::~CreateInferIntranetConnectionResponse() = default;

void CreateInferIntranetConnectionResponse::validate()
{
}

web::json::value CreateInferIntranetConnectionResponse::toJson() const
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
bool CreateInferIntranetConnectionResponse::fromJson(const web::json::value& val)
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


std::string CreateInferIntranetConnectionResponse::getApplicantUserName() const
{
    return applicantUserName_;
}

void CreateInferIntranetConnectionResponse::setApplicantUserName(const std::string& value)
{
    applicantUserName_ = value;
    applicantUserNameIsSet_ = true;
}

bool CreateInferIntranetConnectionResponse::applicantUserNameIsSet() const
{
    return applicantUserNameIsSet_;
}

void CreateInferIntranetConnectionResponse::unsetapplicantUserName()
{
    applicantUserNameIsSet_ = false;
}

std::string CreateInferIntranetConnectionResponse::getId() const
{
    return id_;
}

void CreateInferIntranetConnectionResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateInferIntranetConnectionResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateInferIntranetConnectionResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CreateInferIntranetConnectionResponse::getMessage() const
{
    return message_;
}

void CreateInferIntranetConnectionResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool CreateInferIntranetConnectionResponse::messageIsSet() const
{
    return messageIsSet_;
}

void CreateInferIntranetConnectionResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::string CreateInferIntranetConnectionResponse::getOwnerDomainName() const
{
    return ownerDomainName_;
}

void CreateInferIntranetConnectionResponse::setOwnerDomainName(const std::string& value)
{
    ownerDomainName_ = value;
    ownerDomainNameIsSet_ = true;
}

bool CreateInferIntranetConnectionResponse::ownerDomainNameIsSet() const
{
    return ownerDomainNameIsSet_;
}

void CreateInferIntranetConnectionResponse::unsetownerDomainName()
{
    ownerDomainNameIsSet_ = false;
}

std::string CreateInferIntranetConnectionResponse::getScene() const
{
    return scene_;
}

void CreateInferIntranetConnectionResponse::setScene(const std::string& value)
{
    scene_ = value;
    sceneIsSet_ = true;
}

bool CreateInferIntranetConnectionResponse::sceneIsSet() const
{
    return sceneIsSet_;
}

void CreateInferIntranetConnectionResponse::unsetscene()
{
    sceneIsSet_ = false;
}

std::string CreateInferIntranetConnectionResponse::getServiceId() const
{
    return serviceId_;
}

void CreateInferIntranetConnectionResponse::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool CreateInferIntranetConnectionResponse::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void CreateInferIntranetConnectionResponse::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string CreateInferIntranetConnectionResponse::getServiceName() const
{
    return serviceName_;
}

void CreateInferIntranetConnectionResponse::setServiceName(const std::string& value)
{
    serviceName_ = value;
    serviceNameIsSet_ = true;
}

bool CreateInferIntranetConnectionResponse::serviceNameIsSet() const
{
    return serviceNameIsSet_;
}

void CreateInferIntranetConnectionResponse::unsetserviceName()
{
    serviceNameIsSet_ = false;
}

std::string CreateInferIntranetConnectionResponse::getStatus() const
{
    return status_;
}

void CreateInferIntranetConnectionResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateInferIntranetConnectionResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateInferIntranetConnectionResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateInferIntranetConnectionResponse::getSubnetId() const
{
    return subnetId_;
}

void CreateInferIntranetConnectionResponse::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool CreateInferIntranetConnectionResponse::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void CreateInferIntranetConnectionResponse::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::vector<std::string>& CreateInferIntranetConnectionResponse::getUrlList()
{
    return urlList_;
}

void CreateInferIntranetConnectionResponse::setUrlList(const std::vector<std::string>& value)
{
    urlList_ = value;
    urlListIsSet_ = true;
}

bool CreateInferIntranetConnectionResponse::urlListIsSet() const
{
    return urlListIsSet_;
}

void CreateInferIntranetConnectionResponse::unseturlList()
{
    urlListIsSet_ = false;
}

std::vector<std::string>& CreateInferIntranetConnectionResponse::getCustomUrlList()
{
    return customUrlList_;
}

void CreateInferIntranetConnectionResponse::setCustomUrlList(const std::vector<std::string>& value)
{
    customUrlList_ = value;
    customUrlListIsSet_ = true;
}

bool CreateInferIntranetConnectionResponse::customUrlListIsSet() const
{
    return customUrlListIsSet_;
}

void CreateInferIntranetConnectionResponse::unsetcustomUrlList()
{
    customUrlListIsSet_ = false;
}

std::string CreateInferIntranetConnectionResponse::getVpcId() const
{
    return vpcId_;
}

void CreateInferIntranetConnectionResponse::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool CreateInferIntranetConnectionResponse::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void CreateInferIntranetConnectionResponse::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string CreateInferIntranetConnectionResponse::getDispatcherGroupId() const
{
    return dispatcherGroupId_;
}

void CreateInferIntranetConnectionResponse::setDispatcherGroupId(const std::string& value)
{
    dispatcherGroupId_ = value;
    dispatcherGroupIdIsSet_ = true;
}

bool CreateInferIntranetConnectionResponse::dispatcherGroupIdIsSet() const
{
    return dispatcherGroupIdIsSet_;
}

void CreateInferIntranetConnectionResponse::unsetdispatcherGroupId()
{
    dispatcherGroupIdIsSet_ = false;
}

std::string CreateInferIntranetConnectionResponse::getType() const
{
    return type_;
}

void CreateInferIntranetConnectionResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateInferIntranetConnectionResponse::typeIsSet() const
{
    return typeIsSet_;
}

void CreateInferIntranetConnectionResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string CreateInferIntranetConnectionResponse::getMaosNetworkName() const
{
    return maosNetworkName_;
}

void CreateInferIntranetConnectionResponse::setMaosNetworkName(const std::string& value)
{
    maosNetworkName_ = value;
    maosNetworkNameIsSet_ = true;
}

bool CreateInferIntranetConnectionResponse::maosNetworkNameIsSet() const
{
    return maosNetworkNameIsSet_;
}

void CreateInferIntranetConnectionResponse::unsetmaosNetworkName()
{
    maosNetworkNameIsSet_ = false;
}

std::string CreateInferIntranetConnectionResponse::getServiceType() const
{
    return serviceType_;
}

void CreateInferIntranetConnectionResponse::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool CreateInferIntranetConnectionResponse::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void CreateInferIntranetConnectionResponse::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string CreateInferIntranetConnectionResponse::getPoolId() const
{
    return poolId_;
}

void CreateInferIntranetConnectionResponse::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool CreateInferIntranetConnectionResponse::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void CreateInferIntranetConnectionResponse::unsetpoolId()
{
    poolIdIsSet_ = false;
}

std::string CreateInferIntranetConnectionResponse::getCreateAt() const
{
    return createAt_;
}

void CreateInferIntranetConnectionResponse::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool CreateInferIntranetConnectionResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void CreateInferIntranetConnectionResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string CreateInferIntranetConnectionResponse::getUpdateAt() const
{
    return updateAt_;
}

void CreateInferIntranetConnectionResponse::setUpdateAt(const std::string& value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool CreateInferIntranetConnectionResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void CreateInferIntranetConnectionResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

}
}
}
}
}


