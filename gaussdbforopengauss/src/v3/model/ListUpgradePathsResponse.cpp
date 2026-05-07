

#include "huaweicloud/gaussdbforopengauss/v3/model/ListUpgradePathsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListUpgradePathsResponse::ListUpgradePathsResponse()
{
    versionInfosIsSet_ = false;
    versionEdgesIsSet_ = false;
}

ListUpgradePathsResponse::~ListUpgradePathsResponse() = default;

void ListUpgradePathsResponse::validate()
{
}

web::json::value ListUpgradePathsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionInfosIsSet_) {
        val[utility::conversions::to_string_t("version_infos")] = ModelBase::toJson(versionInfos_);
    }
    if(versionEdgesIsSet_) {
        val[utility::conversions::to_string_t("version_edges")] = ModelBase::toJson(versionEdges_);
    }

    return val;
}
bool ListUpgradePathsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<VersionInfosResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_edges"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_edges"));
        if(!fieldValue.is_null())
        {
            std::vector<UpgradePathsResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionEdges(refVal);
        }
    }
    return ok;
}


std::vector<VersionInfosResult>& ListUpgradePathsResponse::getVersionInfos()
{
    return versionInfos_;
}

void ListUpgradePathsResponse::setVersionInfos(const std::vector<VersionInfosResult>& value)
{
    versionInfos_ = value;
    versionInfosIsSet_ = true;
}

bool ListUpgradePathsResponse::versionInfosIsSet() const
{
    return versionInfosIsSet_;
}

void ListUpgradePathsResponse::unsetversionInfos()
{
    versionInfosIsSet_ = false;
}

std::vector<UpgradePathsResult>& ListUpgradePathsResponse::getVersionEdges()
{
    return versionEdges_;
}

void ListUpgradePathsResponse::setVersionEdges(const std::vector<UpgradePathsResult>& value)
{
    versionEdges_ = value;
    versionEdgesIsSet_ = true;
}

bool ListUpgradePathsResponse::versionEdgesIsSet() const
{
    return versionEdgesIsSet_;
}

void ListUpgradePathsResponse::unsetversionEdges()
{
    versionEdgesIsSet_ = false;
}

}
}
}
}
}


