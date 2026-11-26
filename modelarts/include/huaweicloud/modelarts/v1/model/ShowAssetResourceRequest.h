
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAssetResourceRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAssetResourceRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowAssetResourceRequest
    : public ModelBase
{
public:
    ShowAssetResourceRequest();
    virtual ~ShowAssetResourceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAssetResourceRequest members

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
    /// **参数解释**：静态资源名称。 **约束限制**：当前只支持readme文件查询（docs/RELEASE.md）。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);

    /// <summary>
    /// **参数解释**：查询资源时是否拼接区域信息。如果为false，则直接查询docs/RELEASE.md文件；如果为true，则会优先匹配带有区域信息的文件（请求头传递x-language，如英文查询docs/RELEASE_en-US.md）。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    bool isCheckLocale() const;
    bool checkLocaleIsSet() const;
    void unsetcheckLocale();
    void setCheckLocale(bool value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;
    bool checkLocale_;
    bool checkLocaleIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAssetResourceRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAssetResourceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAssetResourceRequest_H_
