
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteAuthorizationsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteAuthorizationsRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DeleteAuthorizationsRequest
    : public ModelBase
{
public:
    DeleteAuthorizationsRequest();
    virtual ~DeleteAuthorizationsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteAuthorizationsRequest members

    /// <summary>
    /// **参数解释**：用户ID，当user_id为all时，表示删除所有IAM子用户的授权。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);


protected:
    std::string userId_;
    bool userIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteAuthorizationsRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteAuthorizationsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteAuthorizationsRequest_H_
