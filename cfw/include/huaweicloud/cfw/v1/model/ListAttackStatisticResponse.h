
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListAttackStatisticResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListAttackStatisticResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/AttackStatisticRespBody.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ListAttackStatisticResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAttackStatisticResponse();
    virtual ~ListAttackStatisticResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAttackStatisticResponse members

    /// <summary>
    /// **参数解释**： 攻击日志统计 **取值范围**： 不涉及
    /// </summary>

    std::vector<AttackStatisticRespBody>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<AttackStatisticRespBody>& value);


protected:
    std::vector<AttackStatisticRespBody> data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListAttackStatisticResponse_H_
