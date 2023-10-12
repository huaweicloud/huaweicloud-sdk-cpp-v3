
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowTakeOverAssetDetailsResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowTakeOverAssetDetailsResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/TranscodeInfo.h>
#include <string>
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
class HUAWEICLOUD_VOD_V1_EXPORT  ShowTakeOverAssetDetailsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTakeOverAssetDetailsResponse();
    virtual ~ShowTakeOverAssetDetailsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTakeOverAssetDetailsResponse members

    /// <summary>
    /// 媒资ID。
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 媒资状态。 - \&quot;CREATING\&quot;：上传中 - \&quot;FAILED\&quot;：上传失败 - \&quot;CREATED\&quot;：上传成功 - \&quot;PUBLISHED\&quot;：已发布 - \&quot;DELETED\&quot;：已删除
    /// </summary>

    std::string getAssetStatus() const;
    bool assetStatusIsSet() const;
    void unsetassetStatus();
    void setAssetStatus(const std::string& value);

    /// <summary>
    /// 转码状态。 - \&quot;UN_TRANSCODE\&quot;：未转码 - \&quot;WAITING_TRANSCODE\&quot;：等待转码，排队中 - \&quot;TRANSCODING\&quot;：转码中 - \&quot;TRANSCODE_SUCCEED\&quot;：转码成功 - \&quot;TRANSCODE_FAILED\&quot;：转码失败
    /// </summary>

    std::string getTranscodeStatus() const;
    bool transcodeStatusIsSet() const;
    void unsettranscodeStatus();
    void setTranscodeStatus(const std::string& value);

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


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    std::string assetStatus_;
    bool assetStatusIsSet_;
    std::string transcodeStatus_;
    bool transcodeStatusIsSet_;
    BaseInfo baseInfo_;
    bool baseInfoIsSet_;
    TranscodeInfo transcodeInfo_;
    bool transcodeInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowTakeOverAssetDetailsResponse_H_
