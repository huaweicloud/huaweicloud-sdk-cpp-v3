

#include "huaweicloud/metastudio/v1/model/CreateMetaStudioOrdersReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateMetaStudioOrdersReq::CreateMetaStudioOrdersReq()
{
    cloudServicesIsSet_ = false;
}

CreateMetaStudioOrdersReq::~CreateMetaStudioOrdersReq() = default;

void CreateMetaStudioOrdersReq::validate()
{
}

web::json::value CreateMetaStudioOrdersReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cloudServicesIsSet_) {
        val[utility::conversions::to_string_t("cloud_services")] = ModelBase::toJson(cloudServices_);
    }

    return val;
}
bool CreateMetaStudioOrdersReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cloud_services"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloud_services"));
        if(!fieldValue.is_null())
        {
            std::vector<PublicCloudServiceOrder> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudServices(refVal);
        }
    }
    return ok;
}


std::vector<PublicCloudServiceOrder>& CreateMetaStudioOrdersReq::getCloudServices()
{
    return cloudServices_;
}

void CreateMetaStudioOrdersReq::setCloudServices(const std::vector<PublicCloudServiceOrder>& value)
{
    cloudServices_ = value;
    cloudServicesIsSet_ = true;
}

bool CreateMetaStudioOrdersReq::cloudServicesIsSet() const
{
    return cloudServicesIsSet_;
}

void CreateMetaStudioOrdersReq::unsetcloudServices()
{
    cloudServicesIsSet_ = false;
}

}
}
}
}
}


