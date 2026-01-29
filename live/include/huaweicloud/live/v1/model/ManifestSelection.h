
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ManifestSelection_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ManifestSelection_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 流选择配置
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ManifestSelection
    : public ModelBase
{
public:
    ManifestSelection();
    virtual ~ManifestSelection();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ManifestSelection members

    /// <summary>
    /// **参数解释**： 流排序模式 **约束限制**： 不涉及 **取值范围**： - ORIGINAL：保持原始顺序，即按照频道配置中转码模板的顺序 - VIDEO_BITRATE_ASCENDING：按照视频码率升序 - VIDEO_BITRATE_DESCENDING：按照视频码率降序 
    /// </summary>

    std::string getStreamOrder() const;
    bool streamOrderIsSet() const;
    void unsetstreamOrder();
    void setStreamOrder(const std::string& value);

    /// <summary>
    /// **参数解释**： 视频码率过滤的最小码率 **约束限制**： 单位：bit/s；取值必须比max_video_bandwidth小 
    /// </summary>

    int32_t getMinVideoBandwidth() const;
    bool minVideoBandwidthIsSet() const;
    void unsetminVideoBandwidth();
    void setMinVideoBandwidth(int32_t value);

    /// <summary>
    /// **参数解释**： 视频码率过滤的最大码率 **约束限制**： 单位：bit/s；取值必须比min_video_bandwidth大 
    /// </summary>

    int32_t getMaxVideoBandwidth() const;
    bool maxVideoBandwidthIsSet() const;
    void unsetmaxVideoBandwidth();
    void setMaxVideoBandwidth(int32_t value);


protected:
    std::string streamOrder_;
    bool streamOrderIsSet_;
    int32_t minVideoBandwidth_;
    bool minVideoBandwidthIsSet_;
    int32_t maxVideoBandwidth_;
    bool maxVideoBandwidthIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ManifestSelection_H_
