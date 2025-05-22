
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdatePolicyRequestBody_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdatePolicyRequestBody_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新策略的请求体
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  UpdatePolicyRequestBody
    : public ModelBase
{
public:
    UpdatePolicyRequestBody();
    virtual ~UpdatePolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdatePolicyRequestBody members

    /// <summary>
    /// 策略名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 清洗阈值
    /// </summary>

    int32_t getThreshold() const;
    bool thresholdIsSet() const;
    void unsetthreshold();
    void setThreshold(int32_t value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// udp协议设置。block：封禁，unblock：不封禁，limiting：限速
    /// </summary>

    std::string getUdp() const;
    bool udpIsSet() const;
    void unsetudp();
    void setUdp(const std::string& value);

    /// <summary>
    /// tcp协议设置。block：封禁，unblock：不封禁，limiting：限速
    /// </summary>

    std::string getTcp() const;
    bool tcpIsSet() const;
    void unsettcp();
    void setTcp(const std::string& value);

    /// <summary>
    /// icmp协议设置。block：封禁，unblock：不封禁，limiting：限速
    /// </summary>

    std::string getIcmp() const;
    bool icmpIsSet() const;
    void unseticmp();
    void setIcmp(const std::string& value);

    /// <summary>
    /// other协议设置。block：封禁，unblock：不封禁，limiting：限速
    /// </summary>

    std::string getOther() const;
    bool otherIsSet() const;
    void unsetother();
    void setOther(const std::string& value);

    /// <summary>
    /// icmp自定义限速值，icmp取值limiting情况下，如果该值为空表示不限速
    /// </summary>

    int64_t getIcmpTrafficLimiting() const;
    bool icmpTrafficLimitingIsSet() const;
    void unseticmpTrafficLimiting();
    void setIcmpTrafficLimiting(int64_t value);

    /// <summary>
    /// udp自定义限速值，udp取值limiting情况下，如果该值为空表示不限速
    /// </summary>

    int64_t getUdpTrafficLimiting() const;
    bool udpTrafficLimitingIsSet() const;
    void unsetudpTrafficLimiting();
    void setUdpTrafficLimiting(int64_t value);

    /// <summary>
    /// udp分片自定义限速值，udp取值limiting情况下，如果该值为空表示不限速
    /// </summary>

    int64_t getUdpFragmentRateLimiting() const;
    bool udpFragmentRateLimitingIsSet() const;
    void unsetudpFragmentRateLimiting();
    void setUdpFragmentRateLimiting(int64_t value);

    /// <summary>
    /// other自定义限速值，other取值limiting情况下，如果该值为空表示不限速
    /// </summary>

    int64_t getOtherTrafficLimiting() const;
    bool otherTrafficLimitingIsSet() const;
    void unsetotherTrafficLimiting();
    void setOtherTrafficLimiting(int64_t value);

    /// <summary>
    /// tcp自定义限速值，tcp取值limiting情况下，如果该值为空表示不限速
    /// </summary>

    int64_t getTcpTrafficLimiting() const;
    bool tcpTrafficLimitingIsSet() const;
    void unsettcpTrafficLimiting();
    void setTcpTrafficLimiting(int64_t value);

    /// <summary>
    /// tcp分片自定义限速值，tcp取值limiting情况下，如果该值为空表示不限速
    /// </summary>

    int64_t getTcpFragmentRateLimiting() const;
    bool tcpFragmentRateLimitingIsSet() const;
    void unsettcpFragmentRateLimiting();
    void setTcpFragmentRateLimiting(int64_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    int32_t threshold_;
    bool thresholdIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string udp_;
    bool udpIsSet_;
    std::string tcp_;
    bool tcpIsSet_;
    std::string icmp_;
    bool icmpIsSet_;
    std::string other_;
    bool otherIsSet_;
    int64_t icmpTrafficLimiting_;
    bool icmpTrafficLimitingIsSet_;
    int64_t udpTrafficLimiting_;
    bool udpTrafficLimitingIsSet_;
    int64_t udpFragmentRateLimiting_;
    bool udpFragmentRateLimitingIsSet_;
    int64_t otherTrafficLimiting_;
    bool otherTrafficLimitingIsSet_;
    int64_t tcpTrafficLimiting_;
    bool tcpTrafficLimitingIsSet_;
    int64_t tcpFragmentRateLimiting_;
    bool tcpFragmentRateLimitingIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdatePolicyRequestBody_H_
