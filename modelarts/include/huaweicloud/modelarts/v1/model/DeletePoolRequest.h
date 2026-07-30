
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeletePoolRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeletePoolRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DeletePoolRequest
    : public ModelBase
{
public:
    DeletePoolRequest();
    virtual ~DeletePoolRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeletePoolRequest members

    /// <summary>
    /// **参数解释**：系统生成的资源池名称。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getPoolName() const;
    bool poolNameIsSet() const;
    void unsetpoolName();
    void setPoolName(const std::string& value);

    /// <summary>
    /// **参数解释**：实际的外部租户ID，如果有的话，工作空间鉴权以该ID为准。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getXModelArtsUserID() const;
    bool xModelArtsUserIDIsSet() const;
    void unsetxModelArtsUserID();
    void setXModelArtsUserID(const std::string& value);


protected:
    std::string poolName_;
    bool poolNameIsSet_;
    std::string xModelArtsUserID_;
    bool xModelArtsUserIDIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeletePoolRequest& dereference_from_shared_ptr(std::shared_ptr<DeletePoolRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeletePoolRequest_H_
