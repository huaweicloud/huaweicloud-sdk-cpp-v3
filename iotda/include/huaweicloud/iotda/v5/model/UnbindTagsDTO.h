
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UnbindTagsDTO_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UnbindTagsDTO_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建标签请求结构体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  UnbindTagsDTO
    : public ModelBase
{
public:
    UnbindTagsDTO();
    virtual ~UnbindTagsDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UnbindTagsDTO members

    /// <summary>
    /// **参数说明**：要绑定标签的资源类型。 **取值范围**： - device：设备。
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// **参数说明**：要绑定标签的资源id。例如，资源类型为device，那么对应的资源id就是device_id。 **取值范围**：长度不超过128，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// **参数说明**：指定资源要解绑的标签键列表，标签键列表中各项之间不允许重复，不能填写不存在的标签键值 **取值范围**：标签键长度不超过64，只允许中文、字母、数字、以及_.-等字符的组合。
    /// </summary>

    std::vector<std::string>& getTagKeys();
    bool tagKeysIsSet() const;
    void unsettagKeys();
    void setTagKeys(const std::vector<std::string>& value);


protected:
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::vector<std::string> tagKeys_;
    bool tagKeysIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UnbindTagsDTO_H_
