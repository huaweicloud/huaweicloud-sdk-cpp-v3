
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_FlowDetailsVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_FlowDetailsVO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cfw/v1/model/ItemVO.h>
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
class HUAWEICLOUD_CFW_V1_EXPORT  FlowDetailsVO
    : public ModelBase
{
public:
    FlowDetailsVO();
    virtual ~FlowDetailsVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FlowDetailsVO members

    /// <summary>
    /// **参数解释**： 应用统计 **取值范围**： 不涉及
    /// </summary>

    std::vector<ItemVO>& getApps();
    bool appsIsSet() const;
    void unsetapps();
    void setApps(const std::vector<ItemVO>& value);

    /// <summary>
    /// **参数解释**： 关联资产类型 **取值范围**： 不涉及
    /// </summary>

    std::string getAssociateInstanceType() const;
    bool associateInstanceTypeIsSet() const;
    void unsetassociateInstanceType();
    void setAssociateInstanceType(const std::string& value);

    /// <summary>
    /// **参数解释**： 关联资产名称 **取值范围**： 不涉及
    /// </summary>

    std::string getDeviceName() const;
    bool deviceNameIsSet() const;
    void unsetdeviceName();
    void setDeviceName(const std::string& value);

    /// <summary>
    /// **参数解释**： 聚合项 **取值范围**： 不涉及
    /// </summary>

    std::string getItem() const;
    bool itemIsSet() const;
    void unsetitem();
    void setItem(const std::string& value);

    /// <summary>
    /// **参数解释**： 最近访问时间 **取值范围**： 不涉及
    /// </summary>

    int64_t getLastTime() const;
    bool lastTimeIsSet() const;
    void unsetlastTime();
    void setLastTime(int64_t value);

    /// <summary>
    /// **参数解释**： 端口统计 **取值范围**： 不涉及
    /// </summary>

    std::vector<ItemVO>& getPorts();
    bool portsIsSet() const;
    void unsetports();
    void setPorts(const std::vector<ItemVO>& value);

    /// <summary>
    /// **参数解释**： 地区 **取值范围**： 不涉及
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

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
    /// **参数解释**： 会话数量 **取值范围**： 不涉及
    /// </summary>

    int64_t getSessions() const;
    bool sessionsIsSet() const;
    void unsetsessions();
    void setSessions(int64_t value);

    /// <summary>
    /// **参数解释**： 标签 **取值范围**： 不涉及
    /// </summary>

    std::string getTags() const;
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::string& value);

    /// <summary>
    /// **参数解释**： 源IP **取值范围**： 不涉及
    /// </summary>

    std::vector<ItemVO>& getSrcIp();
    bool srcIpIsSet() const;
    void unsetsrcIp();
    void setSrcIp(const std::vector<ItemVO>& value);

    /// <summary>
    /// **参数解释**： 目的IP **取值范围**： 不涉及
    /// </summary>

    std::vector<ItemVO>& getDstIp();
    bool dstIpIsSet() const;
    void unsetdstIp();
    void setDstIp(const std::vector<ItemVO>& value);

    /// <summary>
    /// **参数解释**： 协议 **取值范围**： 不涉及
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);


protected:
    std::vector<ItemVO> apps_;
    bool appsIsSet_;
    std::string associateInstanceType_;
    bool associateInstanceTypeIsSet_;
    std::string deviceName_;
    bool deviceNameIsSet_;
    std::string item_;
    bool itemIsSet_;
    int64_t lastTime_;
    bool lastTimeIsSet_;
    std::vector<ItemVO> ports_;
    bool portsIsSet_;
    std::string region_;
    bool regionIsSet_;
    double requestByte_;
    bool requestByteIsSet_;
    double responseByte_;
    bool responseByteIsSet_;
    int64_t sessions_;
    bool sessionsIsSet_;
    std::string tags_;
    bool tagsIsSet_;
    std::vector<ItemVO> srcIp_;
    bool srcIpIsSet_;
    std::vector<ItemVO> dstIp_;
    bool dstIpIsSet_;
    std::string protocol_;
    bool protocolIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_FlowDetailsVO_H_
