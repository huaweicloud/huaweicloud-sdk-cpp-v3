

#include "huaweicloud/identitycenterstore/v1/model/ListExternalIdPConfigurationsForDirectoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




ListExternalIdPConfigurationsForDirectoryResponse::ListExternalIdPConfigurationsForDirectoryResponse()
{
    associationsIsSet_ = false;
}

ListExternalIdPConfigurationsForDirectoryResponse::~ListExternalIdPConfigurationsForDirectoryResponse() = default;

void ListExternalIdPConfigurationsForDirectoryResponse::validate()
{
}

web::json::value ListExternalIdPConfigurationsForDirectoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(associationsIsSet_) {
        val[utility::conversions::to_string_t("associations")] = ModelBase::toJson(associations_);
    }

    return val;
}
bool ListExternalIdPConfigurationsForDirectoryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("associations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associations"));
        if(!fieldValue.is_null())
        {
            std::vector<ExternalIdpConfigurationDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociations(refVal);
        }
    }
    return ok;
}


std::vector<ExternalIdpConfigurationDto>& ListExternalIdPConfigurationsForDirectoryResponse::getAssociations()
{
    return associations_;
}

void ListExternalIdPConfigurationsForDirectoryResponse::setAssociations(const std::vector<ExternalIdpConfigurationDto>& value)
{
    associations_ = value;
    associationsIsSet_ = true;
}

bool ListExternalIdPConfigurationsForDirectoryResponse::associationsIsSet() const
{
    return associationsIsSet_;
}

void ListExternalIdPConfigurationsForDirectoryResponse::unsetassociations()
{
    associationsIsSet_ = false;
}

}
}
}
}
}


