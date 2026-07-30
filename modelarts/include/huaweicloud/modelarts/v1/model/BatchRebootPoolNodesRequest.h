
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchRebootPoolNodesRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchRebootPoolNodesRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/BatchRebootPoolNodesRequestBody.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BatchRebootPoolNodesRequest
    : public ModelBase
{
public:
    BatchRebootPoolNodesRequest();
    virtual ~BatchRebootPoolNodesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchRebootPoolNodesRequest members

    /// <summary>
    /// **参数解释**：资源池名称。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getPoolName() const;
    bool poolNameIsSet() const;
    void unsetpoolName();
    void setPoolName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchRebootPoolNodesRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchRebootPoolNodesRequestBody& value);


protected:
    std::string poolName_;
    bool poolNameIsSet_;
    BatchRebootPoolNodesRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchRebootPoolNodesRequest& dereference_from_shared_ptr(std::shared_ptr<BatchRebootPoolNodesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchRebootPoolNodesRequest_H_
