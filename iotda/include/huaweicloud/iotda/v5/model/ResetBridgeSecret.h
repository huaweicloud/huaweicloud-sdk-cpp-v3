
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ResetBridgeSecret_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ResetBridgeSecret_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ResetBridgeSecret
    : public ModelBase
{
public:
    ResetBridgeSecret();
    virtual ~ResetBridgeSecret();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResetBridgeSecret members

    /// <summary>
    /// 是否强制断开网桥的连接，当前仅限长连接。
    /// </summary>

    bool isForceDisconnect() const;
    bool forceDisconnectIsSet() const;
    void unsetforceDisconnect();
    void setForceDisconnect(bool value);


protected:
    bool forceDisconnect_;
    bool forceDisconnectIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ResetBridgeSecret_H_
