
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
    /// **参数解释**： 动作 **取值范围**： 0：只记录日志，1：重置/拦截
    /// </summary>

    int32_t getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(int32_t value);

    /// <summary>
    /// **参数解释**： 影响操作系统 **取值范围**： 0 any、1 Windows、2 Linux、3 FreeBSD、4 Solaris、5 other Unix、6 网络设备、7 Mac OS、8 ios、9 android、10 others
    /// </summary>

    int32_t getAffectedOs() const;
    bool affectedOsIsSet() const;
    void unsetaffectedOs();
    void setAffectedOs(int32_t value);

    /// <summary>
    /// **参数解释**： 攻击类型 **约束限制**： 不涉及 **取值范围**： 1：访问控制、2：漏洞扫描、3：邮件攻击、4：漏洞攻击、5：Web攻击、6：密码攻击、7：劫持攻击、8：协议异常、9：特洛伊木马、10：蠕虫、11：缓冲区溢出、12：黑客工具、13：间谍软件、14：DDos泛洪、15：应用层DDos攻击、16：其他可疑行为、17：可疑DNS活动、18：网络钓鱼、19：垃圾邮件、20：其他攻击 **默认取值**： 不涉及
    /// </summary>

    int32_t getAttackType() const;
    bool attackTypeIsSet() const;
    void unsetattackType();
    void setAttackType(int32_t value);

    /// <summary>
    /// **参数解释**： 规则状态 **取值范围**： 0：初始化，1：配置中，2：配置成功，3：配置失败
    /// </summary>

    int32_t getConfigStatus() const;
    bool configStatusIsSet() const;
    void unsetconfigStatus();
    void setConfigStatus(int32_t value);

    /// <summary>
    /// **参数解释**： 匹配IPS攻击的内容 **取值范围**： 不涉及
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);

    /// <summary>
    /// **参数解释**： 端口类型 **取值范围**： -1 Any，0 包含，1 排除
    /// </summary>

    int32_t getDstPortType() const;
    bool dstPortTypeIsSet() const;
    void unsetdstPortType();
    void setDstPortType(int32_t value);

    /// <summary>
    /// **参数解释**： 端口 **取值范围**： 1 - 65535
    /// </summary>

    std::string getDstPorts() const;
    bool dstPortsIsSet() const;
    void unsetdstPorts();
    void setDstPorts(const std::string& value);

    /// <summary>
    /// **参数解释**： cfw侧自定义IPS规则id **约束限制**： 不涉及 **取值范围**： 32位UUID **默认取值**： 不涉及
    /// </summary>

    std::string getIpsCfwId() const;
    bool ipsCfwIdIsSet() const;
    void unsetipsCfwId();
    void setIpsCfwId(const std::string& value);

    /// <summary>
    /// **参数解释**： ips规则id **取值范围**： 不涉及
    /// </summary>

    std::string getIpsId() const;
    bool ipsIdIsSet() const;
    void unsetipsId();
    void setIpsId(const std::string& value);

    /// <summary>
    /// **参数解释**： ips规则名称 **取值范围**： 不涉及
    /// </summary>

    std::string getIpsName() const;
    bool ipsNameIsSet() const;
    void unsetipsName();
    void setIpsName(const std::string& value);

    /// <summary>
    /// **参数解释**： 协议类型 **取值范围**： 1 FTP、2 TELNET、3 SMTP、4 DNS_TCP、5 DNS_UDP、6 DHCP、7 TFTP、8 FINGER、9 HTTP、10 POP3、11 SUNRPC_TCP、12 SUNRPC_UDP、13 NNTP、14 MSRPC_TCP、15 MSRPC_UDP、16 NETBIOS_NAME_TCP、17 NETBIOS_NAME_UDP、18 NETBIOS_SMB、19 NETBIOS_DATAGRAM、20 IMAP4、21 SNMP、22 LDAP、23 MSSQL、24 ORACLE
    /// </summary>

    int32_t getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(int32_t value);

    /// <summary>
    /// **参数解释**： 严重程度 **取值范围**： critical：致命，high：高危，medium:中危，low:低危
    /// </summary>

    int32_t getSeverity() const;
    bool severityIsSet() const;
    void unsetseverity();
    void setSeverity(int32_t value);

    /// <summary>
    /// **参数解释**： 影响软件 **取值范围**： 0 ANY、1 ADOBE、2 APACHE、3 APPLE、4 CA、5 CISCO、6 GOOGLE_CHROME、7 HP、8 IBM、9 IE、10 IIS、11 MC_AFEE、12 MEDIA_PLAYER、13 MICROSOFT_NET、14 MICROSOFT_EDGE、15 MICROSOFT_EXCHANGE、16 MICROSOFT_OFFICE、17 MICROSOFT_OUTLOOK、18 MICROSOFT_SHARE_POINT、19 MICROSOFT_WINDOWS、20 MOZILLA、21 MSSQL、22 MYSQL、23 NOVELL、24 ORACLE、25 SAMBA、26 SAMSUNG、27 SAP、28 SCADA、29 SQUID、30 SUN、31 SYMANTEC、32 TREND_MICRO、33 VMWARE、34 WORD_PRESS、35 Others
    /// </summary>

    int32_t getSoftware() const;
    bool softwareIsSet() const;
    void unsetsoftware();
    void setSoftware(int32_t value);

    /// <summary>
    /// **参数解释**： 端口类型，-1 Any，0 包含，1 排除 **取值范围**： 不涉及
    /// </summary>

    int32_t getSrcPortType() const;
    bool srcPortTypeIsSet() const;
    void unsetsrcPortType();
    void setSrcPortType(int32_t value);

    /// <summary>
    /// **参数解释**： 端口 **取值范围**： 不涉及
    /// </summary>

    std::string getSrcPorts() const;
    bool srcPortsIsSet() const;
    void unsetsrcPorts();
    void setSrcPorts(const std::string& value);

    /// <summary>
    /// **参数解释**： 集群ID **取值范围**： 不涉及
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);


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
    std::string groupId_;
    bool groupIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_CustomerIpsListVO_H_
