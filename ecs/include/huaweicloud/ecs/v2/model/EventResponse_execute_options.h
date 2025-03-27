
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_EventResponse_execute_options_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_EventResponse_execute_options_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  EventResponse_execute_options
    : public ModelBase
{
public:
    EventResponse_execute_options();
    virtual ~EventResponse_execute_options();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EventResponse_execute_options members

    /// <summary>
    /// 本地盘设备名
    /// </summary>

    std::string getDevice() const;
    bool deviceIsSet() const;
    void unsetdevice();
    void setDevice(const std::string& value);

    /// <summary>
    /// 本地盘挂载唯一标识
    /// </summary>

    std::string getWwn() const;
    bool wwnIsSet() const;
    void unsetwwn();
    void setWwn(const std::string& value);

    /// <summary>
    /// 本地盘序列号
    /// </summary>

    std::string getSerialNumber() const;
    bool serialNumberIsSet() const;
    void unsetserialNumber();
    void setSerialNumber(const std::string& value);

    /// <summary>
    /// flavorID
    /// </summary>

    std::string getResizeTargetFlavorId() const;
    bool resizeTargetFlavorIdIsSet() const;
    void unsetresizeTargetFlavorId();
    void setResizeTargetFlavorId(const std::string& value);

    /// <summary>
    /// 实例迁移策略
    /// </summary>

    std::string getMigratePolicy() const;
    bool migratePolicyIsSet() const;
    void unsetmigratePolicy();
    void setMigratePolicy(const std::string& value);

    /// <summary>
    /// 执行器
    /// </summary>

    std::string getExecutor() const;
    bool executorIsSet() const;
    void unsetexecutor();
    void setExecutor(const std::string& value);


protected:
    std::string device_;
    bool deviceIsSet_;
    std::string wwn_;
    bool wwnIsSet_;
    std::string serialNumber_;
    bool serialNumberIsSet_;
    std::string resizeTargetFlavorId_;
    bool resizeTargetFlavorIdIsSet_;
    std::string migratePolicy_;
    bool migratePolicyIsSet_;
    std::string executor_;
    bool executorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_EventResponse_execute_options_H_
