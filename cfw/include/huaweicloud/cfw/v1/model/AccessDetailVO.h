
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AccessDetailVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AccessDetailVO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/AccessLogInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  AccessDetailVO
    : public ModelBase
{
public:
    AccessDetailVO();
    virtual ~AccessDetailVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AccessDetailVO members

    /// <summary>
    /// **参数解释**： 目的IP数量 **取值范围**： 不涉及
    /// </summary>

    int64_t getDstIpCount() const;
    bool dstIpCountIsSet() const;
    void unsetdstIpCount();
    void setDstIpCount(int64_t value);

    /// <summary>
    /// **参数解释**： 目的端口数量 **取值范围**： 不涉及
    /// </summary>

    int64_t getDstPortCount() const;
    bool dstPortCountIsSet() const;
    void unsetdstPortCount();
    void setDstPortCount(int64_t value);

    /// <summary>
    /// **参数解释**： 命中次数 **取值范围**： 不涉及
    /// </summary>

    int64_t getHitCount() const;
    bool hitCountIsSet() const;
    void unsethitCount();
    void setHitCount(int64_t value);

    /// <summary>
    /// **参数解释**： 协议数量 **取值范围**： 不涉及
    /// </summary>

    int64_t getProtocolCount() const;
    bool protocolCountIsSet() const;
    void unsetprotocolCount();
    void setProtocolCount(int64_t value);

    /// <summary>
    /// **参数解释**： 结束时间 **取值范围**： 不涉及
    /// </summary>

    int64_t getRecentEndTime() const;
    bool recentEndTimeIsSet() const;
    void unsetrecentEndTime();
    void setRecentEndTime(int64_t value);

    /// <summary>
    /// **参数解释**： 开始时间 **取值范围**： 不涉及
    /// </summary>

    int64_t getRecentStartTime() const;
    bool recentStartTimeIsSet() const;
    void unsetrecentStartTime();
    void setRecentStartTime(int64_t value);

    /// <summary>
    /// **参数解释**： 记录数量 **取值范围**： 不涉及
    /// </summary>

    int64_t getRecordTotal() const;
    bool recordTotalIsSet() const;
    void unsetrecordTotal();
    void setRecordTotal(int64_t value);

    /// <summary>
    /// **参数解释**： 命中详情 **取值范围**： 不涉及
    /// </summary>

    std::vector<AccessLogInfo>& getRecords();
    bool recordsIsSet() const;
    void unsetrecords();
    void setRecords(const std::vector<AccessLogInfo>& value);

    /// <summary>
    /// **参数解释**： 命中规则数 **取值范围**： 不涉及
    /// </summary>

    int64_t getRuleHitCount() const;
    bool ruleHitCountIsSet() const;
    void unsetruleHitCount();
    void setRuleHitCount(int64_t value);

    /// <summary>
    /// **参数解释**： 源IP数量 **取值范围**： 不涉及
    /// </summary>

    int64_t getSrcIpCount() const;
    bool srcIpCountIsSet() const;
    void unsetsrcIpCount();
    void setSrcIpCount(int64_t value);


protected:
    int64_t dstIpCount_;
    bool dstIpCountIsSet_;
    int64_t dstPortCount_;
    bool dstPortCountIsSet_;
    int64_t hitCount_;
    bool hitCountIsSet_;
    int64_t protocolCount_;
    bool protocolCountIsSet_;
    int64_t recentEndTime_;
    bool recentEndTimeIsSet_;
    int64_t recentStartTime_;
    bool recentStartTimeIsSet_;
    int64_t recordTotal_;
    bool recordTotalIsSet_;
    std::vector<AccessLogInfo> records_;
    bool recordsIsSet_;
    int64_t ruleHitCount_;
    bool ruleHitCountIsSet_;
    int64_t srcIpCount_;
    bool srcIpCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AccessDetailVO_H_
