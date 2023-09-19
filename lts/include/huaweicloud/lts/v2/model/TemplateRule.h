
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_TemplateRule_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_TemplateRule_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 结构化模板规则对象
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  TemplateRule
    : public ModelBase
{
public:
    TemplateRule();
    virtual ~TemplateRule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// TemplateRule members

    /// <summary>
    /// 结构化类型，只支持custom_regex,json,split,nginx
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 具体结构化规则，每种结构化类型都有自己独有的结构，具体结构如下： 手动正则为json字符串，包含keyObject对象和regex_rules对象，keyObject内为键值对，键为demo_fields数组中元素的index，值为field_name，regex_rules对象为正则表达式字符串，整体例子为{\\\&quot;keyObject\\\&quot;:{\\\&quot;1\\\&quot;:\\\&quot;date\\\&quot;,\\\&quot;2\\\&quot;:\\\&quot;num\\\&quot;},\\\&quot;regex_rules\\\&quot;:\\\&quot;^(?&lt;date&gt;[^/]+)(?:[^ ]* ){8}(?&lt;num&gt;\\\\\\\\d+)\\\&quot;}； json方式时param为一个json字符串，包含keyObject对象和layers对象，keyObject内为键值对，键为demo_fields数组中元素的field_name，值为user_defined_name，layers为最大解析层数，当前最大值为4，整体例子为{\\\&quot;keyObject\\\&quot;:{\\\&quot;metadata.dimention\\\&quot;:\\\&quot;dimention\\\&quot;,\\\&quot;metadata.value\\\&quot;:\\\&quot;\\\&quot;,\\\&quot;metadata.unit\\\&quot;:\\\&quot;\\\&quot;,\\\&quot;collectionTime\\\&quot;:\\\&quot;\\\&quot;},\\\&quot;layers\\\&quot;:3}； 分隔符方式时为json字符串，包含keyObject对象和tokenizer对象，keyObject内为键值对，键为demo_fields数组中元素的index，值为field_name，tokenizer对象为所用分隔符，整体例子为{\\\&quot;keyObject\\\&quot;:{\\\&quot;0\\\&quot;:\\\&quot;field1\\\&quot;,\\\&quot;1\\\&quot;:\\\&quot;field2\\\&quot;,\\\&quot;2\\\&quot;:\\\&quot;field3\\\&quot;,\\\&quot;3\\\&quot;:\\\&quot;field4\\\&quot;,\\\&quot;4\\\&quot;:\\\&quot;field5\\\&quot;,\\\&quot;5\\\&quot;:\\\&quot;field6\\\&quot;,\\\&quot;6\\\&quot;:\\\&quot;field7\\\&quot;,\\\&quot;7\\\&quot;:\\\&quot;field8\\\&quot;,\\\&quot;8\\\&quot;:\\\&quot;field9\\\&quot;},\\\&quot;tokenizer\\\&quot;:\\\&quot; \\\&quot;}； nginx方式时为json字符串，包含keyObject对象，regex对象，field_names对象及log_format对象，keyObject内为键值对，键为demo_fields数组中元素的field_name，值为user_defined_name，regex为正则表达式字符串，field_names对象为demo_fields数组中各元素的field_name的拼接字符串，每个field_name以&#39;,&#39;分隔，log_format对象为nginx日志格式化方式，具体方式参考https://support.huaweicloud.com/usermanual-lts/lts_0820.html#lts_0820__section1151119552549进行配置，整体例子为\&quot;{\\\&quot;keyObject\\\&quot;:{\\\&quot;http_host\\\&quot;:\\\&quot;host\\\&quot;,\\\&quot;remote_addr\\\&quot;:\\\&quot;\\\&quot;,\\\&quot;request_method\\\&quot;:\\\&quot;\\\&quot;,\\\&quot;request_uri\\\&quot;:\\\&quot;\\\&quot;,\\\&quot;time_local\\\&quot;:\\\&quot;\\\&quot;},\\\&quot;regex\\\&quot;:\\\&quot;(\\\\\\\\d+/\\\\\\\\S+/\\\\\\\\d+:\\\\\\\\d+:\\\\\\\\d+:\\\\\\\\d+)\\\\\\\\s+\\\\\\\\S+\\\\\\\\s+(\\\\\\\\S*)\\\\\\\\s+(\\\\\\\\S*)\\\\\\\\s+(\\\\\\\\S*)\\\\\\\\s+\\\\\\\&quot;([^\\\\\\\&quot;]*)\\\\\\\&quot;.*\\\&quot;,\\\&quot;fieldNames\\\&quot;:\\\&quot;time_local,remote_addr,request_method,http_host,request_uri\\\&quot;,\\\&quot;log_format\\\&quot;:\\\&quot;log_format upstreaminfo &#39;$time_local $remote_addr  $request_method $http_host \\\\\\\&quot;$request_uri\\\\\\\&quot;&#39;;\\\&quot;}\&quot;
    /// </summary>

    std::string getParam() const;
    bool paramIsSet() const;
    void unsetparam();
    void setParam(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string param_;
    bool paramIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_TemplateRule_H_
