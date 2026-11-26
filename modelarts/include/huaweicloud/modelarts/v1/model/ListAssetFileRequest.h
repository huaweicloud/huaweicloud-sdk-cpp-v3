
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAssetFileRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAssetFileRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListAssetFileRequest
    : public ModelBase
{
public:
    ListAssetFileRequest();
    virtual ~ListAssetFileRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAssetFileRequest members

    /// <summary>
    /// 工作空间ID。[获取方法请参见[查询工作空间列表](ListWorkspace.xml)。](tag:hc)未创建工作空间时默认值为“0”，存在创建并使用的工作空间，以实际取值为准。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释**：资产id。 **约束限制**：1-36字符，英文字母，数字，下划线，中划线。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// **参数解释**：列举桶内对象列表时，指定一个前缀，限定返回的对象名必须带有prefix前缀。 **约束限制**：1-1024位字符。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getPrefix() const;
    bool prefixIsSet() const;
    void unsetprefix();
    void setPrefix(const std::string& value);

    /// <summary>
    /// **参数解释**：列举对象的最大数目，返回的对象列表将是按照字典顺序的最多前max_keys个对象。 **约束限制**：1-1000。 **取值范围**：不涉及。 **默认取值**：1000。
    /// </summary>

    int32_t getMaxKeys() const;
    bool maxKeysIsSet() const;
    void unsetmaxKeys();
    void setMaxKeys(int32_t value);


protected:
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string assetId_;
    bool assetIdIsSet_;
    std::string prefix_;
    bool prefixIsSet_;
    int32_t maxKeys_;
    bool maxKeysIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAssetFileRequest& dereference_from_shared_ptr(std::shared_ptr<ListAssetFileRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAssetFileRequest_H_
