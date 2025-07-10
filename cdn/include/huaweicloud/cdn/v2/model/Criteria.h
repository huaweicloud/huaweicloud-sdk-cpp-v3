
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_Criteria_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_Criteria_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/Criteria.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 匹配条件列表 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  Criteria
    : public ModelBase
{
public:
    Criteria();
    virtual ~Criteria();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Criteria members

    /// <summary>
    /// **参数解释：** 匹配目标类型 **约束限制：** 不涉及 **取值范围：** - schema: 客户端请求使用的协议类型 - method: 客户端请求IP使用的请求方法 - path: 客户端请求URL路径 - arg: 客户端请求URL中的查询参数 - extension: 客户端请求IP内容的文件后缀 - filename: 客户端请求IP内容的文件名称 - header: HTTP请求头部 - clientip: 客户端请求IP的客户端IP - clientip_version: 客户端请求IP的客户端IP版本 - ua: 客户端请求IP头中的User-Agent - ngx_variable: Nginx变量 **默认取值：** 不涉及
    /// </summary>

    std::string getMatchTargetType() const;
    bool matchTargetTypeIsSet() const;
    void unsetmatchTargetType();
    void setMatchTargetType(const std::string& value);

    /// <summary>
    /// **参数解释：** 匹配目标名称 **约束限制：** 不涉及 **取值范围：** - 当匹配目标类型为schema、method、path、extension、filename、ua时，该值为空 - 当匹配目标类型为arg时表示查询参数名，长度1-100，由数字，大小写字母，中划线和下划线组成，只能以字母开头 - 当匹配目标类型为header时表示请求头的名称，长度1-100，由数字，大小写字母，中划线和下划线组成，只能以字母开头 - 当匹配目标类型为clientip时表示ip来源，取值：connect：建联IP；xff：x-forwarded-for头 - 当匹配目标类型为clientip_version时表示ip版本来源，取值：connect：建联IP；xff：x-forwarded-for头 - 当匹配目标类型为ngx_variable时表示Nginx变量名，仅支持$protocol、$arg_、$http_、$scheme、$uri、$ssl_protocol、$ssl_server_name、$remote_addr、$http2、$request_method、$sent_http_ **默认取值：** 不涉及
    /// </summary>

    std::string getMatchTargetName() const;
    bool matchTargetNameIsSet() const;
    void unsetmatchTargetName();
    void setMatchTargetName(const std::string& value);

    /// <summary>
    /// **参数解释：** 匹配算法 **约束限制：** 不涉及 **取值范围：** contains：包含匹配，匹配到match_pattern任意一个条件即匹配成功 **默认取值：** 不涉及
    /// </summary>

    std::string getMatchType() const;
    bool matchTypeIsSet() const;
    void unsetmatchType();
    void setMatchType(const std::string& value);

    /// <summary>
    /// **参数解释：** 匹配内容 **约束限制：** 不涉及 **取值范围：** - 当匹配目标类型为schema时，取值：HTTP，HTTPS - 当匹配目标类型为method时，取值：GET，PUT，POST，DELETE，HEAD，OPTIONS，PATCH，TRACE，CONNECT - 当匹配目标类型为clientip_version时，取值：IPv4，IPv6 - 当匹配目标类型为path和ua时，支持配置通配符“*” **默认取值：** 不涉及
    /// </summary>

    std::vector<std::string>& getMatchPattern();
    bool matchPatternIsSet() const;
    void unsetmatchPattern();
    void setMatchPattern(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 是否取反，与match_type配合使用。例：negate配置为true，match_type配置为contains，则实际业务逻辑将转换为not_contains **约束限制：** 不涉及 **取值范围：** - true: 取反 - false: 不取反 **默认取值：** false: 不取反
    /// </summary>

    bool isNegate() const;
    bool negateIsSet() const;
    void unsetnegate();
    void setNegate(bool value);

    /// <summary>
    /// **参数解释：** 是否区分大小写 **约束限制：** 不涉及 **取值范围：** - true: 区分大小写 - false: 不区分大小写 **默认取值：** false: 不区分大小写
    /// </summary>

    bool isCaseSensitive() const;
    bool caseSensitiveIsSet() const;
    void unsetcaseSensitive();
    void setCaseSensitive(bool value);

    /// <summary>
    /// **参数解释：** 嵌套条件逻辑运算符 **约束限制：** 不涉及 **取值范围：** - and: 与关系 - or: 或关系 **默认取值：** 不涉及
    /// </summary>

    std::string getLogic() const;
    bool logicIsSet() const;
    void unsetlogic();
    void setLogic(const std::string& value);

    /// <summary>
    /// **参数解释：** 嵌套条件列表 **约束限制：** 不涉及
    /// </summary>

    std::vector<Criteria>& getSubCriteria();
    bool subCriteriaIsSet() const;
    void unsetsubCriteria();
    void setSubCriteria(const std::vector<Criteria>& value);


protected:
    std::string matchTargetType_;
    bool matchTargetTypeIsSet_;
    std::string matchTargetName_;
    bool matchTargetNameIsSet_;
    std::string matchType_;
    bool matchTypeIsSet_;
    std::vector<std::string> matchPattern_;
    bool matchPatternIsSet_;
    bool negate_;
    bool negateIsSet_;
    bool caseSensitive_;
    bool caseSensitiveIsSet_;
    std::string logic_;
    bool logicIsSet_;
    std::vector<Criteria>* subCriteria_;
    bool subCriteriaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_Criteria_H_
