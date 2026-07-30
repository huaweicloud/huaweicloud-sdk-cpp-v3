
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PatchNodePoolRequestBody_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PatchNodePoolRequestBody_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/NodePoolSpec.h>
#include <huaweicloud/modelarts/v1/model/PatchNodePoolMetaVO.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新节点池的请求体。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PatchNodePoolRequestBody
    : public ModelBase
{
public:
    PatchNodePoolRequestBody();
    virtual ~PatchNodePoolRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PatchNodePoolRequestBody members

    /// <summary>
    /// 
    /// </summary>

    PatchNodePoolMetaVO getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const PatchNodePoolMetaVO& value);

    /// <summary>
    /// 
    /// </summary>

    NodePoolSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const NodePoolSpec& value);


protected:
    PatchNodePoolMetaVO metadata_;
    bool metadataIsSet_;
    NodePoolSpec spec_;
    bool specIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PatchNodePoolRequestBody_H_
