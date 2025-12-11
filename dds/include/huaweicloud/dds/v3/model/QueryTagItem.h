
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_QueryTagItem_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_QueryTagItem_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  QueryTagItem
    : public ModelBase
{
public:
    QueryTagItem();
    virtual ~QueryTagItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryTagItem members

    /// <summary>
    /// **参数解释：** 标签键。 **约束限制：** 最大长度36个unicode字符，key不能为空或者空字符串，不能为空格，校验和使用之前先排除前后半角空格。 取值范围： 不涉及。 默认取值： 不涉及。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 标签值列表。 **约束限制：** 最大长度43个unicode字符，不能为空格，校验和使用之前先排除前后半角空格。如果values为空列表，则表示查询任意value。value之间为或的关系。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::vector<std::string>& getValues();
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::vector<std::string>& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::vector<std::string> values_;
    bool valuesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_QueryTagItem_H_
