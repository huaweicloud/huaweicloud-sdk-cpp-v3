
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateAuthModeRequestBody_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateAuthModeRequestBody_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  UpdateAuthModeRequestBody
    : public ModelBase
{
public:
    UpdateAuthModeRequestBody();
    virtual ~UpdateAuthModeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAuthModeRequestBody members

    /// <summary>
    /// **参数解释**：更新的模式类型。 **取值范围**： - strict：严格模式。 - loose：非严格模式。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);


protected:
    std::string mode_;
    bool modeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateAuthModeRequestBody_H_
