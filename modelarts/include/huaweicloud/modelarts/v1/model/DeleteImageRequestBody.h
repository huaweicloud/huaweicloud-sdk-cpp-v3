
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteImageRequestBody_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteImageRequestBody_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：删除在SWR的镜像内容，仅对于个人私有镜像有效。 **约束限制**：不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DeleteImageRequestBody
    : public ModelBase
{
public:
    DeleteImageRequestBody();
    virtual ~DeleteImageRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteImageRequestBody members

    /// <summary>
    /// **参数解释**：删除在SWR的镜像内容，仅对于个人私有镜像有效。 **约束限制**：不涉及。 **取值范围**：布尔类型： - true：删除镜像内容。 - false：不删除镜像内容。  **默认取值**：false。
    /// </summary>

    bool isIsForce() const;
    bool isForceIsSet() const;
    void unsetisForce();
    void setIsForce(bool value);


protected:
    bool isForce_;
    bool isForceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteImageRequestBody_H_
