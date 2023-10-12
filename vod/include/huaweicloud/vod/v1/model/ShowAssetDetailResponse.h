
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowAssetDetailResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowAssetDetailResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/TranscodeInfo.h>
#include <string>
#include <huaweicloud/vod/v1/model/ThumbnailInfo.h>
#include <huaweicloud/vod/v1/model/ReviewInfo.h>
#include <huaweicloud/vod/v1/model/BaseInfo.h>

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
class HUAWEICLOUD_VOD_V1_EXPORT  ShowAssetDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAssetDetailResponse();
    virtual ~ShowAssetDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAssetDetailResponse members

    /// <summary>
    /// 媒资ID。
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BaseInfo getBaseInfo() const;
    bool baseInfoIsSet() const;
    void unsetbaseInfo();
    void setBaseInfo(const BaseInfo& value);

    /// <summary>
    /// 
    /// </summary>

    TranscodeInfo getTranscodeInfo() const;
    bool transcodeInfoIsSet() const;
    void unsettranscodeInfo();
    void setTranscodeInfo(const TranscodeInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ThumbnailInfo getThumbnailInfo() const;
    bool thumbnailInfoIsSet() const;
    void unsetthumbnailInfo();
    void setThumbnailInfo(const ThumbnailInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ReviewInfo getReviewInfo() const;
    bool reviewInfoIsSet() const;
    void unsetreviewInfo();
    void setReviewInfo(const ReviewInfo& value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    BaseInfo baseInfo_;
    bool baseInfoIsSet_;
    TranscodeInfo transcodeInfo_;
    bool transcodeInfoIsSet_;
    ThumbnailInfo thumbnailInfo_;
    bool thumbnailInfoIsSet_;
    ReviewInfo reviewInfo_;
    bool reviewInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowAssetDetailResponse_H_
