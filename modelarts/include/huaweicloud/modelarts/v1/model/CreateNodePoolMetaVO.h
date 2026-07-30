
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateNodePoolMetaVO_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateNodePoolMetaVO_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/CreateNodePoolAnnotations.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建节点池的metadata信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateNodePoolMetaVO
    : public ModelBase
{
public:
    CreateNodePoolMetaVO();
    virtual ~CreateNodePoolMetaVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateNodePoolMetaVO members

    /// <summary>
    /// **参数解释**：节点池名称。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateNodePoolAnnotations getAnnotations() const;
    bool annotationsIsSet() const;
    void unsetannotations();
    void setAnnotations(const CreateNodePoolAnnotations& value);


protected:
    std::string name_;
    bool nameIsSet_;
    CreateNodePoolAnnotations annotations_;
    bool annotationsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateNodePoolMetaVO_H_
