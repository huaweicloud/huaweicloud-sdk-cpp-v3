
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_UpgradeInstanceSpecV2RequestBody_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_UpgradeInstanceSpecV2RequestBody_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/aad/v2/model/UpgradeInstanceData.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  UpgradeInstanceSpecV2RequestBody
    : public ModelBase
{
public:
    UpgradeInstanceSpecV2RequestBody();
    virtual ~UpgradeInstanceSpecV2RequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeInstanceSpecV2RequestBody members

    /// <summary>
    /// 实例id
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpgradeInstanceData getUpgradeData() const;
    bool upgradeDataIsSet() const;
    void unsetupgradeData();
    void setUpgradeData(const UpgradeInstanceData& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    UpgradeInstanceData upgradeData_;
    bool upgradeDataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_UpgradeInstanceSpecV2RequestBody_H_
