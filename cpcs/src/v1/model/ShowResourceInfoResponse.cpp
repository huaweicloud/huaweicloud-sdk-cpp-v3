

#include "huaweicloud/cpcs/v1/model/ShowResourceInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowResourceInfoResponse::ShowResourceInfoResponse()
{
    cloudServiceIsSet_ = false;
    ccspServiceIsSet_ = false;
    vsmIsSet_ = false;
    appIsSet_ = false;
    kmsIsSet_ = false;
}

ShowResourceInfoResponse::~ShowResourceInfoResponse() = default;

void ShowResourceInfoResponse::validate()
{
}

web::json::value ShowResourceInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cloudServiceIsSet_) {
        val[utility::conversions::to_string_t("cloud_service")] = ModelBase::toJson(cloudService_);
    }
    if(ccspServiceIsSet_) {
        val[utility::conversions::to_string_t("ccsp_service")] = ModelBase::toJson(ccspService_);
    }
    if(vsmIsSet_) {
        val[utility::conversions::to_string_t("vsm")] = ModelBase::toJson(vsm_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(kmsIsSet_) {
        val[utility::conversions::to_string_t("kms")] = ModelBase::toJson(kms_);
    }

    return val;
}
bool ShowResourceInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cloud_service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloud_service"));
        if(!fieldValue.is_null())
        {
            CloudServiceInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudService(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ccsp_service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ccsp_service"));
        if(!fieldValue.is_null())
        {
            CcspServiceInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCcspService(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vsm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vsm"));
        if(!fieldValue.is_null())
        {
            VsmResourceInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVsm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app"));
        if(!fieldValue.is_null())
        {
            AppResourceInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kms"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kms"));
        if(!fieldValue.is_null())
        {
            KmsResourceInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKms(refVal);
        }
    }
    return ok;
}


CloudServiceInfo ShowResourceInfoResponse::getCloudService() const
{
    return cloudService_;
}

void ShowResourceInfoResponse::setCloudService(const CloudServiceInfo& value)
{
    cloudService_ = value;
    cloudServiceIsSet_ = true;
}

bool ShowResourceInfoResponse::cloudServiceIsSet() const
{
    return cloudServiceIsSet_;
}

void ShowResourceInfoResponse::unsetcloudService()
{
    cloudServiceIsSet_ = false;
}

CcspServiceInfo ShowResourceInfoResponse::getCcspService() const
{
    return ccspService_;
}

void ShowResourceInfoResponse::setCcspService(const CcspServiceInfo& value)
{
    ccspService_ = value;
    ccspServiceIsSet_ = true;
}

bool ShowResourceInfoResponse::ccspServiceIsSet() const
{
    return ccspServiceIsSet_;
}

void ShowResourceInfoResponse::unsetccspService()
{
    ccspServiceIsSet_ = false;
}

VsmResourceInfo ShowResourceInfoResponse::getVsm() const
{
    return vsm_;
}

void ShowResourceInfoResponse::setVsm(const VsmResourceInfo& value)
{
    vsm_ = value;
    vsmIsSet_ = true;
}

bool ShowResourceInfoResponse::vsmIsSet() const
{
    return vsmIsSet_;
}

void ShowResourceInfoResponse::unsetvsm()
{
    vsmIsSet_ = false;
}

AppResourceInfo ShowResourceInfoResponse::getApp() const
{
    return app_;
}

void ShowResourceInfoResponse::setApp(const AppResourceInfo& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ShowResourceInfoResponse::appIsSet() const
{
    return appIsSet_;
}

void ShowResourceInfoResponse::unsetapp()
{
    appIsSet_ = false;
}

KmsResourceInfo ShowResourceInfoResponse::getKms() const
{
    return kms_;
}

void ShowResourceInfoResponse::setKms(const KmsResourceInfo& value)
{
    kms_ = value;
    kmsIsSet_ = true;
}

bool ShowResourceInfoResponse::kmsIsSet() const
{
    return kmsIsSet_;
}

void ShowResourceInfoResponse::unsetkms()
{
    kmsIsSet_ = false;
}

}
}
}
}
}


