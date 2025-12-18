
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestMixedPictureBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestMixedPictureBody_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/SubscriberInPic.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 设置多画面请求。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestMixedPictureBody
    : public ModelBase
{
public:
    RestMixedPictureBody();
    virtual ~RestMixedPictureBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestMixedPictureBody members

    /// <summary>
    /// 是否为手工设置多画面。 - 0: 系统自动多画面 - 1: 手工设置多画面
    /// </summary>

    int32_t getManualSet() const;
    bool manualSetIsSet() const;
    void unsetmanualSet();
    void setManualSet(int32_t value);

    /// <summary>
    /// 多画面数目。手工设置多画面时有效。 - Single: 单画面 - Two: 二画面 - Three: 三画面 - Four: 四画面 - Six: 六画面 - Nine: 九画面 - Sixteen: 十六画面
    /// </summary>

    std::string getImageType() const;
    bool imageTypeIsSet() const;
    void unsetimageType();
    void setImageType(const std::string& value);

    /// <summary>
    /// 子画面列表（手工设置多画面时必填）。
    /// </summary>

    std::vector<SubscriberInPic>& getSubscriberInPics();
    bool subscriberInPicsIsSet() const;
    void unsetsubscriberInPics();
    void setSubscriberInPics(const std::vector<SubscriberInPic>& value);

    /// <summary>
    /// 表示轮询间隔。单位：秒。 当同一个子画面中包含有多个与会者时，此参数有效。
    /// </summary>

    int32_t getSwitchTime() const;
    bool switchTimeIsSet() const;
    void unsetswitchTime();
    void setSwitchTime(int32_t value);


protected:
    int32_t manualSet_;
    bool manualSetIsSet_;
    std::string imageType_;
    bool imageTypeIsSet_;
    std::vector<SubscriberInPic> subscriberInPics_;
    bool subscriberInPicsIsSet_;
    int32_t switchTime_;
    bool switchTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestMixedPictureBody_H_
