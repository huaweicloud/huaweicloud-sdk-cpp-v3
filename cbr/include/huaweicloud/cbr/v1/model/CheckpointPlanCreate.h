
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointPlanCreate_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointPlanCreate_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/CheckpointResourceResp.h>
#include <huaweicloud/cbr/v1/model/CheckpointCreateSkippedResource.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  CheckpointPlanCreate
    : public ModelBase
{
public:
    CheckpointPlanCreate();
    virtual ~CheckpointPlanCreate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckpointPlanCreate members

    /// <summary>
    /// 存储库id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 存储库名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 备份对象
    /// </summary>

    std::vector<CheckpointResourceResp>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<CheckpointResourceResp>& value);

    /// <summary>
    /// 备份时跳过的资源列表
    /// </summary>

    std::vector<CheckpointCreateSkippedResource>& getSkippedResources();
    bool skippedResourcesIsSet() const;
    void unsetskippedResources();
    void setSkippedResources(const std::vector<CheckpointCreateSkippedResource>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<CheckpointResourceResp> resources_;
    bool resourcesIsSet_;
    std::vector<CheckpointCreateSkippedResource> skippedResources_;
    bool skippedResourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointPlanCreate_H_
