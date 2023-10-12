
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateExtractAudioTaskResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateExtractAudioTaskResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_VOD_V1_EXPORT  CreateExtractAudioTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateExtractAudioTaskResponse();
    virtual ~CreateExtractAudioTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateExtractAudioTaskResponse members

    /// <summary>
    /// 视频源媒资ID。
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 提取的音频媒资ID。
    /// </summary>

    std::string getAudioAssetId() const;
    bool audioAssetIdIsSet() const;
    void unsetaudioAssetId();
    void setAudioAssetId(const std::string& value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    std::string audioAssetId_;
    bool audioAssetIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateExtractAudioTaskResponse_H_
