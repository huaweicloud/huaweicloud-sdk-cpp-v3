
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListCustomerIpsRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListCustomerIpsRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ListCustomerIpsRequest
    : public ModelBase
{
public:
    ListCustomerIpsRequest();
    virtual ~ListCustomerIpsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCustomerIpsRequest members

    /// <summary>
    /// **参数解释**： 自定义IPS规则执行动作,仅更新自定义IPS规则场景下需要设置，其他场景无需设置 **约束限制**：   不涉及 **取值范围**： 0：只记录日志 1：重置/拦截 **默认取值**：   不涉及
    /// </summary>

    int32_t getActionType() const;
    bool actionTypeIsSet() const;
    void unsetactionType();
    void setActionType(int32_t value);

    /// <summary>
    /// **参数解释**： 影响操作系统 **约束限制**： 不涉及 **取值范围**： 0：ANY 1：Windows 2：Linux 3：FreeBSD 4：Solaris 5：Other Unix 6：网络设备 7：Mac OS 8：IOS 9：Android 10：Others **默认取值**： 不涉及
    /// </summary>

    int32_t getAffectedOs() const;
    bool affectedOsIsSet() const;
    void unsetaffectedOs();
    void setAffectedOs(int32_t value);

    /// <summary>
    /// **参数解释**： 攻击类型 **约束限制**： 不涉及 **取值范围**： 1：访问控制 2：漏洞扫描 3：邮件攻击 4：漏洞攻击 5：Web攻击 6：密码攻击 7：劫持攻击 8：协议异常 9：特洛伊木马 10：蠕虫 11：缓冲区溢出 12：黑客工具 13：间谍软件 14：DDos泛洪 15：应用层DDos攻击 16：其他可疑行为 17：可疑DNS活动 18：网络钓鱼 19：垃圾邮件 20：其他攻击 **默认取值**： 不涉及
    /// </summary>

    int32_t getAttackType() const;
    bool attackTypeIsSet() const;
    void unsetattackType();
    void setAttackType(int32_t value);

    /// <summary>
    /// **参数解释**： ips规则名称 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getIpsName() const;
    bool ipsNameIsSet() const;
    void unsetipsName();
    void setIpsName(const std::string& value);

    /// <summary>
    /// **参数解释**： ips规则ID， 可通过调用获取ips规则列表获取，通过data.records.ips_id获取。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getIpsId() const;
    bool ipsIdIsSet() const;
    void unsetipsId();
    void setIpsId(const std::string& value);

    /// <summary>
    /// **参数解释**： 协议类型 **约束限制**： 不涉及 **取值范围**： 1：FTP 2：TELNET 3：SMTP 4：DNS_TCP 5：DNS_UDP 6：DHCP 7：TFTP 8：FINGER 9：HTTP 10：POP3 11：SUNRPC_TCP 12：SUNRPC_UDP 13：NNTP 14：MSRPC_TCP 15：MSRPC_UDP 16：NETBIOS_NAME_TCP 17：NETBIOS_NAME_UDP 18：NETBIOS_SMB 19：NETBIOS_DATAGRAM 20：IMAP4 21：SNMP 22：LDAP 23：MSSQL 24：ORACLE **默认取值**： 不涉及
    /// </summary>

    int32_t getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(int32_t value);

    /// <summary>
    /// **参数解释**： 严重程度 **约束限制**： 不涉及 **取值范围**： 0：致命 1：高危 2：中危 3：低危 **默认取值**： 不涉及
    /// </summary>

    int32_t getSeverity() const;
    bool severityIsSet() const;
    void unsetseverity();
    void setSeverity(int32_t value);

    /// <summary>
    /// **参数解释**： 影响软件 **约束限制**： 不涉及 **取值范围**： 0：ANY 1：ADOBE 2：APACHE 3：APPLE 4：CA 5：CISCO 6：GOOGLE_CHROME 7：HP 8：IBM 9：IE 10：IIS 11：MC_AFEE 12：MEDIA_PLAYER 13：MICROSOFT_NET 14：MICROSOFT_EDGE 15：MICROSOFT_EXCHANGE 16：MICROSOFT_OFFICE 17：MICROSOFT_OUTLOOK 18：MICROSOFT_SHARE_POINT 19：MICROSOFT_WINDOWS 20：MOZILLA 21：MSSQL 22：MYSQL 23：NOVELL 24：ORACLE 25：SAMBA 26：SAMSUNG 27：SAP 28：SCADA 29：SQUID 30：SUN 31：SYMANTEC 32：TREND_MICRO 33：VMWARE 34：WORD_PRESS 35：Others   **默认取值**： 不涉及
    /// </summary>

    int32_t getSoftware() const;
    bool softwareIsSet() const;
    void unsetsoftware();
    void setSoftware(int32_t value);

    /// <summary>
    /// **参数解释**： 防护对象ID，该字段已废弃 **约束限制**： 不涉及 **取值范围**： 32位UUID **默认取值**： 不涉及
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： 企业项目ID，用户根据组织规划企业项目，对应的ID为企业项目ID，可通过[如何获取企业项目ID](cfw_02_0027.xml)获取，用户未开启企业项目时为0 **约束限制**： 不涉及 **取值范围**： 32位UUID **默认取值**： 不涉及
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： 防火墙ID，用户创建防火墙实例后产生的唯一ID，配置后可区分不同防火墙，可通过[防火墙ID获取方式](cfw_02_0028.xml)获取 **约束限制**： 不涉及 **取值范围**： 32位UUID **默认取值**： 不涉及
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**： 查询返回记录的数量限制 **约束限制**： 不涉及 **取值范围**： 1-1024 **默认取值**： 不涉及
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**： 偏移量，表示查询该偏移量后面的记录 **约束限制**： 不涉及 **取值范围**： 0 - 1024 **默认取值**： 不涉及
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


protected:
    int32_t actionType_;
    bool actionTypeIsSet_;
    int32_t affectedOs_;
    bool affectedOsIsSet_;
    int32_t attackType_;
    bool attackTypeIsSet_;
    std::string ipsName_;
    bool ipsNameIsSet_;
    std::string ipsId_;
    bool ipsIdIsSet_;
    int32_t protocol_;
    bool protocolIsSet_;
    int32_t severity_;
    bool severityIsSet_;
    int32_t software_;
    bool softwareIsSet_;
    std::string objectId_;
    bool objectIdIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListCustomerIpsRequest& dereference_from_shared_ptr(std::shared_ptr<ListCustomerIpsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListCustomerIpsRequest_H_
