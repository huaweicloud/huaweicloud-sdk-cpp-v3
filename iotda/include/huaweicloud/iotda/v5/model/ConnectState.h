
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ConnectState_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ConnectState_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 连接端状态
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ConnectState
    : public ModelBase
{
public:
    ConnectState();
    virtual ~ConnectState();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConnectState members

    /// <summary>
    /// 隧道最近一次状态更新时间。格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;，如20151212T121212Z。
    /// </summary>

    std::string getLastUpdateTime() const;
    bool lastUpdateTimeIsSet() const;
    void unsetlastUpdateTime();
    void setLastUpdateTime(const std::string& value);

    /// <summary>
    /// 客户端连接状态 CONNECTED | DISCONNECTED
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string lastUpdateTime_;
    bool lastUpdateTimeIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ConnectState_H_
