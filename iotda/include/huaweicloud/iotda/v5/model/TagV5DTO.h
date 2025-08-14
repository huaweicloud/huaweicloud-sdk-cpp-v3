
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_TagV5DTO_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_TagV5DTO_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 标签结构体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  TagV5DTO
    : public ModelBase
{
public:
    TagV5DTO();
    virtual ~TagV5DTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TagV5DTO members

    /// <summary>
    /// **参数说明**：标签键，在同一资源下标签键唯一。绑定资源时，如果设置的键已存在，则将覆盖之前的标签值。如果设置的键值不存在，则新增标签。 **取值范围**：长度不超过64，只允许中文、字母、数字、以及_.-等字符的组合。
    /// </summary>

    std::string getTagKey() const;
    bool tagKeyIsSet() const;
    void unsettagKey();
    void setTagKey(const std::string& value);

    /// <summary>
    /// **参数说明**：标签值。 **取值范围**：长度不超过128，只允许中文、字母、数字、以及_.-等字符的组合。
    /// </summary>

    std::string getTagValue() const;
    bool tagValueIsSet() const;
    void unsettagValue();
    void setTagValue(const std::string& value);


protected:
    std::string tagKey_;
    bool tagKeyIsSet_;
    std::string tagValue_;
    bool tagValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_TagV5DTO_H_
