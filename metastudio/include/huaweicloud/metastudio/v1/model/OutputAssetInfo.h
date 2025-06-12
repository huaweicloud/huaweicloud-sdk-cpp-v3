
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_OutputAssetInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_OutputAssetInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 输出资产信息配置。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  OutputAssetInfo
    : public ModelBase
{
public:
    OutputAssetInfo();
    virtual ~OutputAssetInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OutputAssetInfo members

    /// <summary>
    /// 输出视频资产ID。
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 输出视频资产名称。
    /// </summary>

    std::string getAssetName() const;
    bool assetNameIsSet() const;
    void unsetassetName();
    void setAssetName(const std::string& value);

    /// <summary>
    /// 视频封面URL。
    /// </summary>

    std::string getCoverUrl() const;
    bool coverUrlIsSet() const;
    void unsetcoverUrl();
    void setCoverUrl(const std::string& value);

    /// <summary>
    /// 预览视频下载URL。URL有效期24小时。 &gt; * 分身数字人视频制作不支持预览。
    /// </summary>

    std::string getPreviewVideoUrl() const;
    bool previewVideoUrlIsSet() const;
    void unsetpreviewVideoUrl();
    void setPreviewVideoUrl(const std::string& value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    std::string assetName_;
    bool assetNameIsSet_;
    std::string coverUrl_;
    bool coverUrlIsSet_;
    std::string previewVideoUrl_;
    bool previewVideoUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_OutputAssetInfo_H_
