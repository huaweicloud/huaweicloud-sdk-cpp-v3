
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_Condition_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_Condition_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// cc规则防护规则限速条件
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  Condition
    : public ModelBase
{
public:
    Condition();
    virtual ~Condition();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Condition members

    /// <summary>
    /// 字段类型 url：路径 ip：IPv4 ipv6：IPv6 params：Params cookie：Cookie header：Header response_code：Response Code
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 条件列表逻辑匹配内容。 当匹配逻辑为exist或not_exist时，contents必须为空，其他情况下contents必填且长度不超过2048 当category为response_code时，contents状态码为200~599，正则为 ^(?:[2-5]\\d{2})$ 当匹配逻辑包含\&quot;len\&quot;时，contents必须为0~65535的整数；当匹配逻辑包含\&quot;num\&quot;时，contents必须为0~512的整数
    /// </summary>

    std::vector<std::string>& getContents();
    bool contentsIsSet() const;
    void unsetcontents();
    void setContents(const std::vector<std::string>& value);

    /// <summary>
    /// 子字段 当字段类型为ip或ipv6时，index必填且必须为：client-ip：客户端IP、x-forwarded-for：X-Forwarded-For、TCP连接IP: $remote_addr 当字段类型（category）选择“params”、“cookie”、“header”时，请根据实际需求配置子字段且该参数必填。 当匹配逻辑为num_greater、num_less、num_equal、num_not_equal时，子字段必须为空 当子字段不为空时，最大长度不超过2048
    /// </summary>

    std::string getIndex() const;
    bool indexIsSet() const;
    void unsetindex();
    void setIndex(const std::string& value);

    /// <summary>
    /// 条件列表匹配逻辑。 如果字段类型category是url，匹配逻辑可以为：contain、 not_contain、 equal、 not_equal、 prefix、 not_prefix、 suffix、 not_suffix、 len_greater、 len_less、len_equal或者len_not_equal 如果字段类型category是ip、ipv6或response_code，匹配逻辑可以为： equal、not_equal 如果字段类型category是params、cookie或者header, 匹配逻辑可以为：contain、 not_contain、 equal、 not_equal、 prefix、 not_prefix、 suffix、 not_suffix、 len_greater、 len_less、len_equal、len_not_equal、num_greater、num_less、num_equal、num_not_equal、exist或者not_exist
    /// </summary>

    std::string getLogicOperation() const;
    bool logicOperationIsSet() const;
    void unsetlogicOperation();
    void setLogicOperation(const std::string& value);


protected:
    std::string category_;
    bool categoryIsSet_;
    std::vector<std::string> contents_;
    bool contentsIsSet_;
    std::string index_;
    bool indexIsSet_;
    std::string logicOperation_;
    bool logicOperationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_Condition_H_
