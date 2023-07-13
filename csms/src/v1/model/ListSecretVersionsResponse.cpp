

#include "huaweicloud/csms/v1/model/ListSecretVersionsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ListSecretVersionsResponse::ListSecretVersionsResponse()
{
    versionMetadatasIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListSecretVersionsResponse::~ListSecretVersionsResponse() = default;

void ListSecretVersionsResponse::validate()
{
}

web::json::value ListSecretVersionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionMetadatasIsSet_) {
        val[utility::conversions::to_string_t("version_metadatas")] = ModelBase::toJson(versionMetadatas_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}

bool ListSecretVersionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version_metadatas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_metadatas"));
        if(!fieldValue.is_null())
        {
            std::vector<VersionMetadata> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionMetadatas(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}

std::vector<VersionMetadata>& ListSecretVersionsResponse::getVersionMetadatas()
{
    return versionMetadatas_;
}

void ListSecretVersionsResponse::setVersionMetadatas(const std::vector<VersionMetadata>& value)
{
    versionMetadatas_ = value;
    versionMetadatasIsSet_ = true;
}

bool ListSecretVersionsResponse::versionMetadatasIsSet() const
{
    return versionMetadatasIsSet_;
}

void ListSecretVersionsResponse::unsetversionMetadatas()
{
    versionMetadatasIsSet_ = false;
}

PageInfo ListSecretVersionsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListSecretVersionsResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListSecretVersionsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListSecretVersionsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


