
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateSecretStageRequestBody_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateSecretStageRequestBody_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CSMS_V1_EXPORT  UpdateSecretStageRequestBody
    : public ModelBase
{
public:
    UpdateSecretStageRequestBody();
    virtual ~UpdateSecretStageRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateSecretStageRequestBody members

    /// <summary>
    /// 凭据的版本号标识符。 
    /// </summary>

    std::string getVersionId() const;
    bool versionIdIsSet() const;
    void unsetversionId();
    void setVersionId(const std::string& value);


protected:
    std::string versionId_;
    bool versionIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateSecretStageRequestBody_H_
