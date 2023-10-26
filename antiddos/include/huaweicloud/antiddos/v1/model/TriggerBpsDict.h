
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_TriggerBpsDict_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_TriggerBpsDict_H_


#include <huaweicloud/antiddos/v1/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 流量限制列表
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  TriggerBpsDict
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
    /// 流量分段ID
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

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_TriggerBpsDict_H_
