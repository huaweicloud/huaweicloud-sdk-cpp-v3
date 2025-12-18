
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestSubscriberInPic_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestSubscriberInPic_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 子画面信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestSubscriberInPic
    : public ModelBase
{
public:
    RestSubscriberInPic();
    virtual ~RestSubscriberInPic();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestSubscriberInPic members

    /// <summary>
    /// 多画面中每个画面的编号。编号从1开始。默认值为“1”。
    /// </summary>

    int32_t getIndex() const;
    bool indexIsSet() const;
    void unsetindex();
    void setIndex(int32_t value);

    /// <summary>
    /// 每个画面中与会者号码，从[[查询会议实时信息](https://support.huaweicloud.com/api-meeting/meeting_21_0029.html)](tag:hws)[[查询会议实时信息](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0029.html)](tag:hk)接口返回participants中的phone中获取。
    /// </summary>

    std::vector<std::string>& getSubscriber();
    bool subscriberIsSet() const;
    void unsetsubscriber();
    void setSubscriber(const std::vector<std::string>& value);

    /// <summary>
    /// 是否为辅流。默认值为0。 * 0： 不是辅流 * 1： 是辅流 
    /// </summary>

    int32_t getIsAssistStream() const;
    bool isAssistStreamIsSet() const;
    void unsetisAssistStream();
    void setIsAssistStream(int32_t value);


protected:
    int32_t index_;
    bool indexIsSet_;
    std::vector<std::string> subscriber_;
    bool subscriberIsSet_;
    int32_t isAssistStream_;
    bool isAssistStreamIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestSubscriberInPic_H_
