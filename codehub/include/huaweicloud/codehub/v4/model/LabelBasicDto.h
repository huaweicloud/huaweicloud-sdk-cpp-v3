
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_LabelBasicDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_LabelBasicDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codehub/v4/model/LabelSimpleDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  LabelBasicDto
    : public ModelBase
{
public:
    LabelBasicDto();
    virtual ~LabelBasicDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LabelBasicDto members

    /// <summary>
    /// **参数解释：** 标签ID。 **取值范围：** 1-2147483647
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 标签名。 **取值范围：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 标签颜色，以6位十六进制表示法给出，带有前导“#”符号（例如，#FFAABB）。 **取值范围：** 正则&#x60;^#([a-fA-F0-9]{6}|[a-fA-F0-9]{3})$&#x60;
    /// </summary>

    std::string getColor() const;
    bool colorIsSet() const;
    void unsetcolor();
    void setColor(const std::string& value);

    /// <summary>
    /// **参数解释：** 描述。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** 字体颜色，以6位十六进制表示法给出，带有前导“#”符号（例如，#FFAABB）。 **取值范围：** 正则&#x60;^#([a-fA-F0-9]{6}|[a-fA-F0-9]{3})$&#x60;
    /// </summary>

    std::string getTextColor() const;
    bool textColorIsSet() const;
    void unsettextColor();
    void setTextColor(const std::string& value);

    /// <summary>
    /// **参数解释：** 失效时间。 **取值范围：** 不涉及。
    /// </summary>

    std::string getExpiresAt() const;
    bool expiresAtIsSet() const;
    void unsetexpiresAt();
    void setExpiresAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否失效。 **取值范围：** 不涉及。
    /// </summary>

    bool isIsExpired() const;
    bool isExpiredIsSet() const;
    void unsetisExpired();
    void setIsExpired(bool value);

    /// <summary>
    /// **参数解释：** 关联开启状态MR的数量。 **约束限制：** MR仓库返回此字段。 **取值范围：** 0-2147483647
    /// </summary>

    int32_t getOpenMergeRequestsCount() const;
    bool openMergeRequestsCountIsSet() const;
    void unsetopenMergeRequestsCount();
    void setOpenMergeRequestsCount(int32_t value);

    /// <summary>
    /// **参数解释：**  关联开启状态CR的数量。  **约束限制：**  CR仓库返回此字段。  **取值范围：**  0-2147483647
    /// </summary>

    int32_t getOpenChangeRequestCount() const;
    bool openChangeRequestCountIsSet() const;
    void unsetopenChangeRequestCount();
    void setOpenChangeRequestCount(int32_t value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string color_;
    bool colorIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string textColor_;
    bool textColorIsSet_;
    std::string expiresAt_;
    bool expiresAtIsSet_;
    bool isExpired_;
    bool isExpiredIsSet_;
    int32_t openMergeRequestsCount_;
    bool openMergeRequestsCountIsSet_;
    int32_t openChangeRequestCount_;
    bool openChangeRequestCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_LabelBasicDto_H_
