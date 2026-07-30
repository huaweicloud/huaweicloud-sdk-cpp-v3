
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolStatus_resources_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolStatus_resources_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PoolResourceFlavorCount.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：资源池中不同状态的资源信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolStatus_resources
    : public ModelBase
{
public:
    PoolStatus_resources();
    virtual ~PoolStatus_resources();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolStatus_resources members

    /// <summary>
    /// 
    /// </summary>

    PoolResourceFlavorCount getCreating() const;
    bool creatingIsSet() const;
    void unsetcreating();
    void setCreating(const PoolResourceFlavorCount& value);

    /// <summary>
    /// 
    /// </summary>

    PoolResourceFlavorCount getAvailable() const;
    bool availableIsSet() const;
    void unsetavailable();
    void setAvailable(const PoolResourceFlavorCount& value);

    /// <summary>
    /// 
    /// </summary>

    PoolResourceFlavorCount getAbnormal() const;
    bool abnormalIsSet() const;
    void unsetabnormal();
    void setAbnormal(const PoolResourceFlavorCount& value);

    /// <summary>
    /// 
    /// </summary>

    PoolResourceFlavorCount getDeleting() const;
    bool deletingIsSet() const;
    void unsetdeleting();
    void setDeleting(const PoolResourceFlavorCount& value);


protected:
    PoolResourceFlavorCount creating_;
    bool creatingIsSet_;
    PoolResourceFlavorCount available_;
    bool availableIsSet_;
    PoolResourceFlavorCount abnormal_;
    bool abnormalIsSet_;
    PoolResourceFlavorCount deleting_;
    bool deletingIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolStatus_resources_H_
