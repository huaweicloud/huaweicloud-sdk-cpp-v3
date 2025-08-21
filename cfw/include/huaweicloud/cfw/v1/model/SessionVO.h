
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_SessionVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_SessionVO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CFW_V1_EXPORT  SessionVO
    : public ModelBase
{
public:
    SessionVO();
    virtual ~SessionVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SessionVO members

    /// <summary>
    /// **参数解释**： 应用 **取值范围**： 不涉及
    /// </summary>

    std::string getApp() const;
    bool appIsSet() const;
    void unsetapp();
    void setApp(const std::string& value);

    /// <summary>
    /// **参数解释**： 字节数 **取值范围**： 不涉及
    /// </summary>

    double getBytes() const;
    bool bytesIsSet() const;
    void unsetbytes();
    void setBytes(double value);

    /// <summary>
    /// **参数解释**： 目的IP关联资产类型 **取值范围**： 不涉及
    /// </summary>

    std::string getDstAssociateInstanceType() const;
    bool dstAssociateInstanceTypeIsSet() const;
    void unsetdstAssociateInstanceType();
    void setDstAssociateInstanceType(const std::string& value);

    /// <summary>
    /// **参数解释**： 目的IP关联资产名称 **取值范围**： 不涉及
    /// </summary>

    std::string getDstDeviceName() const;
    bool dstDeviceNameIsSet() const;
    void unsetdstDeviceName();
    void setDstDeviceName(const std::string& value);

    /// <summary>
    /// **参数解释**： 目的IP **取值范围**： 不涉及
    /// </summary>

    std::string getDstIp() const;
    bool dstIpIsSet() const;
    void unsetdstIp();
    void setDstIp(const std::string& value);

    /// <summary>
    /// **参数解释**： 目的端口 **取值范围**： 不涉及
    /// </summary>

    std::string getDstPort() const;
    bool dstPortIsSet() const;
    void unsetdstPort();
    void setDstPort(const std::string& value);

    /// <summary>
    /// **参数解释**： 目的域名 **取值范围**： 不涉及
    /// </summary>

    std::string getDstHost() const;
    bool dstHostIsSet() const;
    void unsetdstHost();
    void setDstHost(const std::string& value);

    /// <summary>
    /// **参数解释**： 目的regionID **取值范围**： 不涉及
    /// </summary>

    std::string getDstRegionId() const;
    bool dstRegionIdIsSet() const;
    void unsetdstRegionId();
    void setDstRegionId(const std::string& value);

    /// <summary>
    /// **参数解释**： 目的地区 **取值范围**： 不涉及
    /// </summary>

    std::string getDstRegionName() const;
    bool dstRegionNameIsSet() const;
    void unsetdstRegionName();
    void setDstRegionName(const std::string& value);

    /// <summary>
    /// **参数解释**： 结束时间 **取值范围**： 不涉及
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// **参数解释**： 协议 **取值范围**： 不涉及
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);

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
    /// **参数解释**： 源IP关联资产类型 **取值范围**： 不涉及
    /// </summary>

    std::string getSrcAssociateInstanceType() const;
    bool srcAssociateInstanceTypeIsSet() const;
    void unsetsrcAssociateInstanceType();
    void setSrcAssociateInstanceType(const std::string& value);

    /// <summary>
    /// **参数解释**： 源IP关联资产名称 **取值范围**： 不涉及
    /// </summary>

    std::string getSrcDeviceName() const;
    bool srcDeviceNameIsSet() const;
    void unsetsrcDeviceName();
    void setSrcDeviceName(const std::string& value);

    /// <summary>
    /// **参数解释**： 源IP **取值范围**： 不涉及
    /// </summary>

    std::string getSrcIp() const;
    bool srcIpIsSet() const;
    void unsetsrcIp();
    void setSrcIp(const std::string& value);

    /// <summary>
    /// **参数解释**： 源地区 ID **取值范围**： 不涉及
    /// </summary>

    std::string getSrcRegionId() const;
    bool srcRegionIdIsSet() const;
    void unsetsrcRegionId();
    void setSrcRegionId(const std::string& value);

    /// <summary>
    /// **参数解释**： 源地区 **取值范围**： 不涉及
    /// </summary>

    std::string getSrcRegionName() const;
    bool srcRegionNameIsSet() const;
    void unsetsrcRegionName();
    void setSrcRegionName(const std::string& value);

    /// <summary>
    /// **参数解释**： 会话开始时间 **取值范围**： 不涉及
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);


protected:
    std::string app_;
    bool appIsSet_;
    double bytes_;
    bool bytesIsSet_;
    std::string dstAssociateInstanceType_;
    bool dstAssociateInstanceTypeIsSet_;
    std::string dstDeviceName_;
    bool dstDeviceNameIsSet_;
    std::string dstIp_;
    bool dstIpIsSet_;
    std::string dstPort_;
    bool dstPortIsSet_;
    std::string dstHost_;
    bool dstHostIsSet_;
    std::string dstRegionId_;
    bool dstRegionIdIsSet_;
    std::string dstRegionName_;
    bool dstRegionNameIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::string protocol_;
    bool protocolIsSet_;
    double requestByte_;
    bool requestByteIsSet_;
    double responseByte_;
    bool responseByteIsSet_;
    int64_t sessions_;
    bool sessionsIsSet_;
    std::string srcAssociateInstanceType_;
    bool srcAssociateInstanceTypeIsSet_;
    std::string srcDeviceName_;
    bool srcDeviceNameIsSet_;
    std::string srcIp_;
    bool srcIpIsSet_;
    std::string srcRegionId_;
    bool srcRegionIdIsSet_;
    std::string srcRegionName_;
    bool srcRegionNameIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_SessionVO_H_
