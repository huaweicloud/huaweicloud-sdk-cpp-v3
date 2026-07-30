
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchResizePoolNodesRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchResizePoolNodesRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/BatchResizeRequestBody.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BatchResizePoolNodesRequest
    : public ModelBase
{
public:
    BatchResizePoolNodesRequest();
    virtual ~BatchResizePoolNodesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchResizePoolNodesRequest members

    /// <summary>
    /// **参数解释**：资源池ID。取值资源池详情的metadata.name字段。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getPoolName() const;
    bool poolNameIsSet() const;
    void unsetpoolName();
    void setPoolName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchResizeRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchResizeRequestBody& value);


protected:
    std::string poolName_;
    bool poolNameIsSet_;
    BatchResizeRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchResizePoolNodesRequest& dereference_from_shared_ptr(std::shared_ptr<BatchResizePoolNodesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchResizePoolNodesRequest_H_
