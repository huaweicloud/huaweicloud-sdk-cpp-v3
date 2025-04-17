
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V2_MODEL_TriggerBpsDict_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V2_MODEL_TriggerBpsDict_H_


#include <huaweicloud/antiddos/v2/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 流量限制列表
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V2_EXPORT  TriggerBpsDict
    : public ModelBase
{
public:
    TriggerBpsDict();
    virtual ~TriggerBpsDict();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TriggerBpsDict members

    /// <summary>
    /// 流量分段ID，取值范围：1：10M;2：30M;3：50M;4：70M;5：100M;6：150M;7：200M;8：250M;9：300M;10：500M;11：800M;88：1000M;99：默认防护。
    /// </summary>

    int64_t getTrafficPosId() const;
    bool trafficPosIdIsSet() const;
    void unsettrafficPosId();
    void setTrafficPosId(int64_t value);

    /// <summary>
    /// 每秒流量（Mbit/s）阈值
    /// </summary>

    int64_t getTrafficPerSecond() const;
    bool trafficPerSecondIsSet() const;
    void unsettrafficPerSecond();
    void setTrafficPerSecond(int64_t value);

    /// <summary>
    /// 每秒报文数（个/s）阈值
    /// </summary>

    int64_t getPacketPerSecond() const;
    bool packetPerSecondIsSet() const;
    void unsetpacketPerSecond();
    void setPacketPerSecond(int64_t value);


protected:
    int64_t trafficPosId_;
    bool trafficPosIdIsSet_;
    int64_t trafficPerSecond_;
    bool trafficPerSecondIsSet_;
    int64_t packetPerSecond_;
    bool packetPerSecondIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V2_MODEL_TriggerBpsDict_H_
