

#include "huaweicloud/cpcs/v1/model/ShowResourceDetailAccessKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowResourceDetailAccessKeyRequest::ShowResourceDetailAccessKeyRequest()
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
    to_ = "";
    toIsSet_ = false;
}

ShowResourceDetailAccessKeyRequest::~ShowResourceDetailAccessKeyRequest() = default;

void ShowResourceDetailAccessKeyRequest::validate()
{
}

web::json::value ShowResourceDetailAccessKeyRequest::toJson() const
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
bool ShowResourceDetailAccessKeyRequest::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTo(refVal);
        }
    }
    return ok;
}


std::string ShowResourceDetailAccessKeyRequest::getClusterId() const
{
    return clusterId_;
}

void ShowResourceDetailAccessKeyRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowResourceDetailAccessKeyRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowResourceDetailAccessKeyRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ShowResourceDetailAccessKeyRequest::getAppId() const
{
    return appId_;
}

void ShowResourceDetailAccessKeyRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ShowResourceDetailAccessKeyRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void ShowResourceDetailAccessKeyRequest::unsetappId()
{
    appIdIsSet_ = false;
}

std::string ShowResourceDetailAccessKeyRequest::getServiceType() const
{
    return serviceType_;
}

void ShowResourceDetailAccessKeyRequest::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool ShowResourceDetailAccessKeyRequest::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void ShowResourceDetailAccessKeyRequest::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string ShowResourceDetailAccessKeyRequest::getAlgorithmType() const
{
    return algorithmType_;
}

void ShowResourceDetailAccessKeyRequest::setAlgorithmType(const std::string& value)
{
    algorithmType_ = value;
    algorithmTypeIsSet_ = true;
}

bool ShowResourceDetailAccessKeyRequest::algorithmTypeIsSet() const
{
    return algorithmTypeIsSet_;
}

void ShowResourceDetailAccessKeyRequest::unsetalgorithmType()
{
    algorithmTypeIsSet_ = false;
}

std::string ShowResourceDetailAccessKeyRequest::getCertificateType() const
{
    return certificateType_;
}

void ShowResourceDetailAccessKeyRequest::setCertificateType(const std::string& value)
{
    certificateType_ = value;
    certificateTypeIsSet_ = true;
}

bool ShowResourceDetailAccessKeyRequest::certificateTypeIsSet() const
{
    return certificateTypeIsSet_;
}

void ShowResourceDetailAccessKeyRequest::unsetcertificateType()
{
    certificateTypeIsSet_ = false;
}

int32_t ShowResourceDetailAccessKeyRequest::getPageSize() const
{
    return pageSize_;
}

void ShowResourceDetailAccessKeyRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ShowResourceDetailAccessKeyRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ShowResourceDetailAccessKeyRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ShowResourceDetailAccessKeyRequest::getPageNum() const
{
    return pageNum_;
}

void ShowResourceDetailAccessKeyRequest::setPageNum(int32_t value)
{
    pageNum_ = value;
    pageNumIsSet_ = true;
}

bool ShowResourceDetailAccessKeyRequest::pageNumIsSet() const
{
    return pageNumIsSet_;
}

void ShowResourceDetailAccessKeyRequest::unsetpageNum()
{
    pageNumIsSet_ = false;
}

int64_t ShowResourceDetailAccessKeyRequest::getFrom() const
{
    return from_;
}

void ShowResourceDetailAccessKeyRequest::setFrom(int64_t value)
{
    from_ = value;
    fromIsSet_ = true;
}

bool ShowResourceDetailAccessKeyRequest::fromIsSet() const
{
    return fromIsSet_;
}

void ShowResourceDetailAccessKeyRequest::unsetfrom()
{
    fromIsSet_ = false;
}

std::string ShowResourceDetailAccessKeyRequest::getTo() const
{
    return to_;
}

void ShowResourceDetailAccessKeyRequest::setTo(const std::string& value)
{
    to_ = value;
    toIsSet_ = true;
}

bool ShowResourceDetailAccessKeyRequest::toIsSet() const
{
    return toIsSet_;
}

void ShowResourceDetailAccessKeyRequest::unsetto()
{
    toIsSet_ = false;
}

}
}
}
}
}


