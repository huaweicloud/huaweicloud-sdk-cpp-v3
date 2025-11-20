

#include "huaweicloud/metastudio/v1/model/DeleteTenantUserConfigurationReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteTenantUserConfigurationReq::DeleteTenantUserConfigurationReq()
{
    myCollectionsIsSet_ = false;
}

DeleteTenantUserConfigurationReq::~DeleteTenantUserConfigurationReq() = default;

void DeleteTenantUserConfigurationReq::validate()
{
}

web::json::value DeleteTenantUserConfigurationReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(myCollectionsIsSet_) {
        val[utility::conversions::to_string_t("my_collections")] = ModelBase::toJson(myCollections_);
    }

    return val;
}
bool DeleteTenantUserConfigurationReq::fromJson(const web::json::value& val)
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


std::vector<CollectionInfo>& DeleteTenantUserConfigurationReq::getMyCollections()
{
    return myCollections_;
}

void DeleteTenantUserConfigurationReq::setMyCollections(const std::vector<CollectionInfo>& value)
{
    myCollections_ = value;
    myCollectionsIsSet_ = true;
}

bool DeleteTenantUserConfigurationReq::myCollectionsIsSet() const
{
    return myCollectionsIsSet_;
}

void DeleteTenantUserConfigurationReq::unsetmyCollections()
{
    myCollectionsIsSet_ = false;
}

}
}
}
}
}


