
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListAttackLogsRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListAttackLogsRequest_H_


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
class HUAWEICLOUD_CFW_V1_EXPORT  ListAttackLogsRequest
    : public ModelBase
{
public:
    ListAttackLogsRequest();
    virtual ~ListAttackLogsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAttackLogsRequest members

    /// <summary>
    /// 开始时间
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 结束时间
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 源IP
    /// </summary>

    std::string getSrcIp() const;
    bool srcIpIsSet() const;
    void unsetsrcIp();
    void setSrcIp(const std::string& value);

    /// <summary>
    /// 源端口号
    /// </summary>

    int32_t getSrcPort() const;
    bool srcPortIsSet() const;
    void unsetsrcPort();
    void setSrcPort(int32_t value);

    /// <summary>
    /// 目的IP
    /// </summary>

    std::string getDstIp() const;
    bool dstIpIsSet() const;
    void unsetdstIp();
    void setDstIp(const std::string& value);

    /// <summary>
    /// 目的端口号
    /// </summary>

    int32_t getDstPort() const;
    bool dstPortIsSet() const;
    void unsetdstPort();
    void setDstPort(int32_t value);

    /// <summary>
    /// 协议类型:TCP为6, UDP为17,ICMP为1,ICMPV6为58,ANY为-1,手动类型不为空，自动类型为空
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
    /// 日志ID，当是第一页时为空，不是第一页时不为空
    /// </summary>

    std::string getLogId() const;
    bool logIdIsSet() const;
    void unsetlogId();
    void setLogId(const std::string& value);

    /// <summary>
    /// 下个日期，当是第一页时为空，不是第一页时不为空
    /// </summary>

    int64_t getNextDate() const;
    bool nextDateIsSet() const;
    void unsetnextDate();
    void setNextDate(int64_t value);

    /// <summary>
    /// 偏移量：指定返回记录的开始位置，必须为数字，取值范围为大于或等于0，默认0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页显示个数，范围为1-1024
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 防火墙实例id，创建云防火墙后用于标志防火墙由系统自动生成的标志id，可通过调用查询防火墙实例接口获得。具体可参考APIExlorer和帮助中心FAQ。
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);

    /// <summary>
    /// 动作0：permit,1：deny
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 方向0：外到内1：内到外
    /// </summary>

    std::string getDirection() const;
    bool directionIsSet() const;
    void unsetdirection();
    void setDirection(const std::string& value);

    /// <summary>
    /// 入侵事件类型
    /// </summary>

    std::string getAttackType() const;
    bool attackTypeIsSet() const;
    void unsetattackType();
    void setAttackType(const std::string& value);

    /// <summary>
    /// 入侵事件规则
    /// </summary>

    std::string getAttackRule() const;
    bool attackRuleIsSet() const;
    void unsetattackRule();
    void setAttackRule(const std::string& value);

    /// <summary>
    /// 威胁等级
    /// </summary>

    std::string getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(const std::string& value);

    /// <summary>
    /// 判断来源
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);

    /// <summary>
    /// 企业项目id，用户支持企业项目后，由企业项目生成的id。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 目标主机
    /// </summary>

    std::string getDstHost() const;
    bool dstHostIsSet() const;
    void unsetdstHost();
    void setDstHost(const std::string& value);

    /// <summary>
    /// log_type
    /// </summary>

    std::string getLogType() const;
    bool logTypeIsSet() const;
    void unsetlogType();
    void setLogType(const std::string& value);


protected:
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::string srcIp_;
    bool srcIpIsSet_;
    int32_t srcPort_;
    bool srcPortIsSet_;
    std::string dstIp_;
    bool dstIpIsSet_;
    int32_t dstPort_;
    bool dstPortIsSet_;
    std::string protocol_;
    bool protocolIsSet_;
    std::string app_;
    bool appIsSet_;
    std::string logId_;
    bool logIdIsSet_;
    int64_t nextDate_;
    bool nextDateIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::string direction_;
    bool directionIsSet_;
    std::string attackType_;
    bool attackTypeIsSet_;
    std::string attackRule_;
    bool attackRuleIsSet_;
    std::string level_;
    bool levelIsSet_;
    std::string source_;
    bool sourceIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string dstHost_;
    bool dstHostIsSet_;
    std::string logType_;
    bool logTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAttackLogsRequest& dereference_from_shared_ptr(std::shared_ptr<ListAttackLogsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListAttackLogsRequest_H_
