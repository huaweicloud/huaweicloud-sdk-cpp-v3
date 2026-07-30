
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PatchNodePoolMetaVO_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PatchNodePoolMetaVO_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PatchNodePoolAnnotations.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点池的metadata信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PatchNodePoolMetaVO
    : public ModelBase
{
public:
    PatchNodePoolMetaVO();
    virtual ~PatchNodePoolMetaVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PatchNodePoolMetaVO members

    /// <summary>
    /// 
    /// </summary>

    PatchNodePoolAnnotations getAnnotations() const;
    bool annotationsIsSet() const;
    void unsetannotations();
    void setAnnotations(const PatchNodePoolAnnotations& value);


protected:
    PatchNodePoolAnnotations annotations_;
    bool annotationsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PatchNodePoolMetaVO_H_
