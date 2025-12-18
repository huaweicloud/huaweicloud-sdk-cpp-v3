
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_MultiPicDisplayDO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_MultiPicDisplayDO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/PicLayoutInfo.h>
#include <string>
#include <huaweicloud/meeting/v1/model/PicInfoNotify.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 多画面显示信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  MultiPicDisplayDO
    : public ModelBase
{
public:
    MultiPicDisplayDO();
    virtual ~MultiPicDisplayDO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MultiPicDisplayDO members

    /// <summary>
    /// 是否为手工设置多画面。 * 0 ：系统自动多画面 * 1 ：手工设置多画面 
    /// </summary>

    int32_t getManualSet() const;
    bool manualSetIsSet() const;
    void unsetmanualSet();
    void setManualSet(int32_t value);

    /// <summary>
    /// 画面类型。取值范围: * Single: 单画面 * Two: 二画面 * Three: 三画面， Three-2: 三画面-2， Three-3: 三画面-3， Three-4: 三画面-4 * Four: 四画面， Four-2: 四画面-2， Four-3: 四画面-3 * Five: 五画面， Five-2: 五画面-2 * Six: 六画面， Six-2: 六画面-2， Six-3: 六画面-3， Six-4: 六画面-4， Six-5: 六画面-5 * Seven: 七画面， Seven-2: 七画面-2， Seven-3: 七画面-3， Seven-4: 七画面-4 * Eight: 八画面， Eight-2: 八画面-2， Eight-3: 八画面-3， Eight-4: 八画面-4 * Nine: 九画面 * Ten: 十画面， Ten-2: 十画面-2， Ten-3: 十画面-3， Ten-4: 十画面-4， Ten-5: 十画面-5， Ten-6: 十画面-6 * Thirteen: 十三画面， Thirteen-2: 十三画面-2， Thirteen-3: 十三画面-3，Thirteen-4: 十三画面-4， Thirteen-5: 十三画面-5， ThirteenR: 十三画面R， ThirteenM: 十三画面M * Sixteen: 十六画面 * Seventeen: 十七画面 * Twenty-Five: 二十五画面 * Custom: 自定义多画面（当前不支持） 
    /// </summary>

    std::string getImageType() const;
    bool imageTypeIsSet() const;
    void unsetimageType();
    void setImageType(const std::string& value);

    /// <summary>
    /// 子画面列表。
    /// </summary>

    std::vector<PicInfoNotify>& getSubscriberInPics();
    bool subscriberInPicsIsSet() const;
    void unsetsubscriberInPics();
    void setSubscriberInPics(const std::vector<PicInfoNotify>& value);

    /// <summary>
    /// 表示轮询间隔，单位：秒。当同一个子画面中包含有多个视频源时，此参数有效。
    /// </summary>

    int32_t getSwitchTime() const;
    bool switchTimeIsSet() const;
    void unsetswitchTime();
    void setSwitchTime(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    PicLayoutInfo getPicLayoutInfo() const;
    bool picLayoutInfoIsSet() const;
    void unsetpicLayoutInfo();
    void setPicLayoutInfo(const PicLayoutInfo& value);


protected:
    int32_t manualSet_;
    bool manualSetIsSet_;
    std::string imageType_;
    bool imageTypeIsSet_;
    std::vector<PicInfoNotify> subscriberInPics_;
    bool subscriberInPicsIsSet_;
    int32_t switchTime_;
    bool switchTimeIsSet_;
    PicLayoutInfo picLayoutInfo_;
    bool picLayoutInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_MultiPicDisplayDO_H_
