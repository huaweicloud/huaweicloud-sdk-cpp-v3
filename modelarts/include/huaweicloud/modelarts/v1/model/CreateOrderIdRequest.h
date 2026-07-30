
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateOrderIdRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateOrderIdRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/CreateOrderRequestBody.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateOrderIdRequest
    : public ModelBase
{
public:
    CreateOrderIdRequest();
    virtual ~CreateOrderIdRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateOrderIdRequest members

    /// <summary>
    /// **参数解释**：资源池ID。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：订单操作类型。 **约束限制**：不涉及。 **取值范围**：可选值如下： - toPeriod：按需转包周期，默认值 **默认取值**：不涉及。
    /// </summary>

    std::string getActionType() const;
    bool actionTypeIsSet() const;
    void unsetactionType();
    void setActionType(const std::string& value);

    /// <summary>
    /// **参数解释**：工作空间ID，默认是0。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateOrderRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateOrderRequestBody& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string actionType_;
    bool actionTypeIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    CreateOrderRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateOrderIdRequest& dereference_from_shared_ptr(std::shared_ptr<CreateOrderIdRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateOrderIdRequest_H_
