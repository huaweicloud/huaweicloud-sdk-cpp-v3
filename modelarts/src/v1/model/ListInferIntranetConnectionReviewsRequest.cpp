

#include "huaweicloud/modelarts/v1/model/ListInferIntranetConnectionReviewsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListInferIntranetConnectionReviewsRequest::ListInferIntranetConnectionReviewsRequest()
{
    scene_ = "";
    sceneIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    applicantDomainId_ = "";
    applicantDomainIdIsSet_ = false;
    serviceId_ = "";
    serviceIdIsSet_ = false;
    applicantUserName_ = "";
    applicantUserNameIsSet_ = false;
    serviceName_ = "";
    serviceNameIsSet_ = false;
    vpcName_ = "";
    vpcNameIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    poolId_ = "";
    poolIdIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ListInferIntranetConnectionReviewsRequest::~ListInferIntranetConnectionReviewsRequest() = default;

void ListInferIntranetConnectionReviewsRequest::validate()
{
}

web::json::value ListInferIntranetConnectionReviewsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sceneIsSet_) {
        val[utility::conversions::to_string_t("scene")] = ModelBase::toJson(scene_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(applicantDomainIdIsSet_) {
        val[utility::conversions::to_string_t("applicant_domain_id")] = ModelBase::toJson(applicantDomainId_);
    }
    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(applicantUserNameIsSet_) {
        val[utility::conversions::to_string_t("applicant_user_name")] = ModelBase::toJson(applicantUserName_);
    }
    if(serviceNameIsSet_) {
        val[utility::conversions::to_string_t("service_name")] = ModelBase::toJson(serviceName_);
    }
    if(vpcNameIsSet_) {
        val[utility::conversions::to_string_t("vpc_name")] = ModelBase::toJson(vpcName_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(poolIdIsSet_) {
        val[utility::conversions::to_string_t("pool_id")] = ModelBase::toJson(poolId_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ListInferIntranetConnectionReviewsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("scene"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scene"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScene(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("applicant_domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("applicant_domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicantDomainId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("applicant_user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("applicant_user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicantUserName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("vpc_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("pool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string ListInferIntranetConnectionReviewsRequest::getScene() const
{
    return scene_;
}

void ListInferIntranetConnectionReviewsRequest::setScene(const std::string& value)
{
    scene_ = value;
    sceneIsSet_ = true;
}

bool ListInferIntranetConnectionReviewsRequest::sceneIsSet() const
{
    return sceneIsSet_;
}

void ListInferIntranetConnectionReviewsRequest::unsetscene()
{
    sceneIsSet_ = false;
}

std::string ListInferIntranetConnectionReviewsRequest::getId() const
{
    return id_;
}

void ListInferIntranetConnectionReviewsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListInferIntranetConnectionReviewsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListInferIntranetConnectionReviewsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListInferIntranetConnectionReviewsRequest::getApplicantDomainId() const
{
    return applicantDomainId_;
}

void ListInferIntranetConnectionReviewsRequest::setApplicantDomainId(const std::string& value)
{
    applicantDomainId_ = value;
    applicantDomainIdIsSet_ = true;
}

bool ListInferIntranetConnectionReviewsRequest::applicantDomainIdIsSet() const
{
    return applicantDomainIdIsSet_;
}

void ListInferIntranetConnectionReviewsRequest::unsetapplicantDomainId()
{
    applicantDomainIdIsSet_ = false;
}

std::string ListInferIntranetConnectionReviewsRequest::getServiceId() const
{
    return serviceId_;
}

void ListInferIntranetConnectionReviewsRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ListInferIntranetConnectionReviewsRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ListInferIntranetConnectionReviewsRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string ListInferIntranetConnectionReviewsRequest::getApplicantUserName() const
{
    return applicantUserName_;
}

void ListInferIntranetConnectionReviewsRequest::setApplicantUserName(const std::string& value)
{
    applicantUserName_ = value;
    applicantUserNameIsSet_ = true;
}

bool ListInferIntranetConnectionReviewsRequest::applicantUserNameIsSet() const
{
    return applicantUserNameIsSet_;
}

void ListInferIntranetConnectionReviewsRequest::unsetapplicantUserName()
{
    applicantUserNameIsSet_ = false;
}

std::string ListInferIntranetConnectionReviewsRequest::getServiceName() const
{
    return serviceName_;
}

void ListInferIntranetConnectionReviewsRequest::setServiceName(const std::string& value)
{
    serviceName_ = value;
    serviceNameIsSet_ = true;
}

bool ListInferIntranetConnectionReviewsRequest::serviceNameIsSet() const
{
    return serviceNameIsSet_;
}

void ListInferIntranetConnectionReviewsRequest::unsetserviceName()
{
    serviceNameIsSet_ = false;
}

std::string ListInferIntranetConnectionReviewsRequest::getVpcName() const
{
    return vpcName_;
}

void ListInferIntranetConnectionReviewsRequest::setVpcName(const std::string& value)
{
    vpcName_ = value;
    vpcNameIsSet_ = true;
}

bool ListInferIntranetConnectionReviewsRequest::vpcNameIsSet() const
{
    return vpcNameIsSet_;
}

void ListInferIntranetConnectionReviewsRequest::unsetvpcName()
{
    vpcNameIsSet_ = false;
}

std::string ListInferIntranetConnectionReviewsRequest::getVpcId() const
{
    return vpcId_;
}

void ListInferIntranetConnectionReviewsRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool ListInferIntranetConnectionReviewsRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void ListInferIntranetConnectionReviewsRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string ListInferIntranetConnectionReviewsRequest::getPoolId() const
{
    return poolId_;
}

void ListInferIntranetConnectionReviewsRequest::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool ListInferIntranetConnectionReviewsRequest::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void ListInferIntranetConnectionReviewsRequest::unsetpoolId()
{
    poolIdIsSet_ = false;
}

std::string ListInferIntranetConnectionReviewsRequest::getSortKey() const
{
    return sortKey_;
}

void ListInferIntranetConnectionReviewsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListInferIntranetConnectionReviewsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListInferIntranetConnectionReviewsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

int32_t ListInferIntranetConnectionReviewsRequest::getLimit() const
{
    return limit_;
}

void ListInferIntranetConnectionReviewsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInferIntranetConnectionReviewsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInferIntranetConnectionReviewsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListInferIntranetConnectionReviewsRequest::getOffset() const
{
    return offset_;
}

void ListInferIntranetConnectionReviewsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInferIntranetConnectionReviewsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInferIntranetConnectionReviewsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListInferIntranetConnectionReviewsRequest::getStatus() const
{
    return status_;
}

void ListInferIntranetConnectionReviewsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListInferIntranetConnectionReviewsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListInferIntranetConnectionReviewsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListInferIntranetConnectionReviewsRequest::getType() const
{
    return type_;
}

void ListInferIntranetConnectionReviewsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListInferIntranetConnectionReviewsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListInferIntranetConnectionReviewsRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


