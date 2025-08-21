
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_FlowAnalysisVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_FlowAnalysisVO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/cfw/v1/model/SessionVO.h>

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
class HUAWEICLOUD_CFW_V1_EXPORT  FlowAnalysisVO
    : public ModelBase
{
public:
    FlowAnalysisVO();
    virtual ~FlowAnalysisVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FlowAnalysisVO members

    /// <summary>
    /// **参数解释**： 应用统计 **取值范围**： 不涉及
    /// </summary>

    int64_t getAppCount() const;
    bool appCountIsSet() const;
    void unsetappCount();
    void setAppCount(int64_t value);

    /// <summary>
    /// **参数解释**： 字节数 **取值范围**： 不涉及
    /// </summary>

    double getBytes() const;
    bool bytesIsSet() const;
    void unsetbytes();
    void setBytes(double value);

    /// <summary>
    /// **参数解释**： 目的IP计数 **取值范围**： 不涉及
    /// </summary>

    int64_t getDstIpCount() const;
    bool dstIpCountIsSet() const;
    void unsetdstIpCount();
    void setDstIpCount(int64_t value);

    /// <summary>
    /// **参数**： 目的端口计数 **取值范围**： 不涉及
    /// </summary>

    int64_t getDstPortCount() const;
    bool dstPortCountIsSet() const;
    void unsetdstPortCount();
    void setDstPortCount(int64_t value);

    /// <summary>
    /// **参数解释**： 结束时间 **取值范围**： 不涉及
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// **参数解释**： TOP会话详情 **取值范围**： 不涉及
    /// </summary>

    std::vector<SessionVO>& getRecords();
    bool recordsIsSet() const;
    void unsetrecords();
    void setRecords(const std::vector<SessionVO>& value);

    /// <summary>
    /// **参数解释**： 请求字节数 **取值范围**： 不涉及
    /// </summary>

    double getRequestByte() const;
    bool requestByteIsSet() const;
    void unsetrequestByte();
    void setRequestByte(double value);

    /// <summary>
    /// **参数解释**： 响应字节数 **取值范围**： 不涉及
    /// </summary>

    double getResponseByte() const;
    bool responseByteIsSet() const;
    void unsetresponseByte();
    void setResponseByte(double value);

    /// <summary>
    /// **参数解释**： 会话次数 **取值范围**： 不涉及
    /// </summary>

    int64_t getSessions() const;
    bool sessionsIsSet() const;
    void unsetsessions();
    void setSessions(int64_t value);

    /// <summary>
    /// **参数解释**： 源IP计数 **取值范围**： 不涉及
    /// </summary>

    int64_t getSrcIpCount() const;
    bool srcIpCountIsSet() const;
    void unsetsrcIpCount();
    void setSrcIpCount(int64_t value);

    /// <summary>
    /// **参数解释**： 开始时间 **取值范围**： 不涉及
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);


protected:
    int64_t appCount_;
    bool appCountIsSet_;
    double bytes_;
    bool bytesIsSet_;
    int64_t dstIpCount_;
    bool dstIpCountIsSet_;
    int64_t dstPortCount_;
    bool dstPortCountIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::vector<SessionVO> records_;
    bool recordsIsSet_;
    double requestByte_;
    bool requestByteIsSet_;
    double responseByte_;
    bool responseByteIsSet_;
    int64_t sessions_;
    bool sessionsIsSet_;
    int64_t srcIpCount_;
    bool srcIpCountIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_FlowAnalysisVO_H_
