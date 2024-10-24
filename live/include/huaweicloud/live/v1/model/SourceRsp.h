
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_SourceRsp_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_SourceRsp_H_


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
/// RTMP推流地址。只有频道入流协议为RTMP_PUSH时，会返回RTMP推流地址
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  SourceRsp
    : public ModelBase
{
public:
    SourceRsp();
    virtual ~SourceRsp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SourceRsp members

    /// <summary>
    /// RTMP推流地址
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 码率。  单位：bps。取值范围：(0,104,857,600]（100Mbps）
    /// </summary>

    int32_t getBitrate() const;
    bool bitrateIsSet() const;
    void unsetbitrate();
    void setBitrate(int32_t value);

    /// <summary>
    /// 分辨率对应宽的值。取值范围：0 - 4096（4K）
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// 分辨率对应高的值。取值范围：0 - 2160（4K）
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// 描述是否使用该流做截图
    /// </summary>

    bool isEnableSnapshot() const;
    bool enableSnapshotIsSet() const;
    void unsetenableSnapshot();
    void setEnableSnapshot(bool value);


protected:
    std::string url_;
    bool urlIsSet_;
    int32_t bitrate_;
    bool bitrateIsSet_;
    int32_t width_;
    bool widthIsSet_;
    int32_t height_;
    bool heightIsSet_;
    bool enableSnapshot_;
    bool enableSnapshotIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_SourceRsp_H_
