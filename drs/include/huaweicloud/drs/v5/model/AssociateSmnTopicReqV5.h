
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_AssociateSmnTopicReqV5_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_AssociateSmnTopicReqV5_H_


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
/// 关联SMN主题请求体
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  AssociateSmnTopicReqV5
    : public ModelBase
{
public:
    AssociateSmnTopicReqV5();
    virtual ~AssociateSmnTopicReqV5();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociateSmnTopicReqV5 members

    /// <summary>
    /// 主题资源标识
    /// </summary>

    std::string getTopicUrn() const;
    bool topicUrnIsSet() const;
    void unsettopicUrn();
    void setTopicUrn(const std::string& value);

    /// <summary>
    /// 增量时延阈值, 单位：秒（s）
    /// </summary>

    int64_t getIncrementDelayThreshold() const;
    bool incrementDelayThresholdIsSet() const;
    void unsetincrementDelayThreshold();
    void setIncrementDelayThreshold(int64_t value);

    /// <summary>
    /// RTO时延阈值，灾备场景下可配置，单位：秒（s）
    /// </summary>

    int64_t getRtoDelayThreshold() const;
    bool rtoDelayThresholdIsSet() const;
    void unsetrtoDelayThreshold();
    void setRtoDelayThreshold(int64_t value);

    /// <summary>
    /// RPO时延阈值，灾备场景下可配置，单位：秒（s）
    /// </summary>

    int64_t getRpoDelayThreshold() const;
    bool rpoDelayThresholdIsSet() const;
    void unsetrpoDelayThreshold();
    void setRpoDelayThreshold(int64_t value);

    /// <summary>
    /// 异常告警是否通知用户，取值范围[true,false]
    /// </summary>

    bool isIsAlarmToUser() const;
    bool isAlarmToUserIsSet() const;
    void unsetisAlarmToUser();
    void setIsAlarmToUser(bool value);


protected:
    std::string topicUrn_;
    bool topicUrnIsSet_;
    int64_t incrementDelayThreshold_;
    bool incrementDelayThresholdIsSet_;
    int64_t rtoDelayThreshold_;
    bool rtoDelayThresholdIsSet_;
    int64_t rpoDelayThreshold_;
    bool rpoDelayThresholdIsSet_;
    bool isAlarmToUser_;
    bool isAlarmToUserIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_AssociateSmnTopicReqV5_H_
