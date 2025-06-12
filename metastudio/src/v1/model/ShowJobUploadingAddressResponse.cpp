

#include "huaweicloud/metastudio/v1/model/ShowJobUploadingAddressResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowJobUploadingAddressResponse::ShowJobUploadingAddressResponse()
{
    segmentUrlIsSet_ = false;
    packageUrlIsSet_ = false;
    authorizationLetterUploadingUrl_ = "";
    authorizationLetterUploadingUrlIsSet_ = false;
}

ShowJobUploadingAddressResponse::~ShowJobUploadingAddressResponse() = default;

void ShowJobUploadingAddressResponse::validate()
{
}

web::json::value ShowJobUploadingAddressResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(segmentUrlIsSet_) {
        val[utility::conversions::to_string_t("segment_url")] = ModelBase::toJson(segmentUrl_);
    }
    if(packageUrlIsSet_) {
        val[utility::conversions::to_string_t("package_url")] = ModelBase::toJson(packageUrl_);
    }
    if(authorizationLetterUploadingUrlIsSet_) {
        val[utility::conversions::to_string_t("authorization_letter_uploading_url")] = ModelBase::toJson(authorizationLetterUploadingUrl_);
    }

    return val;
}
bool ShowJobUploadingAddressResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("segment_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("segment_url"));
        if(!fieldValue.is_null())
        {
            ShowJobUploadingAddressRsp_segment_url refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSegmentUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("package_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_url"));
        if(!fieldValue.is_null())
        {
            ShowJobUploadingAddressRsp_package_url refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("authorization_letter_uploading_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authorization_letter_uploading_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorizationLetterUploadingUrl(refVal);
        }
    }
    return ok;
}


ShowJobUploadingAddressRsp_segment_url ShowJobUploadingAddressResponse::getSegmentUrl() const
{
    return segmentUrl_;
}

void ShowJobUploadingAddressResponse::setSegmentUrl(const ShowJobUploadingAddressRsp_segment_url& value)
{
    segmentUrl_ = value;
    segmentUrlIsSet_ = true;
}

bool ShowJobUploadingAddressResponse::segmentUrlIsSet() const
{
    return segmentUrlIsSet_;
}

void ShowJobUploadingAddressResponse::unsetsegmentUrl()
{
    segmentUrlIsSet_ = false;
}

ShowJobUploadingAddressRsp_package_url ShowJobUploadingAddressResponse::getPackageUrl() const
{
    return packageUrl_;
}

void ShowJobUploadingAddressResponse::setPackageUrl(const ShowJobUploadingAddressRsp_package_url& value)
{
    packageUrl_ = value;
    packageUrlIsSet_ = true;
}

bool ShowJobUploadingAddressResponse::packageUrlIsSet() const
{
    return packageUrlIsSet_;
}

void ShowJobUploadingAddressResponse::unsetpackageUrl()
{
    packageUrlIsSet_ = false;
}

std::string ShowJobUploadingAddressResponse::getAuthorizationLetterUploadingUrl() const
{
    return authorizationLetterUploadingUrl_;
}

void ShowJobUploadingAddressResponse::setAuthorizationLetterUploadingUrl(const std::string& value)
{
    authorizationLetterUploadingUrl_ = value;
    authorizationLetterUploadingUrlIsSet_ = true;
}

bool ShowJobUploadingAddressResponse::authorizationLetterUploadingUrlIsSet() const
{
    return authorizationLetterUploadingUrlIsSet_;
}

void ShowJobUploadingAddressResponse::unsetauthorizationLetterUploadingUrl()
{
    authorizationLetterUploadingUrlIsSet_ = false;
}

}
}
}
}
}


