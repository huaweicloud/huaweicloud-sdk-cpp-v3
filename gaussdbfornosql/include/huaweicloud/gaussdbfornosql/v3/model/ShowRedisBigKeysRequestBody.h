
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowRedisBigKeysRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowRedisBigKeysRequestBody_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ShowRedisBigKeysRequestBody
    : public ModelBase
{
public:
    ShowRedisBigKeysRequestBody();
    virtual ~ShowRedisBigKeysRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRedisBigKeysRequestBody members

    /// <summary>
    /// 索引位置偏移量，表示从查询到的大key列表偏移offset条数据后查询对应的大key信息。 取值大于或等于0。不传该参数时，查询偏移量默认为0，表示从第一条大key开始查询。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询个数上限值。 取值范围：1~100。不传该参数时，默认查询前100条大key。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 大key的类型,一个字符串列表,支持\&quot;string\&quot;,\&quot;hash\&quot;,\&quot;zset\&quot;,\&quot;set\&quot;,\&quot;list\&quot;,\&quot;stream\&quot;六种类型。
    /// </summary>

    std::vector<std::string>& getKeyTypes();
    bool keyTypesIsSet() const;
    void unsetkeyTypes();
    void setKeyTypes(const std::vector<std::string>& value);


protected:
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::vector<std::string> keyTypes_;
    bool keyTypesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowRedisBigKeysRequestBody_H_
