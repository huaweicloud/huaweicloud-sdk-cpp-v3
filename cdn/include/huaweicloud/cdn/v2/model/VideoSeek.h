
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_VideoSeek_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_VideoSeek_H_

#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 视频拖拽配置。 &gt; 1. 需同步开启FLV、MP4格式文件的URL参数功能，并选择“忽略参数”。 &gt; 2. 关闭视频拖拽功能时，FLV时间拖拽功能失效。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  VideoSeek
    : public ModelBase
{
public:
    VideoSeek();
    virtual ~VideoSeek();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// VideoSeek members

    /// <summary>
    /// 视频拖拽开关， true：开启，false：关闭  &gt; 当本字段设置为“false”时，查询域名配置接口将不会返回视频拖拽配置信息。
    /// </summary>

    bool isEnableVideoSeek() const;
    bool enableVideoSeekIsSet() const;
    void unsetenableVideoSeek();
    void setEnableVideoSeek(bool value);

    /// <summary>
    /// flv时间拖拽开关， true：开启，false：关闭。
    /// </summary>

    bool isEnableFlvByTimeSeek() const;
    bool enableFlvByTimeSeekIsSet() const;
    void unsetenableFlvByTimeSeek();
    void setEnableFlvByTimeSeek(bool value);

    /// <summary>
    /// 自定义用户请求URL中视频播放的开始参数，支持使用数字0-9、字符a-z、A-Z，及\&quot;_\&quot;，长度≤64个字符。
    /// </summary>

    std::string getStartParameter() const;
    bool startParameterIsSet() const;
    void unsetstartParameter();
    void setStartParameter(const std::string& value);

    /// <summary>
    /// 自定义用户请求URL中视频播放的结束参数，支持使用数字0-9、字符a-z、A-Z，及\&quot;_\&quot;，长度≤64个字符。
    /// </summary>

    std::string getEndParameter() const;
    bool endParameterIsSet() const;
    void unsetendParameter();
    void setEndParameter(const std::string& value);


protected:
    bool enableVideoSeek_;
    bool enableVideoSeekIsSet_;
    bool enableFlvByTimeSeek_;
    bool enableFlvByTimeSeekIsSet_;
    std::string startParameter_;
    bool startParameterIsSet_;
    std::string endParameter_;
    bool endParameterIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_VideoSeek_H_
