
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AttackStatisticRespBody_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AttackStatisticRespBody_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/TopInfo.h>
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
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  AttackStatisticRespBody
    : public ModelBase
{
public:
    AttackStatisticRespBody();
    virtual ~AttackStatisticRespBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttackStatisticRespBody members

    /// <summary>
    /// **参数解释**： 应用列表 **取值范围**： 不涉及
    /// </summary>

    std::vector<TopInfo>& getApps();
    bool appsIsSet() const;
    void unsetapps();
    void setApps(const std::vector<TopInfo>& value);

    /// <summary>
    /// **参数解释**： 绑定资源名称 **取值范围**： 不涉及
    /// </summary>

    std::string getAssociatedName() const;
    bool associatedNameIsSet() const;
    void unsetassociatedName();
    void setAssociatedName(const std::string& value);

    /// <summary>
    /// **参数解释**： 绑定资源类型 **取值范围**： PORT：IPV4云服务器 IPV6_PORT：IPV6云服务器
    /// </summary>

    std::string getAssociatedType() const;
    bool associatedTypeIsSet() const;
    void unsetassociatedType();
    void setAssociatedType(const std::string& value);

    /// <summary>
    /// **参数解释**： 攻击次数 **取值范围**： 不涉及
    /// </summary>

    int64_t getAttackCount() const;
    bool attackCountIsSet() const;
    void unsetattackCount();
    void setAttackCount(int64_t value);

    /// <summary>
    /// **参数解释**： 攻击类型 **取值范围**： Access Control：访问控制 Vulnerability scanning：漏洞扫描 Email attack：邮件攻击 Vulnerability Attack：漏洞攻击 Web attack：Web攻击 password attack：密码攻击 Hijacking attack：劫持攻击 Protocol exception：协议异常 Trojan horse：特洛伊木马
    /// </summary>

    std::string getAttackType() const;
    bool attackTypeIsSet() const;
    void unsetattackType();
    void setAttackType(const std::string& value);

    /// <summary>
    /// **参数解释**： 拦截次数 **取值范围**： 不涉及
    /// </summary>

    int64_t getDenyCount() const;
    bool denyCountIsSet() const;
    void unsetdenyCount();
    void setDenyCount(int64_t value);

    /// <summary>
    /// **参数解释**： 目的端口列表 **取值范围**： 不涉及
    /// </summary>

    std::vector<TopInfo>& getDstPorts();
    bool dstPortsIsSet() const;
    void unsetdstPorts();
    void setDstPorts(const std::vector<TopInfo>& value);

    /// <summary>
    /// **参数解释**： IP地址 **取值范围**： 不涉及
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// **参数解释**： 最近攻击时间 **取值范围**： 不涉及
    /// </summary>

    int64_t getLatestTime() const;
    bool latestTimeIsSet() const;
    void unsetlatestTime();
    void setLatestTime(int64_t value);

    /// <summary>
    /// **参数解释**： 地区ID **取值范围**： 不涉及
    /// </summary>

    std::string getRegionId() const;
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::string& value);

    /// <summary>
    /// **参数解释**： 地区名称 **取值范围**： 不涉及
    /// </summary>

    std::string getRegionName() const;
    bool regionNameIsSet() const;
    void unsetregionName();
    void setRegionName(const std::string& value);

    /// <summary>
    /// **参数解释**： 攻击来源类型 **取值范围**： 不涉及
    /// </summary>

    std::string getSrcType() const;
    bool srcTypeIsSet() const;
    void unsetsrcType();
    void setSrcType(const std::string& value);

    /// <summary>
    /// **参数解释**： vgw Id **取值范围**： 不涉及
    /// </summary>

    std::string getVgwId() const;
    bool vgwIdIsSet() const;
    void unsetvgwId();
    void setVgwId(const std::string& value);


protected:
    std::vector<TopInfo> apps_;
    bool appsIsSet_;
    std::string associatedName_;
    bool associatedNameIsSet_;
    std::string associatedType_;
    bool associatedTypeIsSet_;
    int64_t attackCount_;
    bool attackCountIsSet_;
    std::string attackType_;
    bool attackTypeIsSet_;
    int64_t denyCount_;
    bool denyCountIsSet_;
    std::vector<TopInfo> dstPorts_;
    bool dstPortsIsSet_;
    std::string ip_;
    bool ipIsSet_;
    int64_t latestTime_;
    bool latestTimeIsSet_;
    std::string regionId_;
    bool regionIdIsSet_;
    std::string regionName_;
    bool regionNameIsSet_;
    std::string srcType_;
    bool srcTypeIsSet_;
    std::string vgwId_;
    bool vgwIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AttackStatisticRespBody_H_
