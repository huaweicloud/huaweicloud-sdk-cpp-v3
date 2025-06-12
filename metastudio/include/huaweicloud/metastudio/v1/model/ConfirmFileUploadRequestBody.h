
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ConfirmFileUploadRequestBody_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ConfirmFileUploadRequestBody_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ConfirmFileUploadRequestBody
    : public ModelBase
{
public:
    ConfirmFileUploadRequestBody();
    virtual ~ConfirmFileUploadRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConfirmFileUploadRequestBody members

    /// <summary>
    /// **参数解释**： 文件上传状态。 **约束限制**： 不涉及 **取值范围**： * CREATED：上传完成 * FAILED：上传失败 * CANCELLED：取消上传  **默认取值**： 不涉及
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);


protected:
    std::string state_;
    bool stateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ConfirmFileUploadRequestBody_H_
