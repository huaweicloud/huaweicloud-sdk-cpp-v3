
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_HttpQueryCfwAccessControllerLogsResponseDTO_data_records_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_HttpQueryCfwAccessControllerLogsResponseDTO_data_records_H_


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
class HUAWEICLOUD_CFW_V1_EXPORT  HttpQueryCfwAccessControllerLogsResponseDTO_data_records
    : public ModelBase
{
public:
    HttpQueryCfwAccessControllerLogsResponseDTO_data_records();
    virtual ~HttpQueryCfwAccessControllerLogsResponseDTO_data_records();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HttpQueryCfwAccessControllerLogsResponseDTO_data_records members

    /// <summary>
    /// 动作0：permit,1：deny
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 规则名称
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);

    /// <summary>
    /// 规则ID
    /// </summary>

    std::string getRuleId() const;
    bool ruleIdIsSet() const;
    void unsetruleId();
    void setRuleId(const std::string& value);

    /// <summary>
    /// 命中时间
    /// </summary>

    int32_t getHitTime() const;
    bool hitTimeIsSet() const;
    void unsethitTime();
    void setHitTime(int32_t value);

    /// <summary>
    /// 源区域id
    /// </summary>

    std::string getSrcRegionId() const;
    bool srcRegionIdIsSet() const;
    void unsetsrcRegionId();
    void setSrcRegionId(const std::string& value);

    /// <summary>
    /// 源区域name
    /// </summary>

    std::string getSrcRegionName() const;
    bool srcRegionNameIsSet() const;
    void unsetsrcRegionName();
    void setSrcRegionName(const std::string& value);

    /// <summary>
    /// 目的区域id
    /// </summary>

    std::string getDstRegionId() const;
    bool dstRegionIdIsSet() const;
    void unsetdstRegionId();
    void setDstRegionId(const std::string& value);

    /// <summary>
    /// 目的区域name
    /// </summary>

    std::string getDstRegionName() const;
    bool dstRegionNameIsSet() const;
    void unsetdstRegionName();
    void setDstRegionName(const std::string& value);

    /// <summary>
    /// 文档ID
    /// </summary>

    std::string getLogId() const;
    bool logIdIsSet() const;
    void unsetlogId();
    void setLogId(const std::string& value);

    /// <summary>
    /// 源IP
    /// </summary>

    std::string getSrcIp() const;
    bool srcIpIsSet() const;
    void unsetsrcIp();
    void setSrcIp(const std::string& value);

    /// <summary>
    /// 源端口
    /// </summary>

    std::string getSrcPort() const;
    bool srcPortIsSet() const;
    void unsetsrcPort();
    void setSrcPort(const std::string& value);

    /// <summary>
    /// 目的IP
    /// </summary>

    std::string getDstIp() const;
    bool dstIpIsSet() const;
    void unsetdstIp();
    void setDstIp(const std::string& value);

    /// <summary>
    /// 目的端口
    /// </summary>

    std::string getDstPort() const;
    bool dstPortIsSet() const;
    void unsetdstPort();
    void setDstPort(const std::string& value);

    /// <summary>
    /// 协议类型:TCP为6,UDP为17,ICMP为1,ICMPV6为58,ANY为-1,手动类型不为空，自动类型为空
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);

    /// <summary>
    /// 应用协议
    /// </summary>

    std::string getApp() const;
    bool appIsSet() const;
    void unsetapp();
    void setApp(const std::string& value);

    /// <summary>
    /// 目标主机
    /// </summary>

    std::string getDstHost() const;
    bool dstHostIsSet() const;
    void unsetdstHost();
    void setDstHost(const std::string& value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::string ruleName_;
    bool ruleNameIsSet_;
    std::string ruleId_;
    bool ruleIdIsSet_;
    int32_t hitTime_;
    bool hitTimeIsSet_;
    std::string srcRegionId_;
    bool srcRegionIdIsSet_;
    std::string srcRegionName_;
    bool srcRegionNameIsSet_;
    std::string dstRegionId_;
    bool dstRegionIdIsSet_;
    std::string dstRegionName_;
    bool dstRegionNameIsSet_;
    std::string logId_;
    bool logIdIsSet_;
    std::string srcIp_;
    bool srcIpIsSet_;
    std::string srcPort_;
    bool srcPortIsSet_;
    std::string dstIp_;
    bool dstIpIsSet_;
    std::string dstPort_;
    bool dstPortIsSet_;
    std::string protocol_;
    bool protocolIsSet_;
    std::string app_;
    bool appIsSet_;
    std::string dstHost_;
    bool dstHostIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_HttpQueryCfwAccessControllerLogsResponseDTO_data_records_H_
