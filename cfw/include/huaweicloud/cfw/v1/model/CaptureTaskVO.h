
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_CaptureTaskVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_CaptureTaskVO_H_


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
class HUAWEICLOUD_CFW_V1_EXPORT  CaptureTaskVO
    : public ModelBase
{
public:
    CaptureTaskVO();
    virtual ~CaptureTaskVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CaptureTaskVO members

    /// <summary>
    /// 抓包大小
    /// </summary>

    std::string getCaptureSize() const;
    bool captureSizeIsSet() const;
    void unsetcaptureSize();
    void setCaptureSize(const std::string& value);

    /// <summary>
    /// 抓包创建时间
    /// </summary>

    std::string getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(const std::string& value);

    /// <summary>
    /// 目的地址
    /// </summary>

    std::string getDestAddress() const;
    bool destAddressIsSet() const;
    void unsetdestAddress();
    void setDestAddress(const std::string& value);

    /// <summary>
    /// 目的地址类型0 ipv4,1 ipv6
    /// </summary>

    int32_t getDestAddressType() const;
    bool destAddressTypeIsSet() const;
    void unsetdestAddressType();
    void setDestAddressType(int32_t value);

    /// <summary>
    /// 目的端口
    /// </summary>

    std::string getDestPort() const;
    bool destPortIsSet() const;
    void unsetdestPort();
    void setDestPort(const std::string& value);

    /// <summary>
    /// 抓包时长
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);

    /// <summary>
    /// 是否被删除，0否 1是
    /// </summary>

    int32_t getIsDeleted() const;
    bool isDeletedIsSet() const;
    void unsetisDeleted();
    void setIsDeleted(int32_t value);

    /// <summary>
    /// 最大抓包数
    /// </summary>

    int32_t getMaxPackets() const;
    bool maxPacketsIsSet() const;
    void unsetmaxPackets();
    void setMaxPackets(int32_t value);

    /// <summary>
    /// 修改日期
    /// </summary>

    std::string getModifiedDate() const;
    bool modifiedDateIsSet() const;
    void unsetmodifiedDate();
    void setModifiedDate(const std::string& value);

    /// <summary>
    /// 抓包任务名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 协议类型:TCP为6，UDP为17，ICMP为1，ICMPV6为58，ANY为-1，手动类型不为空，自动类型为空
    /// </summary>

    int32_t getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(int32_t value);

    /// <summary>
    /// 剩余保留天数
    /// </summary>

    int32_t getRemainingDays() const;
    bool remainingDaysIsSet() const;
    void unsetremainingDays();
    void setRemainingDays(int32_t value);

    /// <summary>
    /// 源地址
    /// </summary>

    std::string getSourceAddress() const;
    bool sourceAddressIsSet() const;
    void unsetsourceAddress();
    void setSourceAddress(const std::string& value);

    /// <summary>
    /// 源地址类型0 ipv4,1 ipv6
    /// </summary>

    int32_t getSourceAddressType() const;
    bool sourceAddressTypeIsSet() const;
    void unsetsourceAddressType();
    void setSourceAddressType(int32_t value);

    /// <summary>
    /// 源端口
    /// </summary>

    std::string getSourcePort() const;
    bool sourcePortIsSet() const;
    void unsetsourcePort();
    void setSourcePort(const std::string& value);

    /// <summary>
    /// 抓包任务状态
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 抓包任务id
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);


protected:
    std::string captureSize_;
    bool captureSizeIsSet_;
    std::string createdDate_;
    bool createdDateIsSet_;
    std::string destAddress_;
    bool destAddressIsSet_;
    int32_t destAddressType_;
    bool destAddressTypeIsSet_;
    std::string destPort_;
    bool destPortIsSet_;
    int32_t duration_;
    bool durationIsSet_;
    int32_t isDeleted_;
    bool isDeletedIsSet_;
    int32_t maxPackets_;
    bool maxPacketsIsSet_;
    std::string modifiedDate_;
    bool modifiedDateIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t protocol_;
    bool protocolIsSet_;
    int32_t remainingDays_;
    bool remainingDaysIsSet_;
    std::string sourceAddress_;
    bool sourceAddressIsSet_;
    int32_t sourceAddressType_;
    bool sourceAddressTypeIsSet_;
    std::string sourcePort_;
    bool sourcePortIsSet_;
    int32_t status_;
    bool statusIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_CaptureTaskVO_H_
