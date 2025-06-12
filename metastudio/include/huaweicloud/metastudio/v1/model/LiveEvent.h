
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveEvent_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveEvent_H_


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
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  LiveEvent
    : public ModelBase
{
public:
    LiveEvent();
    virtual ~LiveEvent();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LiveEvent members

    /// <summary>
    /// **参数解释**： 事件戳。从1970-01-01 00:00:00:000开始的毫秒数
    /// </summary>

    int64_t getTimestamp() const;
    bool timestampIsSet() const;
    void unsettimestamp();
    void setTimestamp(int64_t value);

    /// <summary>
    /// **参数解释**： 事件类型。 * 1 弹幕信息 * 2 用户入场 * 3 用户点赞 * 4 用户送礼 * 5 用户订阅\\关注 * 6 房间观看人数
    /// </summary>

    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);

    /// <summary>
    /// 事件内容。 事件类型不同，content内容也不同，定义如下所示： - type&#x3D;1 弹幕信息   content定义：     * user:用户，json     * content: string,弹幕内容     user定义：     * userId：用户id，string     * name：用户姓名，string     * level：用户平台等级，int     * badge：用户牌子名称，string     * badgeLevel：牌子等级，int     举例：   &#x60;&#x60;&#x60;json   {     \&quot;timestamp\&quot;: 1694481224245,     \&quot;type\&quot;: 1,     \&quot;content\&quot;: \&quot;{\\\&quot;user\\\&quot;:{\\\&quot;userId\\\&quot;:\\\&quot;2027271526\\\&quot;,\\\&quot;name\\\&quot;:\\\&quot;***\\\&quot;,\\\&quot;level\\\&quot;:17,\\\&quot;badge\\\&quot;:\\\&quot;\\\&quot;,\\\&quot;badgeLevel\\\&quot;:0},\\\&quot;content\\\&quot;:\\\&quot;***\\\&quot;}\&quot;   }   &#x60;&#x60;&#x60; - type&#x3D;2 用户入场   content定义：     * user:用户，json     举例：   &#x60;&#x60;&#x60;json   {     \&quot;timestamp\&quot;: 1694481227655,     \&quot;type\&quot;: 2,     \&quot;content\&quot;: \&quot;{\\\&quot;user\\\&quot;:{\\\&quot;userId\\\&quot;:\\\&quot;2978899271\\\&quot;,\\\&quot;name\\\&quot;:\\\&quot;***\\\&quot;,\\\&quot;level\\\&quot;:1,\\\&quot;badge\\\&quot;:\\\&quot;\\\&quot;,\\\&quot;badgeLevel\\\&quot;:0}}\&quot;   }   &#x60;&#x60;&#x60; - type&#x3D;3 用户点赞    content定义：     * user：用户，json     举例：   &#x60;&#x60;&#x60;json   {     \&quot;timestamp\&quot;: 1694481227655,     \&quot;type\&quot;: 2,     \&quot;content\&quot;: \&quot;{\\\&quot;user\\\&quot;:{\\\&quot;userId\\\&quot;:\\\&quot;2978899271\\\&quot;,\\\&quot;name\\\&quot;:\\\&quot;***\\\&quot;,\\\&quot;level\\\&quot;:1,\\\&quot;badge\\\&quot;:\\\&quot;\\\&quot;,\\\&quot;badgeLevel\\\&quot;:0}}\&quot;   }   &#x60;&#x60;&#x60; - type&#x3D;4 用户送礼   content定义：     * user：用户，json     * gift：礼物信息,json     gift定义：     * giftName：礼物名称，string     * giftNum：礼物数量，int     * totalValue：此处礼物总价值，int     * giftValue：单个礼物价值，int     举例：   &#x60;&#x60;&#x60;json   {     \&quot;timestamp\&quot;: 1690531652862,     \&quot;type\&quot;: 4,     \&quot;content\&quot;: \&quot;{\\\&quot;gift\\\&quot;:{\\\&quot;giftName\\\&quot;:\\\&quot;小星星\\\&quot;,\\\&quot;giftNum\\\&quot;:10,\\\&quot;totalValue\\\&quot;:10,\\\&quot;giftValue\\\&quot;:3},\\\&quot;user\\\&quot;:{\\\&quot;userId\\\&quot;:\\\&quot;douyin_95882940927\\\&quot;,\\\&quot;name\\\&quot;:\\\&quot;纯爱战士熙熙\\\&quot;,\\\&quot;level\\\&quot;:2,\\\&quot;badge\\\&quot;:\\\&quot;\\\&quot;,\\\&quot;badgeLevel\\\&quot;:0}}\&quot;   }   &#x60;&#x60;&#x60; - type&#x3D;5 用户订阅    暂未使用 - type&#x3D;6 房间观看人数   content定义：     * numberOfViewers：房间观看人数，int     举例：   &#x60;&#x60;&#x60;json   {     \&quot;timestamp\&quot;: 1694481236886,     \&quot;type\&quot;: 6,     \&quot;content\&quot;: \&quot;{\\\&quot;numberOfViewers\\\&quot;:5466}\&quot;   }   &#x60;&#x60;&#x60;
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);


protected:
    int64_t timestamp_;
    bool timestampIsSet_;
    int32_t type_;
    bool typeIsSet_;
    std::string content_;
    bool contentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveEvent_H_
