
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ReviewDataInfoRequestParam_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ReviewDataInfoRequestParam_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 任务门禁配置列表。 **约束限制：** 不涉及。
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  ReviewDataInfoRequestParam
    : public ModelBase
{
public:
    ReviewDataInfoRequestParam();
    virtual ~ReviewDataInfoRequestParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReviewDataInfoRequestParam members

    /// <summary>
    /// **参数解释：** 运算逻辑。 **约束限制：** 不涉及。 **取值范围：** 取值为\&quot;≤\&quot;。 **默认取值：** 不涉及。
    /// </summary>

    std::string getCompareType() const;
    bool compareTypeIsSet() const;
    void unsetcompareType();
    void setCompareType(const std::string& value);

    /// <summary>
    /// **参数解释：** 门禁开关。 **约束限制：** 不涉及。 **取值范围：** - 0：关闭门禁。 - 1：打开门禁。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getIsCheck() const;
    bool isCheckIsSet() const;
    void unsetisCheck();
    void setIsCheck(int32_t value);

    /// <summary>
    /// **参数解释：** 门禁项。 **约束限制：** 不涉及。 **取值范围：** - 致命问题数。 - 严重问题数。 - 一般问题数。 - 提示问题数。 **默认取值：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 门禁阈值。 **约束限制：** 不涉及。 **取值范围：** ≥0 **默认取值：** 不涉及。
    /// </summary>

    int32_t getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(int32_t value);


protected:
    std::string compareType_;
    bool compareTypeIsSet_;
    int32_t isCheck_;
    bool isCheckIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ReviewDataInfoRequestParam_H_
