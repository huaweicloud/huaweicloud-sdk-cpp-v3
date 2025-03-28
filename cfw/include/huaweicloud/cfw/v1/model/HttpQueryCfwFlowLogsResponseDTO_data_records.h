
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_HttpQueryCfwFlowLogsResponseDTO_data_records_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_HttpQueryCfwFlowLogsResponseDTO_data_records_H_


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
class HUAWEICLOUD_CFW_V1_EXPORT  HttpQueryCfwFlowLogsResponseDTO_data_records
    : public ModelBase
{
public:
    HttpQueryCfwFlowLogsResponseDTO_data_records();
    virtual ~HttpQueryCfwFlowLogsResponseDTO_data_records();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HttpQueryCfwFlowLogsResponseDTO_data_records members

    /// <summary>
    /// 字节
    /// </summary>

    double getBytes() const;
    bool bytesIsSet() const;
    void unsetbytes();
    void setBytes(double value);

    /// <summary>
    /// 方向，有内到外（in2out）和外到内（out2in）两种
    /// </summary>

    std::string getDirection() const;
    bool directionIsSet() const;
    void unsetdirection();
    void setDirection(const std::string& value);

    /// <summary>
    /// 字节包数
    /// </summary>

    int32_t getPackets() const;
    bool packetsIsSet() const;
    void unsetpackets();
    void setPackets(int32_t value);

    /// <summary>
    /// 开始时间，以毫秒为单位的时间戳，如1718936272648
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 结束时间，以毫秒为单位的时间戳，如1718936272648
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

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
    /// 规则应用类型包括：“HTTP”，\&quot;HTTPS\&quot;，\&quot;TLS1\&quot;，“DNS”，“SSH”，“MYSQL”，“SMTP”，“RDP”，“RDPS”，“VNC”，“POP3”，“IMAP4”，“SMTPS”，“POP3S”，“FTPS”，“ANY”,“BGP”等。
    /// </summary>

    std::string getApp() const;
    bool appIsSet() const;
    void unsetapp();
    void setApp(const std::string& value);

    /// <summary>
    /// 目的端口
    /// </summary>

    int32_t getDstPort() const;
    bool dstPortIsSet() const;
    void unsetdstPort();
    void setDstPort(int32_t value);

    /// <summary>
    /// 协议类型:TCP为6,UDP为17,ICMP为1,ICMPV6为58,ANY为-1,手动类型不为空，自动类型为空
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);

    /// <summary>
    /// 目标主机
    /// </summary>

    std::string getDstHost() const;
    bool dstHostIsSet() const;
    void unsetdstHost();
    void setDstHost(const std::string& value);

    /// <summary>
    /// 目的地域id
    /// </summary>

    std::string getDstRegionId() const;
    bool dstRegionIdIsSet() const;
    void unsetdstRegionId();
    void setDstRegionId(const std::string& value);

    /// <summary>
    /// 目的地域名称
    /// </summary>

    std::string getDstRegionName() const;
    bool dstRegionNameIsSet() const;
    void unsetdstRegionName();
    void setDstRegionName(const std::string& value);

    /// <summary>
    /// 源地域id
    /// </summary>

    std::string getSrcRegionId() const;
    bool srcRegionIdIsSet() const;
    void unsetsrcRegionId();
    void setSrcRegionId(const std::string& value);

    /// <summary>
    /// 源地域名称
    /// </summary>

    std::string getSrcRegionName() const;
    bool srcRegionNameIsSet() const;
    void unsetsrcRegionName();
    void setSrcRegionName(const std::string& value);

    /// <summary>
    /// 目的省份id
    /// </summary>

    std::string getDstProvinceId() const;
    bool dstProvinceIdIsSet() const;
    void unsetdstProvinceId();
    void setDstProvinceId(const std::string& value);

    /// <summary>
    /// 目的省份名称
    /// </summary>

    std::string getDstProvinceName() const;
    bool dstProvinceNameIsSet() const;
    void unsetdstProvinceName();
    void setDstProvinceName(const std::string& value);

    /// <summary>
    /// 目的城市id
    /// </summary>

    std::string getDstCityId() const;
    bool dstCityIdIsSet() const;
    void unsetdstCityId();
    void setDstCityId(const std::string& value);

    /// <summary>
    /// 目的城市名称
    /// </summary>

    std::string getDstCityName() const;
    bool dstCityNameIsSet() const;
    void unsetdstCityName();
    void setDstCityName(const std::string& value);

    /// <summary>
    /// 源省份id
    /// </summary>

    std::string getSrcProvinceId() const;
    bool srcProvinceIdIsSet() const;
    void unsetsrcProvinceId();
    void setSrcProvinceId(const std::string& value);

    /// <summary>
    /// 源省份名称
    /// </summary>

    std::string getSrcProvinceName() const;
    bool srcProvinceNameIsSet() const;
    void unsetsrcProvinceName();
    void setSrcProvinceName(const std::string& value);

    /// <summary>
    /// 源城市id
    /// </summary>

    std::string getSrcCityId() const;
    bool srcCityIdIsSet() const;
    void unsetsrcCityId();
    void setSrcCityId(const std::string& value);

    /// <summary>
    /// 源城市名称
    /// </summary>

    std::string getSrcCityName() const;
    bool srcCityNameIsSet() const;
    void unsetsrcCityName();
    void setSrcCityName(const std::string& value);


protected:
    double bytes_;
    bool bytesIsSet_;
    std::string direction_;
    bool directionIsSet_;
    int32_t packets_;
    bool packetsIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::string logId_;
    bool logIdIsSet_;
    std::string srcIp_;
    bool srcIpIsSet_;
    int32_t srcPort_;
    bool srcPortIsSet_;
    std::string dstIp_;
    bool dstIpIsSet_;
    std::string app_;
    bool appIsSet_;
    int32_t dstPort_;
    bool dstPortIsSet_;
    std::string protocol_;
    bool protocolIsSet_;
    std::string dstHost_;
    bool dstHostIsSet_;
    std::string dstRegionId_;
    bool dstRegionIdIsSet_;
    std::string dstRegionName_;
    bool dstRegionNameIsSet_;
    std::string srcRegionId_;
    bool srcRegionIdIsSet_;
    std::string srcRegionName_;
    bool srcRegionNameIsSet_;
    std::string dstProvinceId_;
    bool dstProvinceIdIsSet_;
    std::string dstProvinceName_;
    bool dstProvinceNameIsSet_;
    std::string dstCityId_;
    bool dstCityIdIsSet_;
    std::string dstCityName_;
    bool dstCityNameIsSet_;
    std::string srcProvinceId_;
    bool srcProvinceIdIsSet_;
    std::string srcProvinceName_;
    bool srcProvinceNameIsSet_;
    std::string srcCityId_;
    bool srcCityIdIsSet_;
    std::string srcCityName_;
    bool srcCityNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_HttpQueryCfwFlowLogsResponseDTO_data_records_H_
