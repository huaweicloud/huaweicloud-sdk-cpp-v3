
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateSecretsConfigRequestBody_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateSecretsConfigRequestBody_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  UpdateSecretsConfigRequestBody
    : public ModelBase
{
public:
    UpdateSecretsConfigRequestBody();
    virtual ~UpdateSecretsConfigRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSecretsConfigRequestBody members

    /// <summary>
    /// 凭据强度检测配置是否打开。
    /// </summary>

    bool isCheckingSecretStrength() const;
    bool checkingSecretStrengthIsSet() const;
    void unsetcheckingSecretStrength();
    void setCheckingSecretStrength(bool value);


protected:
    bool checkingSecretStrength_;
    bool checkingSecretStrengthIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateSecretsConfigRequestBody_H_
