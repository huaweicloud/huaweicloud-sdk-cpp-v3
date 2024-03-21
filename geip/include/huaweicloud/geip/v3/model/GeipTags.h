
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_GeipTags_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_GeipTags_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源标签。
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  GeipTags
    : public ModelBase
{
public:
    GeipTags();
    virtual ~GeipTags();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GeipTags members

    /// <summary>
    /// - 功能说明：标签名称 - 约束：   - 创建的预定义标签如果与已有的预定义标签完全相同，则会覆盖已有的预定义标签；若只有“键”相同，“值”不同，则为新创建的预定义标签。   - 键的长度最大36字符，由英文字母、数字、下划线、中划线、中文字符组成。   - 单个资源最多可以添加20个标签。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// - 功能说明：标签值列表 - 约束：   - 值的长度最大43字符，由英文字母、数字、下划线、点、中划线、中文字符组成。
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

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_GeipTags_H_
