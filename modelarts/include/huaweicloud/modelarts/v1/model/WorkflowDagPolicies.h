
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowDagPolicies_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowDagPolicies_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// dag policy struct
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkflowDagPolicies
    : public ModelBase
{
public:
    WorkflowDagPolicies();
    virtual ~WorkflowDagPolicies();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowDagPolicies members

    /// <summary>
    /// 是否使用缓存。
    /// </summary>

    bool isUseCache() const;
    bool useCacheIsSet() const;
    void unsetuseCache();
    void setUseCache(bool value);


protected:
    bool useCache_;
    bool useCacheIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowDagPolicies_H_
