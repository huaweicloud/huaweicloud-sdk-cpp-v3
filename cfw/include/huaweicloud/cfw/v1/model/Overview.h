
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_Overview_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_Overview_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/TrendVO.h>
#include <huaweicloud/cfw/v1/model/AccessPolicy.h>
#include <huaweicloud/cfw/v1/model/AttackEvent.h>
#include <huaweicloud/cfw/v1/model/ChangedVO.h>

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
class HUAWEICLOUD_CFW_V1_EXPORT  Overview
    : public ModelBase
{
public:
    Overview();
    virtual ~Overview();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Overview members

    /// <summary>
    /// 
    /// </summary>

    AccessPolicy getAccessPolicies() const;
    bool accessPoliciesIsSet() const;
    void unsetaccessPolicies();
    void setAccessPolicies(const AccessPolicy& value);

    /// <summary>
    /// 
    /// </summary>

    ChangedVO getAssets() const;
    bool assetsIsSet() const;
    void unsetassets();
    void setAssets(const ChangedVO& value);

    /// <summary>
    /// 
    /// </summary>

    AttackEvent getAttackEvent() const;
    bool attackEventIsSet() const;
    void unsetattackEvent();
    void setAttackEvent(const AttackEvent& value);

    /// <summary>
    /// 
    /// </summary>

    TrendVO getTrafficPeak() const;
    bool trafficPeakIsSet() const;
    void unsettrafficPeak();
    void setTrafficPeak(const TrendVO& value);


protected:
    AccessPolicy accessPolicies_;
    bool accessPoliciesIsSet_;
    ChangedVO assets_;
    bool assetsIsSet_;
    AttackEvent attackEvent_;
    bool attackEventIsSet_;
    TrendVO trafficPeak_;
    bool trafficPeakIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_Overview_H_
