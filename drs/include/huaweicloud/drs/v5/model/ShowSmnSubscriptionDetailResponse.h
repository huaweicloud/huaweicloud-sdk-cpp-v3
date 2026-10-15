
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowSmnSubscriptionDetailResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowSmnSubscriptionDetailResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowSmnSubscriptionDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSmnSubscriptionDetailResponse();
    virtual ~ShowSmnSubscriptionDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSmnSubscriptionDetailResponse members

    /// <summary>
    /// SMN主题名称
    /// </summary>

    std::string getTopicName() const;
    bool topicNameIsSet() const;
    void unsettopicName();
    void setTopicName(const std::string& value);

    /// <summary>
    /// SMN主题的唯一资源标识
    /// </summary>

    std::string getTopicUrn() const;
    bool topicUrnIsSet() const;
    void unsettopicUrn();
    void setTopicUrn(const std::string& value);

    /// <summary>
    /// 延迟时间，单位秒
    /// </summary>

    int32_t getDelayTime() const;
    bool delayTimeIsSet() const;
    void unsetdelayTime();
    void setDelayTime(int32_t value);

    /// <summary>
    /// RPO延迟时间，单位秒
    /// </summary>

    int32_t getRpoDelay() const;
    bool rpoDelayIsSet() const;
    void unsetrpoDelay();
    void setRpoDelay(int32_t value);

    /// <summary>
    /// RTO延迟时间，单位秒
    /// </summary>

    int32_t getRtoDelay() const;
    bool rtoDelayIsSet() const;
    void unsetrtoDelay();
    void setRtoDelay(int32_t value);

    /// <summary>
    /// 是否发送告警给订阅用户
    /// </summary>

    bool isIsAlarmUser() const;
    bool isAlarmUserIsSet() const;
    void unsetisAlarmUser();
    void setIsAlarmUser(bool value);


protected:
    std::string topicName_;
    bool topicNameIsSet_;
    std::string topicUrn_;
    bool topicUrnIsSet_;
    int32_t delayTime_;
    bool delayTimeIsSet_;
    int32_t rpoDelay_;
    bool rpoDelayIsSet_;
    int32_t rtoDelay_;
    bool rtoDelayIsSet_;
    bool isAlarmUser_;
    bool isAlarmUserIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowSmnSubscriptionDetailResponse_H_
