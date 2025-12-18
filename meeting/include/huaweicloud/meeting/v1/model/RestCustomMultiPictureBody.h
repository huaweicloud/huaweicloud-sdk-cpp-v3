
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestCustomMultiPictureBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestCustomMultiPictureBody_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/PicLayoutInfo.h>
#include <string>
#include <huaweicloud/meeting/v1/model/RestSubscriberInPic.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 设置自定义多画面请求。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestCustomMultiPictureBody
    : public ModelBase
{
public:
    RestCustomMultiPictureBody();
    virtual ~RestCustomMultiPictureBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestCustomMultiPictureBody members

    /// <summary>
    /// 是否为手工设置多画面。 * 0： 系统自动多画面 * 1： 手工设置多画面 
    /// </summary>

    int32_t getManualSet() const;
    bool manualSetIsSet() const;
    void unsetmanualSet();
    void setManualSet(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    PicLayoutInfo getPicLayoutInfo() const;
    bool picLayoutInfoIsSet() const;
    void unsetpicLayoutInfo();
    void setPicLayoutInfo(const PicLayoutInfo& value);

    /// <summary>
    /// 画面类型。手工设置多画面时有效。 - Single: 单画面 - Two: 二画面 - Three: 三画面 - Three-2: 三画面 - Three-3: 三画面 - Three-4: 三画面 - Four: 四画面 - Four-2: 四画面 - Four-3: 四画面 - Five: 五画面 - Five-2: 五画面 - Six: 六画面 - Six-2: 六画面 - Six-3: 六画面 - Six-4: 六画面 - Six-5: 六画面 - Seven: 七画面 - Seven-2: 七画面 - Seven-3: 七画面 - Seven-4: 七画面 - Eight: 八画面 - Eight-2: 八画面 - Eight-3: 八画面 - Eight-4: 八画面 - Nine: 九画面 - Ten: 十画面 - Ten-2: 十画面 - Ten-3: 十画面 - Ten-4: 十画面 - Ten-5: 十画面 - Ten-6: 十画面 - Thirteen: 十三画面 - Thirteen-2: 十三画面 - Thirteen-3: 十三画面 - Thirteen-4: 十三画面 - Thirteen-5: 十三画面 - Sixteen: 十六画面 - Seventeen: 十七画面 - Twenty-Five: 二十五画面 
    /// </summary>

    std::string getImageType() const;
    bool imageTypeIsSet() const;
    void unsetimageType();
    void setImageType(const std::string& value);

    /// <summary>
    /// 子画面列表（手工设置多画面时必填）。
    /// </summary>

    std::vector<RestSubscriberInPic>& getSubscriberInPics();
    bool subscriberInPicsIsSet() const;
    void unsetsubscriberInPics();
    void setSubscriberInPics(const std::vector<RestSubscriberInPic>& value);

    /// <summary>
    /// 表示轮询间隔,取值范围：10-120，默认10。单位：秒。 当同一个子画面中包含有多个与会者时，此参数有效。 &gt; 仅针对专业会议终端生效，对软终端不生效。 
    /// </summary>

    int32_t getSwitchTime() const;
    bool switchTimeIsSet() const;
    void unsetswitchTime();
    void setSwitchTime(int32_t value);

    /// <summary>
    /// 多画面是否仅保存。 * true： 仅保存 * false： 保存并应用 &gt; * ”仅保存“效果：仅保存当前画面布局，不进行广播等操作。 &gt; * ”保存并应用“效果：1、当会议状态为广播多画面、声控单画面、声控多画面、主持人观看多画面时，保存并应用后，改变画面布局，不改变状态。2、当会议状态为非广播多画面、声控单画面、声控多画面、主持人观看多画面时，如自动多画面、广播与会者、点名与会者时，保存并应用后，变为广播多画面。 &gt; * 当处于广播多画面、声控多画面、声控单画面状态下，无法设置主持人观看多画面。 
    /// </summary>

    bool isMultiPicSaveOnly() const;
    bool multiPicSaveOnlyIsSet() const;
    void unsetmultiPicSaveOnly();
    void setMultiPicSaveOnly(bool value);


protected:
    int32_t manualSet_;
    bool manualSetIsSet_;
    PicLayoutInfo picLayoutInfo_;
    bool picLayoutInfoIsSet_;
    std::string imageType_;
    bool imageTypeIsSet_;
    std::vector<RestSubscriberInPic> subscriberInPics_;
    bool subscriberInPicsIsSet_;
    int32_t switchTime_;
    bool switchTimeIsSet_;
    bool multiPicSaveOnly_;
    bool multiPicSaveOnlyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestCustomMultiPictureBody_H_
