
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAssetTagsInfoRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAssetTagsInfoRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowAssetTagsInfoRequest
    : public ModelBase
{
public:
    ShowAssetTagsInfoRequest();
    virtual ~ShowAssetTagsInfoRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAssetTagsInfoRequest members

    /// <summary>
    /// **参数解释**：标签分类。 **约束限制**：1-128位字符，仅支持中文、英文字母、数字、下划线和中划线。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getTagCategory() const;
    bool tagCategoryIsSet() const;
    void unsettagCategory();
    void setTagCategory(const std::string& value);

    /// <summary>
    /// **参数解释**：请求头（Header）参数，主要用于控制API返回内容的语言。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 工作空间ID。[获取方法请参见[查询工作空间列表](ListWorkspace.xml)。](tag:hc)未创建工作空间时默认值为“0”，存在创建并使用的工作空间，以实际取值为准。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);


protected:
    std::string tagCategory_;
    bool tagCategoryIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAssetTagsInfoRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAssetTagsInfoRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAssetTagsInfoRequest_H_
