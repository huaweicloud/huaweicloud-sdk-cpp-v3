
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingQuotasRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingQuotasRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowTrainingQuotasRequest
    : public ModelBase
{
public:
    ShowTrainingQuotasRequest();
    virtual ~ShowTrainingQuotasRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTrainingQuotasRequest members

    /// <summary>
    /// **参数解释**：用户ID。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// **参数解释**：配额的资源类型。 **约束限制**：当前支持的传参：job-num（作业个数的配额）。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getResource() const;
    bool resourceIsSet() const;
    void unsetresource();
    void setResource(const std::string& value);


protected:
    std::string userId_;
    bool userIdIsSet_;
    std::string resource_;
    bool resourceIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowTrainingQuotasRequest& dereference_from_shared_ptr(std::shared_ptr<ShowTrainingQuotasRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingQuotasRequest_H_
