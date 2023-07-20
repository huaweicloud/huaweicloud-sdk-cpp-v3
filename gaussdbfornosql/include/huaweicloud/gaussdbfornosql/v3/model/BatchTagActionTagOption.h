
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_BatchTagActionTagOption_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_BatchTagActionTagOption_H_

#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  BatchTagActionTagOption
    : public ModelBase
{
public:
    BatchTagActionTagOption();
    virtual ~BatchTagActionTagOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchTagActionTagOption members

    /// <summary>
    /// 标签键。最大长度36个unicode字符，不能为null或者空字符串，不能为空格，校验和使用之前会自动过滤掉前后空格。 字符集：0-9，A-Z，a-z，“_”，“-”，中文。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 标签值。最大长度43个unicode字符，可以为空字符串，不能为空格，校验和使用之前会自动过滤掉前后空格。 字符集：0-9，A-Z，a-z，“_”，“.”，“-”，中文。 - “action”值为“create”时，该参数必选。 - “action”值为“delete”时，该参数可选。 说明: 删除标签时，如果value有值，则按照key/value匹配删除；如果value没有值，则按照key删除。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_BatchTagActionTagOption_H_
