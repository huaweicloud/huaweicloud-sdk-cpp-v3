
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_BindTagsDTO_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_BindTagsDTO_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/iotda/v5/model/TagV5DTO.h>
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
class HUAWEICLOUD_IOTDA_V5_EXPORT  BindTagsDTO
    : public ModelBase
{
public:
    BindTagsDTO();
    virtual ~BindTagsDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BindTagsDTO members

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
    /// **参数说明**：要绑定到指定资源的标签列表，标签列表中各项标签键值之间不允许重复，一个资源最多可以绑定10个标签。
    /// </summary>

    std::vector<TagV5DTO>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagV5DTO>& value);


protected:
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::vector<TagV5DTO> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_BindTagsDTO_H_
