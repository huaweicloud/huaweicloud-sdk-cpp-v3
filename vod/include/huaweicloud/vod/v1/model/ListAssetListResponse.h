
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ListAssetListResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ListAssetListResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/AssetSummary.h>
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
class HUAWEICLOUD_VOD_V1_EXPORT  ListAssetListResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAssetListResponse();
    virtual ~ListAssetListResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAssetListResponse members

    /// <summary>
    /// 媒资总数  &gt; 暂只能统计2万个媒资，若您需要查询具体的媒资总数，请提交工单申请。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 媒资列表
    /// </summary>

    std::vector<AssetSummary>& getAssets();
    bool assetsIsSet() const;
    void unsetassets();
    void setAssets(const std::vector<AssetSummary>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<AssetSummary> assets_;
    bool assetsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ListAssetListResponse_H_
