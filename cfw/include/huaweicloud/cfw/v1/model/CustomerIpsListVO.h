
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_CustomerIpsListVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_CustomerIpsListVO_H_


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
class HUAWEICLOUD_CFW_V1_EXPORT  CustomerIpsListVO
    : public ModelBase
{
public:
    CustomerIpsListVO();
    virtual ~CustomerIpsListVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CustomerIpsListVO members

    /// <summary>
    /// 动作（0：只记录日志，1：重置/拦截）
    /// </summary>

    int32_t getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(int32_t value);

    /// <summary>
    /// 操作系统
    /// </summary>

    int32_t getAffectedOs() const;
    bool affectedOsIsSet() const;
    void unsetaffectedOs();
    void setAffectedOs(int32_t value);

    /// <summary>
    /// 攻击类型
    /// </summary>

    int32_t getAttackType() const;
    bool attackTypeIsSet() const;
    void unsetattackType();
    void setAttackType(int32_t value);

    /// <summary>
    /// 规则状态（0：初始化，1：配置中，2：配置成功，3：配置失败）
    /// </summary>

    int32_t getConfigStatus() const;
    bool configStatusIsSet() const;
    void unsetconfigStatus();
    void setConfigStatus(int32_t value);

    /// <summary>
    /// 内容json存储
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);

    /// <summary>
    /// 目的端口类型
    /// </summary>

    int32_t getDstPortType() const;
    bool dstPortTypeIsSet() const;
    void unsetdstPortType();
    void setDstPortType(int32_t value);

    /// <summary>
    /// 目的端口
    /// </summary>

    std::string getDstPorts() const;
    bool dstPortsIsSet() const;
    void unsetdstPorts();
    void setDstPorts(const std::string& value);

    /// <summary>
    /// 防火墙集群id
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// cfw侧自定义ips规则id
    /// </summary>

    std::string getIpsCfwId() const;
    bool ipsCfwIdIsSet() const;
    void unsetipsCfwId();
    void setIpsCfwId(const std::string& value);

    /// <summary>
    /// 山石侧规则id
    /// </summary>

    std::string getIpsId() const;
    bool ipsIdIsSet() const;
    void unsetipsId();
    void setIpsId(const std::string& value);

    /// <summary>
    /// ips规则名称
    /// </summary>

    std::string getIpsName() const;
    bool ipsNameIsSet() const;
    void unsetipsName();
    void setIpsName(const std::string& value);

    /// <summary>
    /// 协议
    /// </summary>

    int32_t getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(int32_t value);

    /// <summary>
    /// 严重程度（critical：致命，high：高危，medium:中危，low:低危）
    /// </summary>

    int32_t getSeverity() const;
    bool severityIsSet() const;
    void unsetseverity();
    void setSeverity(int32_t value);

    /// <summary>
    /// 影响软件
    /// </summary>

    int32_t getSoftware() const;
    bool softwareIsSet() const;
    void unsetsoftware();
    void setSoftware(int32_t value);

    /// <summary>
    /// 源端口类型
    /// </summary>

    int32_t getSrcPortType() const;
    bool srcPortTypeIsSet() const;
    void unsetsrcPortType();
    void setSrcPortType(int32_t value);

    /// <summary>
    /// 源端口
    /// </summary>

    std::string getSrcPorts() const;
    bool srcPortsIsSet() const;
    void unsetsrcPorts();
    void setSrcPorts(const std::string& value);


protected:
    int32_t action_;
    bool actionIsSet_;
    int32_t affectedOs_;
    bool affectedOsIsSet_;
    int32_t attackType_;
    bool attackTypeIsSet_;
    int32_t configStatus_;
    bool configStatusIsSet_;
    std::string content_;
    bool contentIsSet_;
    int32_t dstPortType_;
    bool dstPortTypeIsSet_;
    std::string dstPorts_;
    bool dstPortsIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;
    std::string ipsCfwId_;
    bool ipsCfwIdIsSet_;
    std::string ipsId_;
    bool ipsIdIsSet_;
    std::string ipsName_;
    bool ipsNameIsSet_;
    int32_t protocol_;
    bool protocolIsSet_;
    int32_t severity_;
    bool severityIsSet_;
    int32_t software_;
    bool softwareIsSet_;
    int32_t srcPortType_;
    bool srcPortTypeIsSet_;
    std::string srcPorts_;
    bool srcPortsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_CustomerIpsListVO_H_
