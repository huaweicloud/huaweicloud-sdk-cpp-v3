
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerChargeModeRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerChargeModeRequestBody_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ecs/v2/model/ChangeServerChargeModePrepaidOption.h>
#include <vector>

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
class HUAWEICLOUD_ECS_V2_EXPORT  ChangeServerChargeModeRequestBody
    : public ModelBase
{
public:
    ChangeServerChargeModeRequestBody();
    virtual ~ChangeServerChargeModeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ChangeServerChargeModeRequestBody members

    /// <summary>
    /// 云服务器ID列表
    /// </summary>

    std::vector<std::string>& getServerIds();
    bool serverIdsIsSet() const;
    void unsetserverIds();
    void setServerIds(const std::vector<std::string>& value);

    /// <summary>
    /// 更换后的计费模式：prePaid包周期计费模式
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ChangeServerChargeModePrepaidOption getPrepaidOptions() const;
    bool prepaidOptionsIsSet() const;
    void unsetprepaidOptions();
    void setPrepaidOptions(const ChangeServerChargeModePrepaidOption& value);

    /// <summary>
    /// 是否预先校验此次请求。 true: 发送检查请求，不触发真正的计费转换操作 false: 发送正常请求，触发计费转换操作。 默认值为false
    /// </summary>

    bool isDryRun() const;
    bool dryRunIsSet() const;
    void unsetdryRun();
    void setDryRun(bool value);


protected:
    std::vector<std::string> serverIds_;
    bool serverIdsIsSet_;
    std::string chargeMode_;
    bool chargeModeIsSet_;
    ChangeServerChargeModePrepaidOption prepaidOptions_;
    bool prepaidOptionsIsSet_;
    bool dryRun_;
    bool dryRunIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerChargeModeRequestBody_H_
