

#include "huaweicloud/metastudio/v1/model/ShowTenantUserConfigurationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowTenantUserConfigurationResponse::ShowTenantUserConfigurationResponse()
{
    myCollectionsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowTenantUserConfigurationResponse::~ShowTenantUserConfigurationResponse() = default;

void ShowTenantUserConfigurationResponse::validate()
{
}

web::json::value ShowTenantUserConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(myCollectionsIsSet_) {
        val[utility::conversions::to_string_t("my_collections")] = ModelBase::toJson(myCollections_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowTenantUserConfigurationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("my_collections"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("my_collections"));
        if(!fieldValue.is_null())
        {
            std::vector<CollectionInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMyCollections(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::vector<CollectionInfo>& ShowTenantUserConfigurationResponse::getMyCollections()
{
    return myCollections_;
}

void ShowTenantUserConfigurationResponse::setMyCollections(const std::vector<CollectionInfo>& value)
{
    myCollections_ = value;
    myCollectionsIsSet_ = true;
}

bool ShowTenantUserConfigurationResponse::myCollectionsIsSet() const
{
    return myCollectionsIsSet_;
}

void ShowTenantUserConfigurationResponse::unsetmyCollections()
{
    myCollectionsIsSet_ = false;
}

std::string ShowTenantUserConfigurationResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowTenantUserConfigurationResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowTenantUserConfigurationResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowTenantUserConfigurationResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


