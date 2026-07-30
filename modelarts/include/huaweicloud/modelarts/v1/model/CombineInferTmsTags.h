
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CombineInferTmsTags_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CombineInferTmsTags_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 多标签相同key合并value的数据结构。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CombineInferTmsTags
    : public ModelBase
{
public:
    CombineInferTmsTags();
    virtual ~CombineInferTmsTags();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CombineInferTmsTags members

    /// <summary>
    /// **参数解释：** 标签的key。 **取值范围：** 不涉及。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 相同key的标签value合并后的列表。 **取值范围：** 不涉及。
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CombineInferTmsTags_H_
