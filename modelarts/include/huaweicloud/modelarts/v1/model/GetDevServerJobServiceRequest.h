
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GetDevServerJobServiceRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GetDevServerJobServiceRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  GetDevServerJobServiceRequest
    : public ModelBase
{
public:
    GetDevServerJobServiceRequest();
    virtual ~GetDevServerJobServiceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetDevServerJobServiceRequest members

    /// <summary>
    /// **参数解释**：部署服务的id。 **约束限制**：字母、数字和中划线。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    GetDevServerJobServiceRequest& dereference_from_shared_ptr(std::shared_ptr<GetDevServerJobServiceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GetDevServerJobServiceRequest_H_
