
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_MssPackageItem_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_MssPackageItem_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/PackageRequestArgs.h>
#include <huaweicloud/live/v1/model/StreamSelectionItem.h>
#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/live/v1/model/Encryption.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// MSS频道出流信息
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  MssPackageItem
    : public ModelBase
{
public:
    MssPackageItem();
    virtual ~MssPackageItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MssPackageItem members

    /// <summary>
    /// 客户自定义的拉流地址，包括方法、域名、路径
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 从全量流中过滤出一个码率在[min, max]区间的流。如果不需要码率过滤可不选。
    /// </summary>

    std::vector<StreamSelectionItem>& getStreamSelection();
    bool streamSelectionIsSet() const;
    void unsetstreamSelection();
    void setStreamSelection(const std::vector<StreamSelectionItem>& value);

    /// <summary>
    /// 频道输出分片的时长，为必选项  单位：秒。取值范围：1-10 &gt; 修改分片时长会影响已录制内容的时移和回看服务，请谨慎修改！
    /// </summary>

    int32_t getSegmentDurationSeconds() const;
    bool segmentDurationSecondsIsSet() const;
    void unsetsegmentDurationSeconds();
    void setSegmentDurationSeconds(int32_t value);

    /// <summary>
    /// 频道直播返回分片的窗口长度，为频道输出分片的时长乘以数量后得到的值。实际返回的分片数不小于3个。  单位：秒。取值范围：0 - 86400（24小时转化成秒后的取值）
    /// </summary>

    int32_t getPlaylistWindowSeconds() const;
    bool playlistWindowSecondsIsSet() const;
    void unsetplaylistWindowSeconds();
    void setPlaylistWindowSeconds(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    Encryption getEncryption() const;
    bool encryptionIsSet() const;
    void unsetencryption();
    void setEncryption(const Encryption& value);

    /// <summary>
    /// 其他额外参数
    /// </summary>

    Object getExtArgs() const;
    bool extArgsIsSet() const;
    void unsetextArgs();
    void setExtArgs(const Object& value);

    /// <summary>
    /// 延播时长，单位秒
    /// </summary>

    int32_t getDelaySegment() const;
    bool delaySegmentIsSet() const;
    void unsetdelaySegment();
    void setDelaySegment(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    PackageRequestArgs getRequestArgs() const;
    bool requestArgsIsSet() const;
    void unsetrequestArgs();
    void setRequestArgs(const PackageRequestArgs& value);


protected:
    std::string url_;
    bool urlIsSet_;
    std::vector<StreamSelectionItem> streamSelection_;
    bool streamSelectionIsSet_;
    int32_t segmentDurationSeconds_;
    bool segmentDurationSecondsIsSet_;
    int32_t playlistWindowSeconds_;
    bool playlistWindowSecondsIsSet_;
    Encryption encryption_;
    bool encryptionIsSet_;
    Object extArgs_;
    bool extArgsIsSet_;
    int32_t delaySegment_;
    bool delaySegmentIsSet_;
    PackageRequestArgs requestArgs_;
    bool requestArgsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_MssPackageItem_H_
