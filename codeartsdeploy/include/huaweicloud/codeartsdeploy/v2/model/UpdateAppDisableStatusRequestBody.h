
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_UpdateAppDisableStatusRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_UpdateAppDisableStatusRequestBody_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 禁用/取消禁用应用请求体
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  UpdateAppDisableStatusRequestBody
    : public ModelBase
{
public:
    UpdateAppDisableStatusRequestBody();
    virtual ~UpdateAppDisableStatusRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAppDisableStatusRequestBody members

    /// <summary>
    /// 是否禁用， true禁用， false取消禁用
    /// </summary>

    bool isIsDisable() const;
    bool isDisableIsSet() const;
    void unsetisDisable();
    void setIsDisable(bool value);


protected:
    bool isDisable_;
    bool isDisableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_UpdateAppDisableStatusRequestBody_H_
