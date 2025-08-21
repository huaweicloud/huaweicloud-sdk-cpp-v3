
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AccessLogInfo_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AccessLogInfo_H_


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
class HUAWEICLOUD_CFW_V1_EXPORT  AccessLogInfo
    : public ModelBase
{
public:
    AccessLogInfo();
    virtual ~AccessLogInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AccessLogInfo members

    /// <summary>
    /// **参数解释**： 动作 **取值范围**： 不涉及
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// **参数解释**： 应用 **取值范围**： 不涉及
    /// </summary>

    std::string getApp() const;
    bool appIsSet() const;
    void unsetapp();
    void setApp(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 目的域名 **取值范围**： 不涉及
    /// </summary>

    std::string getDstHost() const;
    bool dstHostIsSet() const;
    void unsetdstHost();
    void setDstHost(const std::string& value);

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

    int32_t getDstPort() const;
    bool dstPortIsSet() const;
    void unsetdstPort();
    void setDstPort(int32_t value);

    /// <summary>
    /// **参数解释**： 目的地区ID **取值范围**： 不涉及
    /// </summary>

    std::string getDstRegionId() const;
    bool dstRegionIdIsSet() const;
    void unsetdstRegionId();
    void setDstRegionId(const std::string& value);

    /// <summary>
    /// **参数解释**： 目的地区名称 **取值范围**： 不涉及
    /// </summary>

    std::string getDstRegionName() const;
    bool dstRegionNameIsSet() const;
    void unsetdstRegionName();
    void setDstRegionName(const std::string& value);

    /// <summary>
    /// **参数解释**： 目的省份ID **取值范围**： 不涉及
    /// </summary>

    std::string getDstProvinceId() const;
    bool dstProvinceIdIsSet() const;
    void unsetdstProvinceId();
    void setDstProvinceId(const std::string& value);

    /// <summary>
    /// **参数解释**： 目的省份名称 **取值范围**： 不涉及
    /// </summary>

    std::string getDstProvinceName() const;
    bool dstProvinceNameIsSet() const;
    void unsetdstProvinceName();
    void setDstProvinceName(const std::string& value);

    /// <summary>
    /// **参数解释**： 目的城市ID **取值范围**： 不涉及
    /// </summary>

    std::string getDstCityId() const;
    bool dstCityIdIsSet() const;
    void unsetdstCityId();
    void setDstCityId(const std::string& value);

    /// <summary>
    /// **参数解释**： 目的城市名称 **取值范围**： 不涉及
    /// </summary>

    std::string getDstCityName() const;
    bool dstCityNameIsSet() const;
    void unsetdstCityName();
    void setDstCityName(const std::string& value);

    /// <summary>
    /// **参数解释**： 命中时间 **取值范围**： 不涉及
    /// </summary>

    int64_t getHitTime() const;
    bool hitTimeIsSet() const;
    void unsethitTime();
    void setHitTime(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getLogId() const;
    bool logIdIsSet() const;
    void unsetlogId();
    void setLogId(const std::string& value);

    /// <summary>
    /// **参数解释**： 协议 **取值范围**： 不涉及
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则ID **取值范围**： 不涉及
    /// </summary>

    std::string getRuleId() const;
    bool ruleIdIsSet() const;
    void unsetruleId();
    void setRuleId(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则名称 **取值范围**： 不涉及
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getRuleType() const;
    bool ruleTypeIsSet() const;
    void unsetruleType();
    void setRuleType(int32_t value);

    /// <summary>
    /// **参数解释**： 源IP **取值范围**： 不涉及
    /// </summary>

    std::string getSrcIp() const;
    bool srcIpIsSet() const;
    void unsetsrcIp();
    void setSrcIp(const std::string& value);

    /// <summary>
    /// **参数解释**： 源端口 **取值范围**： 不涉及
    /// </summary>

    int32_t getSrcPort() const;
    bool srcPortIsSet() const;
    void unsetsrcPort();
    void setSrcPort(int32_t value);

    /// <summary>
    /// **参数解释**： 源地区ID **取值范围**： 不涉及
    /// </summary>

    std::string getSrcRegionId() const;
    bool srcRegionIdIsSet() const;
    void unsetsrcRegionId();
    void setSrcRegionId(const std::string& value);

    /// <summary>
    /// **参数解释**： 源地区名称 **取值范围**： 不涉及
    /// </summary>

    std::string getSrcRegionName() const;
    bool srcRegionNameIsSet() const;
    void unsetsrcRegionName();
    void setSrcRegionName(const std::string& value);

    /// <summary>
    /// **参数解释**： 源省份ID **取值范围**： 不涉及
    /// </summary>

    std::string getSrcProvinceId() const;
    bool srcProvinceIdIsSet() const;
    void unsetsrcProvinceId();
    void setSrcProvinceId(const std::string& value);

    /// <summary>
    /// **参数解释**： 源省份名称 **取值范围**： 不涉及
    /// </summary>

    std::string getSrcProvinceName() const;
    bool srcProvinceNameIsSet() const;
    void unsetsrcProvinceName();
    void setSrcProvinceName(const std::string& value);

    /// <summary>
    /// **参数解释**： 源城市ID **取值范围**： 不涉及
    /// </summary>

    std::string getSrcCityId() const;
    bool srcCityIdIsSet() const;
    void unsetsrcCityId();
    void setSrcCityId(const std::string& value);

    /// <summary>
    /// **参数解释**： 源城市名称 **取值范围**： 不涉及
    /// </summary>

    std::string getSrcCityName() const;
    bool srcCityNameIsSet() const;
    void unsetsrcCityName();
    void setSrcCityName(const std::string& value);

    /// <summary>
    /// **参数解释**： VGW　ID **取值范围**： 不涉及
    /// </summary>

    std::string getVgwId() const;
    bool vgwIdIsSet() const;
    void unsetvgwId();
    void setVgwId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getQosRuleId() const;
    bool qosRuleIdIsSet() const;
    void unsetqosRuleId();
    void setQosRuleId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getQosRuleName() const;
    bool qosRuleNameIsSet() const;
    void unsetqosRuleName();
    void setQosRuleName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getQosRuleType() const;
    bool qosRuleTypeIsSet() const;
    void unsetqosRuleType();
    void setQosRuleType(int32_t value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::string app_;
    bool appIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string dstHost_;
    bool dstHostIsSet_;
    std::string dstIp_;
    bool dstIpIsSet_;
    int32_t dstPort_;
    bool dstPortIsSet_;
    std::string dstRegionId_;
    bool dstRegionIdIsSet_;
    std::string dstRegionName_;
    bool dstRegionNameIsSet_;
    std::string dstProvinceId_;
    bool dstProvinceIdIsSet_;
    std::string dstProvinceName_;
    bool dstProvinceNameIsSet_;
    std::string dstCityId_;
    bool dstCityIdIsSet_;
    std::string dstCityName_;
    bool dstCityNameIsSet_;
    int64_t hitTime_;
    bool hitTimeIsSet_;
    std::string logId_;
    bool logIdIsSet_;
    std::string protocol_;
    bool protocolIsSet_;
    std::string ruleId_;
    bool ruleIdIsSet_;
    std::string ruleName_;
    bool ruleNameIsSet_;
    int32_t ruleType_;
    bool ruleTypeIsSet_;
    std::string srcIp_;
    bool srcIpIsSet_;
    int32_t srcPort_;
    bool srcPortIsSet_;
    std::string srcRegionId_;
    bool srcRegionIdIsSet_;
    std::string srcRegionName_;
    bool srcRegionNameIsSet_;
    std::string srcProvinceId_;
    bool srcProvinceIdIsSet_;
    std::string srcProvinceName_;
    bool srcProvinceNameIsSet_;
    std::string srcCityId_;
    bool srcCityIdIsSet_;
    std::string srcCityName_;
    bool srcCityNameIsSet_;
    std::string vgwId_;
    bool vgwIdIsSet_;
    std::string qosRuleId_;
    bool qosRuleIdIsSet_;
    std::string qosRuleName_;
    bool qosRuleNameIsSet_;
    int32_t qosRuleType_;
    bool qosRuleTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AccessLogInfo_H_
