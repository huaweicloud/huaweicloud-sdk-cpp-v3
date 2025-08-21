
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowFlowTrendRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowFlowTrendRequest_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ShowFlowTrendRequest
    : public ModelBase
{
public:
    ShowFlowTrendRequest();
    virtual ~ShowFlowTrendRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowFlowTrendRequest members

    /// <summary>
    /// **参数解释**： 防火墙ID，用户创建防火墙实例后产生的唯一ID，配置后可区分不同防火墙，可通过[防火墙ID获取方式](cfw_02_0028.xml)获取 **约束限制**： 不涉及 **取值范围**： 32位UUID **默认取值**： 不涉及
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**： 时间范围  **约束限制**： 不涉及 **取值范围**： 0为近一时 1近一天 2近七天   **默认取值**： 不涉及
    /// </summary>

    int32_t getRange() const;
    bool rangeIsSet() const;
    void unsetrange();
    void setRange(int32_t value);

    /// <summary>
    /// **参数解释**： 日志类型 **约束限制**： 不涉及 **取值范围**： internet为南北向日志、nat为nat场景日志，vpc为东西向日志，vgw为vgw场景日志 **默认取值**： 不涉及
    /// </summary>

    std::string getLogType() const;
    bool logTypeIsSet() const;
    void unsetlogType();
    void setLogType(const std::string& value);

    /// <summary>
    /// **参数解释**： 会话方向 **约束限制**： 不涉及 **取值范围**： in2out为出云方向 out2in为入云方向 **默认取值**： 不涉及
    /// </summary>

    std::string getDirection() const;
    bool directionIsSet() const;
    void unsetdirection();
    void setDirection(const std::string& value);

    /// <summary>
    /// **参数解释**： 开始时间 **约束限制**： 不涉及 **取值范围**： 毫秒级时间戳 **默认取值**： 不涉及
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// **参数解释**： 结束时间 **约束限制**： 不涉及 **取值范围**： 毫秒级时间戳 **默认取值**： 不涉及
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// **参数解释**： VGW ID **约束限制**： 不涉及 **取值范围**： 32位UUID **默认取值**： 不涉及
    /// </summary>

    std::vector<std::string>& getVgwId();
    bool vgwIdIsSet() const;
    void unsetvgwId();
    void setVgwId(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： IP类型 **约束限制**： 不涉及 **取值范围**： public 公网IP private 私网IP open_port **默认取值**： 不涉及
    /// </summary>

    std::string getAssetType() const;
    bool assetTypeIsSet() const;
    void unsetassetType();
    void setAssetType(const std::string& value);

    /// <summary>
    /// ips
    /// </summary>

    std::vector<std::string>& getIp();
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::vector<std::string>& value);

    /// <summary>
    /// vpcs
    /// </summary>

    std::vector<std::string>& getVpc();
    bool vpcIsSet() const;
    void unsetvpc();
    void setVpc(const std::vector<std::string>& value);


protected:
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;
    int32_t range_;
    bool rangeIsSet_;
    std::string logType_;
    bool logTypeIsSet_;
    std::string direction_;
    bool directionIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::vector<std::string> vgwId_;
    bool vgwIdIsSet_;
    std::string assetType_;
    bool assetTypeIsSet_;
    std::vector<std::string> ip_;
    bool ipIsSet_;
    std::vector<std::string> vpc_;
    bool vpcIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowFlowTrendRequest& dereference_from_shared_ptr(std::shared_ptr<ShowFlowTrendRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowFlowTrendRequest_H_
