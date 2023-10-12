
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ProjectTag_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ProjectTag_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 项目标签列表。
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ProjectTag
    : public ModelBase
{
public:
    ProjectTag();
    virtual ~ProjectTag();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProjectTag members

    /// <summary>
    /// 键。  - 最大长度36个unicode字符。  - 只能包含数字、字母、中划线“-”、下划线“_”。  - 字符集：A-Z，a-z ， 0-9，‘-’，‘_’，UNICODE字符（\\u4E00-\\u9FFF）。  - 不能包含以下ASCII非打印字符：“&#x3D;”,“*”,“&lt;”,“&gt;”,“\\”,“|”,“/”,“,”。  - 标签的键必须唯一且输入不能为空。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 值。  - 每个值最大长度43个unicode字符。  - 可以为空字符串。  - 只能包含数字、字母、中划线“-”、下划线“_”。  - 字符集：A-Z，a-z ， 0-9，‘.’，‘-’，‘_’，UNICODE字符（\\u4E00-\\u9FFF）。  - 不能包含以下ASCII非打印字符：“&#x3D;”,“*”,“&lt;”,“&gt;”,“\\”,“|”,“/”,“,”。
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

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ProjectTag_H_
