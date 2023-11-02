
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_TagKeyValuesBean_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_TagKeyValuesBean_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  TagKeyValuesBean
    : public ModelBase
{
public:
    TagKeyValuesBean();
    virtual ~TagKeyValuesBean();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TagKeyValuesBean members

    /// <summary>
    /// 键。最大长度128个unicode字符。 key不能为空。(搜索时不对此参数做字符集校验)，key不能为空或者空字符串，不能为空格，校验和使用之前先trim 前后半角空格
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 值列表。每个值最大长度255个unicode字符，校验和使用之前先trim 前后半角空格。 value可为空数组但不可缺省。 如果values为空列表，则表示any_value（查询任意value）。value之间为或的关系
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

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_TagKeyValuesBean_H_
