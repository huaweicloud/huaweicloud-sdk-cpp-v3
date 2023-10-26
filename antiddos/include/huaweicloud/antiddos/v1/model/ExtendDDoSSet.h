
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ExtendDDoSSet_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ExtendDDoSSet_H_


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
/// 扩展配置列表
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  ExtendDDoSSet
    : public ModelBase
{
public:
    ExtendDDoSSet();
    virtual ~ExtendDDoSSet();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExtendDDoSSet members

    /// <summary>
    /// 配置分段ID
    /// </summary>

    int64_t getSetID() const;
    bool setIDIsSet() const;
    void unsetsetID();
    void setSetID(int64_t value);

    /// <summary>
    /// 单一源IP新建连接个数
    /// </summary>

    int64_t getNewConnectionLimited() const;
    bool newConnectionLimitedIsSet() const;
    void unsetnewConnectionLimited();
    void setNewConnectionLimited(int64_t value);

    /// <summary>
    /// 单一源IP连接数总个数
    /// </summary>

    int64_t getTotalConnectionLimited() const;
    bool totalConnectionLimitedIsSet() const;
    void unsettotalConnectionLimited();
    void setTotalConnectionLimited(int64_t value);

    /// <summary>
    /// 每秒HTTP请求数（个/s）阈值
    /// </summary>

    int64_t getHttpPacketPerSecond() const;
    bool httpPacketPerSecondIsSet() const;
    void unsethttpPacketPerSecond();
    void setHttpPacketPerSecond(int64_t value);

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
    int64_t setID_;
    bool setIDIsSet_;
    int64_t newConnectionLimited_;
    bool newConnectionLimitedIsSet_;
    int64_t totalConnectionLimited_;
    bool totalConnectionLimitedIsSet_;
    int64_t httpPacketPerSecond_;
    bool httpPacketPerSecondIsSet_;
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

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ExtendDDoSSet_H_
