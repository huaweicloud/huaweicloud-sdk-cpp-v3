
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreatePoolRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreatePoolRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/CreatePoolRequestBody.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreatePoolRequest
    : public ModelBase
{
public:
    CreatePoolRequest();
    virtual ~CreatePoolRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreatePoolRequest members

    /// <summary>
    /// **参数解释**：实际的外部租户ID，如果有的话，工作空间鉴权以该ID为准。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getXModelArtsUserID() const;
    bool xModelArtsUserIDIsSet() const;
    void unsetxModelArtsUserID();
    void setXModelArtsUserID(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreatePoolRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreatePoolRequestBody& value);


protected:
    std::string xModelArtsUserID_;
    bool xModelArtsUserIDIsSet_;
    CreatePoolRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreatePoolRequest& dereference_from_shared_ptr(std::shared_ptr<CreatePoolRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreatePoolRequest_H_
