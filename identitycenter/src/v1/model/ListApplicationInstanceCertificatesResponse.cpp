

#include "huaweicloud/identitycenter/v1/model/ListApplicationInstanceCertificatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListApplicationInstanceCertificatesResponse::ListApplicationInstanceCertificatesResponse()
{
    applicationInstanceCertificatesIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListApplicationInstanceCertificatesResponse::~ListApplicationInstanceCertificatesResponse() = default;

void ListApplicationInstanceCertificatesResponse::validate()
{
}

web::json::value ListApplicationInstanceCertificatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationInstanceCertificatesIsSet_) {
        val[utility::conversions::to_string_t("application_instance_certificates")] = ModelBase::toJson(applicationInstanceCertificates_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListApplicationInstanceCertificatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("application_instance_certificates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_instance_certificates"));
        if(!fieldValue.is_null())
        {
            std::vector<CertificateDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationInstanceCertificates(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfoDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}


std::vector<CertificateDto>& ListApplicationInstanceCertificatesResponse::getApplicationInstanceCertificates()
{
    return applicationInstanceCertificates_;
}

void ListApplicationInstanceCertificatesResponse::setApplicationInstanceCertificates(const std::vector<CertificateDto>& value)
{
    applicationInstanceCertificates_ = value;
    applicationInstanceCertificatesIsSet_ = true;
}

bool ListApplicationInstanceCertificatesResponse::applicationInstanceCertificatesIsSet() const
{
    return applicationInstanceCertificatesIsSet_;
}

void ListApplicationInstanceCertificatesResponse::unsetapplicationInstanceCertificates()
{
    applicationInstanceCertificatesIsSet_ = false;
}

PageInfoDto ListApplicationInstanceCertificatesResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListApplicationInstanceCertificatesResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListApplicationInstanceCertificatesResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListApplicationInstanceCertificatesResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


