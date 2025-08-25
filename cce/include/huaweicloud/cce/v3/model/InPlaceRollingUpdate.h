
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_InPlaceRollingUpdate_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_InPlaceRollingUpdate_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 原地升级配置
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  InPlaceRollingUpdate
    : public ModelBase
{
public:
    InPlaceRollingUpdate();
    virtual ~InPlaceRollingUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InPlaceRollingUpdate members

    /// <summary>
    /// 节点升级步长，取值范围为[1, 40]，建议取值20
    /// </summary>

    int32_t getUserDefinedStep() const;
    bool userDefinedStepIsSet() const;
    void unsetuserDefinedStep();
    void setUserDefinedStep(int32_t value);


protected:
    int32_t userDefinedStep_;
    bool userDefinedStepIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_InPlaceRollingUpdate_H_
