
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteAssetRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteAssetRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DeleteAssetRequest
    : public ModelBase
{
public:
    DeleteAssetRequest();
    virtual ~DeleteAssetRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteAssetRequest members

    /// <summary>
    /// **参数解释**：资产id。 **约束限制**：1-36字符，英文字母，数字，下划线，中划线。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 工作空间ID。[获取方法请参见[查询工作空间列表](ListWorkspace.xml)。](tag:hc)未创建工作空间时默认值为“0”，存在创建并使用的工作空间，以实际取值为准。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释**：数据集资产是否删除OBS桶中的数据，boolean类型，取值true：删除OBS桶中的数据，取值false：仅删除记录不删除OBS桶中的数据。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    bool isForceDelete() const;
    bool forceDeleteIsSet() const;
    void unsetforceDelete();
    void setForceDelete(bool value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    bool forceDelete_;
    bool forceDeleteIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteAssetRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteAssetRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteAssetRequest_H_
