

#include "huaweicloud/metastudio/v1/model/SetTenantUserConfigurationReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SetTenantUserConfigurationReq::SetTenantUserConfigurationReq()
{
    myCollectionsIsSet_ = false;
}

SetTenantUserConfigurationReq::~SetTenantUserConfigurationReq() = default;

void SetTenantUserConfigurationReq::validate()
{
}

web::json::value SetTenantUserConfigurationReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(myCollectionsIsSet_) {
        val[utility::conversions::to_string_t("my_collections")] = ModelBase::toJson(myCollections_);
    }

    return val;
}
bool SetTenantUserConfigurationReq::fromJson(const web::json::value& val)
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
    return ok;
}


std::vector<CollectionInfo>& SetTenantUserConfigurationReq::getMyCollections()
{
    return myCollections_;
}

void SetTenantUserConfigurationReq::setMyCollections(const std::vector<CollectionInfo>& value)
{
    myCollections_ = value;
    myCollectionsIsSet_ = true;
}

bool SetTenantUserConfigurationReq::myCollectionsIsSet() const
{
    return myCollectionsIsSet_;
}

void SetTenantUserConfigurationReq::unsetmyCollections()
{
    myCollectionsIsSet_ = false;
}

}
}
}
}
}


