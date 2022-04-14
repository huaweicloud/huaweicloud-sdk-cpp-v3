
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListSecretVersionsResponse_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListSecretVersionsResponse_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/PageInfo.h>
#include <vector>
#include <huaweicloud/csms/v1/model/VersionMetadata.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  ListSecretVersionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSecretVersionsResponse();
    virtual ~ListSecretVersionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListSecretVersionsResponse members

    /// <summary>
    /// version_metadata对象。
    /// </summary>

    std::vector<VersionMetadata>& getVersionMetadatas();
    bool versionMetadatasIsSet() const;
    void unsetversionMetadatas();
    void setVersionMetadatas(const std::vector<VersionMetadata>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfo getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfo& value);


protected:
    std::vector<VersionMetadata> versionMetadatas_;
    bool versionMetadatasIsSet_;
    PageInfo pageInfo_;
    bool pageInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListSecretVersionsResponse_H_
