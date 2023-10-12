
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_SyncParam_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_SyncParam_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  SyncParam
    : public ModelBase
{
public:
    SyncParam();
    virtual ~SyncParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SyncParam members

    /// <summary>
    /// 本次同步是否自动触发
    /// </summary>

    bool isAutoTrigger() const;
    bool autoTriggerIsSet() const;
    void unsetautoTrigger();
    void setAutoTrigger(bool value);

    /// <summary>
    /// 混合云vault id
    /// </summary>

    std::string getVaultId() const;
    bool vaultIdIsSet() const;
    void unsetvaultId();
    void setVaultId(const std::string& value);


protected:
    bool autoTrigger_;
    bool autoTriggerIsSet_;
    std::string vaultId_;
    bool vaultIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_SyncParam_H_
