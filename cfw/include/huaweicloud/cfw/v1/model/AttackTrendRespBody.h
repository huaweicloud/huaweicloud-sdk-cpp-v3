
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AttackTrendRespBody_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AttackTrendRespBody_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  AttackTrendRespBody
    : public ModelBase
{
public:
    AttackTrendRespBody();
    virtual ~AttackTrendRespBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttackTrendRespBody members

    /// <summary>
    /// **参数解释**： 阻断次数 **取值范围**： 不涉及
    /// </summary>

    int64_t getDenyCount() const;
    bool denyCountIsSet() const;
    void unsetdenyCount();
    void setDenyCount(int64_t value);

    /// <summary>
    /// **参数解释**： 放行次数 **取值范围**： 不涉及
    /// </summary>

    int64_t getPermitCount() const;
    bool permitCountIsSet() const;
    void unsetpermitCount();
    void setPermitCount(int64_t value);

    /// <summary>
    /// **参数解释**： 聚合时间 **取值范围**： 不涉及
    /// </summary>

    int64_t getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(int64_t value);


protected:
    int64_t denyCount_;
    bool denyCountIsSet_;
    int64_t permitCount_;
    bool permitCountIsSet_;
    int64_t time_;
    bool timeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AttackTrendRespBody_H_
