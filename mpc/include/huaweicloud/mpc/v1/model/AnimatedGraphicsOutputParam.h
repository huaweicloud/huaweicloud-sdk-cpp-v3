
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_AnimatedGraphicsOutputParam_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_AnimatedGraphicsOutputParam_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  AnimatedGraphicsOutputParam
    : public ModelBase
{
public:
    AnimatedGraphicsOutputParam();
    virtual ~AnimatedGraphicsOutputParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AnimatedGraphicsOutputParam members

    /// <summary>
    /// 动图格式，目前仅支持取值 gif 
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);

    /// <summary>
    /// 输出动图的宽。  取值范围：0，-1或[32,3840]之间2的倍数。  &gt;- 若设置为-1， 则宽根据高来自适应，此时“height”不能取-1或0。 &gt;- 若设置为0，则取原始视频的宽，此时“height”只能取0。 
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// 输出动图的高。  取值范围：0，-1或[32,2160]之间2的倍数。  &gt;- 若设置为-1， 则高根据宽来自适应，此时“width”不能取-1或0。 &gt;- 若设置为0，则取原始视频的高，此时“width”只能取0。 
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// 起始时间，单位：毫秒 
    /// </summary>

    int32_t getStart() const;
    bool startIsSet() const;
    void unsetstart();
    void setStart(int32_t value);

    /// <summary>
    /// 结束时间。  单位：毫秒。  end、start差值最多60秒。 
    /// </summary>

    int32_t getEnd() const;
    bool endIsSet() const;
    void unsetend();
    void setEnd(int32_t value);

    /// <summary>
    /// 动图帧率。  取值范围：[1,75] 
    /// </summary>

    int32_t getFrameRate() const;
    bool frameRateIsSet() const;
    void unsetframeRate();
    void setFrameRate(int32_t value);


protected:
    std::string format_;
    bool formatIsSet_;
    int32_t width_;
    bool widthIsSet_;
    int32_t height_;
    bool heightIsSet_;
    int32_t start_;
    bool startIsSet_;
    int32_t end_;
    bool endIsSet_;
    int32_t frameRate_;
    bool frameRateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_AnimatedGraphicsOutputParam_H_
