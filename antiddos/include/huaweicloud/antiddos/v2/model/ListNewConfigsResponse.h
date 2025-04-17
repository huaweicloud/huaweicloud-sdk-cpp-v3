
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V2_MODEL_ListNewConfigsResponse_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V2_MODEL_ListNewConfigsResponse_H_


#include <huaweicloud/antiddos/v2/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/antiddos/v2/model/TriggerQpsDict.h>
#include <huaweicloud/antiddos/v2/model/CleanLimitDict.h>
#include <huaweicloud/antiddos/v2/model/ExtendDDoSSet.h>
#include <huaweicloud/antiddos/v2/model/TriggerBpsDict.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V2_EXPORT  ListNewConfigsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListNewConfigsResponse();
    virtual ~ListNewConfigsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListNewConfigsResponse members

    /// <summary>
    /// 流量限制列表
    /// </summary>

    std::vector<TriggerBpsDict>& getTrafficLimitedList();
    bool trafficLimitedListIsSet() const;
    void unsettrafficLimitedList();
    void setTrafficLimitedList(const std::vector<TriggerBpsDict>& value);

    /// <summary>
    /// HTTP限制列表
    /// </summary>

    std::vector<TriggerQpsDict>& getHttpLimitedList();
    bool httpLimitedListIsSet() const;
    void unsethttpLimitedList();
    void setHttpLimitedList(const std::vector<TriggerQpsDict>& value);

    /// <summary>
    /// 连接数限制列表
    /// </summary>

    std::vector<CleanLimitDict>& getConnectionLimitedList();
    bool connectionLimitedListIsSet() const;
    void unsetconnectionLimitedList();
    void setConnectionLimitedList(const std::vector<CleanLimitDict>& value);

    /// <summary>
    /// 扩展配置列表
    /// </summary>

    std::vector<ExtendDDoSSet>& getExtendDdosConfig();
    bool extendDdosConfigIsSet() const;
    void unsetextendDdosConfig();
    void setExtendDdosConfig(const std::vector<ExtendDDoSSet>& value);


protected:
    std::vector<TriggerBpsDict> trafficLimitedList_;
    bool trafficLimitedListIsSet_;
    std::vector<TriggerQpsDict> httpLimitedList_;
    bool httpLimitedListIsSet_;
    std::vector<CleanLimitDict> connectionLimitedList_;
    bool connectionLimitedListIsSet_;
    std::vector<ExtendDDoSSet> extendDdosConfig_;
    bool extendDdosConfigIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V2_MODEL_ListNewConfigsResponse_H_
