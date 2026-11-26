
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAssetByCodeAndVersionRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAssetByCodeAndVersionRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowAssetByCodeAndVersionRequest
    : public ModelBase
{
public:
    ShowAssetByCodeAndVersionRequest();
    virtual ~ShowAssetByCodeAndVersionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAssetByCodeAndVersionRequest members

    /// <summary>
    /// **参数解释**：资产code。 **约束限制**：1-60字符，英文字母，数字，中划线，下划线，点。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getAssetCode() const;
    bool assetCodeIsSet() const;
    void unsetassetCode();
    void setAssetCode(const std::string& value);

    /// <summary>
    /// **参数解释**：资产version。 **约束限制**：数字或为格式x.y.z， x,y,z均为数字。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getAssetVersion() const;
    bool assetVersionIsSet() const;
    void unsetassetVersion();
    void setAssetVersion(const std::string& value);

    /// <summary>
    /// 工作空间ID。[获取方法请参见[查询工作空间列表](ListWorkspace.xml)。](tag:hc)未创建工作空间时默认值为“0”，存在创建并使用的工作空间，以实际取值为准。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释**:资产类型。 **约束限制**:不涉及。 **取值范围**:不涉及。 **默认取值**:MODEL。
    /// </summary>

    std::string getAssetType() const;
    bool assetTypeIsSet() const;
    void unsetassetType();
    void setAssetType(const std::string& value);


protected:
    std::string assetCode_;
    bool assetCodeIsSet_;
    std::string assetVersion_;
    bool assetVersionIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string assetType_;
    bool assetTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAssetByCodeAndVersionRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAssetByCodeAndVersionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAssetByCodeAndVersionRequest_H_
