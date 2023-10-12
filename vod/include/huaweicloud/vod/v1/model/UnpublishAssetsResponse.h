
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_UnpublishAssetsResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_UnpublishAssetsResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/AssetInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  UnpublishAssetsResponse
    : public ModelBase, public HttpResponse
{
public:
    UnpublishAssetsResponse();
    virtual ~UnpublishAssetsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UnpublishAssetsResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<AssetInfo>& getAssetInfoArray();
    bool assetInfoArrayIsSet() const;
    void unsetassetInfoArray();
    void setAssetInfoArray(const std::vector<AssetInfo>& value);


protected:
    std::vector<AssetInfo> assetInfoArray_;
    bool assetInfoArrayIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_UnpublishAssetsResponse_H_
