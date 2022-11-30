
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_RegisterServerMonitorRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_RegisterServerMonitorRequestBody_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  RegisterServerMonitorRequestBody
    : public ModelBase
{
public:
    RegisterServerMonitorRequestBody();
    virtual ~RegisterServerMonitorRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RegisterServerMonitorRequestBody members

    /// <summary>
    /// 注册云服务器监控。
    /// </summary>

    std::string getMonitorMetrics() const;
    bool monitorMetricsIsSet() const;
    void unsetmonitorMetrics();
    void setMonitorMetrics(const std::string& value);


protected:
    std::string monitorMetrics_;
    bool monitorMetricsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_RegisterServerMonitorRequestBody_H_
