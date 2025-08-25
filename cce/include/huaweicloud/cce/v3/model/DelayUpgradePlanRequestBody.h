
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_DelayUpgradePlanRequestBody_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_DelayUpgradePlanRequestBody_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  DelayUpgradePlanRequestBody
    : public ModelBase
{
public:
    DelayUpgradePlanRequestBody();
    virtual ~DelayUpgradePlanRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DelayUpgradePlanRequestBody members

    /// <summary>
    /// 新的自动升级计划启动时间，必须早于notBeforeDeadline
    /// </summary>

    utility::datetime getNotBefore() const;
    bool notBeforeIsSet() const;
    void unsetnotBefore();
    void setNotBefore(const utility::datetime& value);


protected:
    utility::datetime notBefore_;
    bool notBeforeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_DelayUpgradePlanRequestBody_H_
