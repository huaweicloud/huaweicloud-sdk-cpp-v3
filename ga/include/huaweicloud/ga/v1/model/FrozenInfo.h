
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_FrozenInfo_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_FrozenInfo_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 云服务或资源实例冻结信息。
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  FrozenInfo
    : public ModelBase
{
public:
    FrozenInfo();
    virtual ~FrozenInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FrozenInfo members

    /// <summary>
    /// 云服务或资源实例状态，取值： - 0：解冻/正常（云服务恢复正常）。 - 1：冻结（资源和数据会保留，但租户无法再正常使用云服务）。 - 2：删除/终止（资源和数据将清除）。
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 在冻结/解冻操作下，取值： - 1（默认值）：冻结可释放。 - 2：冻结不可释放。 - 3：冻结后不可续费。
    /// </summary>

    int32_t getEffect() const;
    bool effectIsSet() const;
    void unseteffect();
    void setEffect(int32_t value);

    /// <summary>
    /// 更新云服务状态的业务场景列表，取值： - ARREAR（默认值）：欠费场景。为正常的运营业务场景，包括包周期资源到期、按需资源扣费失败。 - POLICE：公安冻结场景。 - ILLEGAL：违规冻结场景。 - VERIFY：客户未实名认证冻结场景。 - PARTNER：合作伙伴冻结（合作伙伴冻结子客户资源）。
    /// </summary>

    std::vector<std::string>& getScene();
    bool sceneIsSet() const;
    void unsetscene();
    void setScene(const std::vector<std::string>& value);


protected:
    int32_t status_;
    bool statusIsSet_;
    int32_t effect_;
    bool effectIsSet_;
    std::vector<std::string> scene_;
    bool sceneIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_FrozenInfo_H_
