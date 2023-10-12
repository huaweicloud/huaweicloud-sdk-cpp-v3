
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowAssetMetaResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowAssetMetaResponse_H_


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
class HUAWEICLOUD_VOD_V1_EXPORT  ShowAssetMetaResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAssetMetaResponse();
    virtual ~ShowAssetMetaResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAssetMetaResponse members

    /// <summary>
    /// 媒资信息列表。
    /// </summary>

    std::vector<AssetInfo>& getAssetInfoArray();
    bool assetInfoArrayIsSet() const;
    void unsetassetInfoArray();
    void setAssetInfoArray(const std::vector<AssetInfo>& value);

    /// <summary>
    /// 列表是否被截断。  取值如下： - 1：表示本次查询未返回全部结果。 - 0：表示本次查询已经返回了全部结果。
    /// </summary>

    int32_t getIsTruncated() const;
    bool isTruncatedIsSet() const;
    void unsetisTruncated();
    void setIsTruncated(int32_t value);

    /// <summary>
    /// 查询媒资总数。  &gt; 暂只能统计2万个媒资，若您需要查询具体的媒资总数，请[提交工单](https://console.huaweicloud.com/ticket/?#/ticketindex/business?productTypeId&#x3D;462902cc39a04ab3a429df872021f970)申请。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<AssetInfo> assetInfoArray_;
    bool assetInfoArrayIsSet_;
    int32_t isTruncated_;
    bool isTruncatedIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowAssetMetaResponse_H_
