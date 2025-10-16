

#include "huaweicloud/cpcs/v1/model/ShowResourceDetailCertificateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowResourceDetailCertificateRequest::ShowResourceDetailCertificateRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    algorithmType_ = "";
    algorithmTypeIsSet_ = false;
    certificateType_ = "";
    certificateTypeIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    pageNum_ = 0;
    pageNumIsSet_ = false;
    from_ = 0L;
    fromIsSet_ = false;
    to_ = 0L;
    toIsSet_ = false;
}

ShowResourceDetailCertificateRequest::~ShowResourceDetailCertificateRequest() = default;

void ShowResourceDetailCertificateRequest::validate()
{
}

web::json::value ShowResourceDetailCertificateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(algorithmTypeIsSet_) {
        val[utility::conversions::to_string_t("algorithm_type")] = ModelBase::toJson(algorithmType_);
    }
    if(certificateTypeIsSet_) {
        val[utility::conversions::to_string_t("certificate_type")] = ModelBase::toJson(certificateType_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(pageNumIsSet_) {
        val[utility::conversions::to_string_t("page_num")] = ModelBase::toJson(pageNum_);
    }
    if(fromIsSet_) {
        val[utility::conversions::to_string_t("from")] = ModelBase::toJson(from_);
    }
    if(toIsSet_) {
        val[utility::conversions::to_string_t("to")] = ModelBase::toJson(to_);
    }

    return val;
}
bool ShowResourceDetailCertificateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("algorithm_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("algorithm_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlgorithmType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("from"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("from"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrom(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("to"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("to"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTo(refVal);
        }
    }
    return ok;
}


std::string ShowResourceDetailCertificateRequest::getClusterId() const
{
    return clusterId_;
}

void ShowResourceDetailCertificateRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowResourceDetailCertificateRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowResourceDetailCertificateRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ShowResourceDetailCertificateRequest::getAppId() const
{
    return appId_;
}

void ShowResourceDetailCertificateRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ShowResourceDetailCertificateRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void ShowResourceDetailCertificateRequest::unsetappId()
{
    appIdIsSet_ = false;
}

std::string ShowResourceDetailCertificateRequest::getServiceType() const
{
    return serviceType_;
}

void ShowResourceDetailCertificateRequest::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool ShowResourceDetailCertificateRequest::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void ShowResourceDetailCertificateRequest::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string ShowResourceDetailCertificateRequest::getAlgorithmType() const
{
    return algorithmType_;
}

void ShowResourceDetailCertificateRequest::setAlgorithmType(const std::string& value)
{
    algorithmType_ = value;
    algorithmTypeIsSet_ = true;
}

bool ShowResourceDetailCertificateRequest::algorithmTypeIsSet() const
{
    return algorithmTypeIsSet_;
}

void ShowResourceDetailCertificateRequest::unsetalgorithmType()
{
    algorithmTypeIsSet_ = false;
}

std::string ShowResourceDetailCertificateRequest::getCertificateType() const
{
    return certificateType_;
}

void ShowResourceDetailCertificateRequest::setCertificateType(const std::string& value)
{
    certificateType_ = value;
    certificateTypeIsSet_ = true;
}

bool ShowResourceDetailCertificateRequest::certificateTypeIsSet() const
{
    return certificateTypeIsSet_;
}

void ShowResourceDetailCertificateRequest::unsetcertificateType()
{
    certificateTypeIsSet_ = false;
}

int32_t ShowResourceDetailCertificateRequest::getPageSize() const
{
    return pageSize_;
}

void ShowResourceDetailCertificateRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ShowResourceDetailCertificateRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ShowResourceDetailCertificateRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ShowResourceDetailCertificateRequest::getPageNum() const
{
    return pageNum_;
}

void ShowResourceDetailCertificateRequest::setPageNum(int32_t value)
{
    pageNum_ = value;
    pageNumIsSet_ = true;
}

bool ShowResourceDetailCertificateRequest::pageNumIsSet() const
{
    return pageNumIsSet_;
}

void ShowResourceDetailCertificateRequest::unsetpageNum()
{
    pageNumIsSet_ = false;
}

int64_t ShowResourceDetailCertificateRequest::getFrom() const
{
    return from_;
}

void ShowResourceDetailCertificateRequest::setFrom(int64_t value)
{
    from_ = value;
    fromIsSet_ = true;
}

bool ShowResourceDetailCertificateRequest::fromIsSet() const
{
    return fromIsSet_;
}

void ShowResourceDetailCertificateRequest::unsetfrom()
{
    fromIsSet_ = false;
}

int64_t ShowResourceDetailCertificateRequest::getTo() const
{
    return to_;
}

void ShowResourceDetailCertificateRequest::setTo(int64_t value)
{
    to_ = value;
    toIsSet_ = true;
}

bool ShowResourceDetailCertificateRequest::toIsSet() const
{
    return toIsSet_;
}

void ShowResourceDetailCertificateRequest::unsetto()
{
    toIsSet_ = false;
}

}
}
}
}
}


