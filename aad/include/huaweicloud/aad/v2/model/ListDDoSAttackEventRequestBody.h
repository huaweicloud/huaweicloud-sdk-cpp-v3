
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ListDDoSAttackEventRequestBody_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ListDDoSAttackEventRequestBody_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  ListDDoSAttackEventRequestBody
    : public ModelBase
{
public:
    ListDDoSAttackEventRequestBody();
    virtual ~ListDDoSAttackEventRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDDoSAttackEventRequestBody members

    /// <summary>
    /// 开始时间（毫秒时间戳）
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间（毫秒时间戳）
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 偏移量
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 限制条数，范围1-100
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 高防ip
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// 攻击流量最小值
    /// </summary>

    std::string getAttackFlowLow() const;
    bool attackFlowLowIsSet() const;
    void unsetattackFlowLow();
    void setAttackFlowLow(const std::string& value);

    /// <summary>
    /// 攻击流量最大值
    /// </summary>

    std::string getAttackFlowUp() const;
    bool attackFlowUpIsSet() const;
    void unsetattackFlowUp();
    void setAttackFlowUp(const std::string& value);

    /// <summary>
    /// 攻击状态：attack-攻击; normal-结束攻击
    /// </summary>

    std::string getAttackStatus() const;
    bool attackStatusIsSet() const;
    void unsetattackStatus();
    void setAttackStatus(const std::string& value);


protected:
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string ip_;
    bool ipIsSet_;
    std::string attackFlowLow_;
    bool attackFlowLowIsSet_;
    std::string attackFlowUp_;
    bool attackFlowUpIsSet_;
    std::string attackStatus_;
    bool attackStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ListDDoSAttackEventRequestBody_H_
