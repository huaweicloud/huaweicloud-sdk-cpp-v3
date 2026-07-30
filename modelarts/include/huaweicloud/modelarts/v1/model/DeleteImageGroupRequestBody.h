
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteImageGroupRequestBody_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteImageGroupRequestBody_H_


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
/// 删除镜像组请求体，支持is_force字段删除关联swr镜像，默认为false
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DeleteImageGroupRequestBody
    : public ModelBase
{
public:
    DeleteImageGroupRequestBody();
    virtual ~DeleteImageGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteImageGroupRequestBody members

    /// <summary>
    /// 是否删除关联的swr镜像，默认为false  **参数解释**：是否删除关联的swr镜像。 **约束限制**：true或false。 **取值范围**：布尔类型。 **默认取值**：false。
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteImageGroupRequestBody_H_
