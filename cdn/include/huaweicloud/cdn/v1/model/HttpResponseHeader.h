
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_HttpResponseHeader_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_HttpResponseHeader_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// http响应头设置
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  HttpResponseHeader
    : public ModelBase
{
public:
    HttpResponseHeader();
    virtual ~HttpResponseHeader();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HttpResponseHeader members

    /// <summary>
    /// 设置HTTP响应头参数。取值：\&quot;Content-Disposition\&quot;, \&quot;Content-Language\&quot;, \&quot;Access-Control-Allow-Origin\&quot;,\&quot;Access-Control-Allow-Methods\&quot;, \&quot;Access-Control-Max-Age\&quot;, \&quot;Access-Control-Expose-Headers\&quot;或自定义头部。格式要求：长度1~100，以字母开头，可以使用字母、数字和短横杠。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 设置HTTP响应头参数的值。自定义HTTP响应头参数长度范围1~256，支持字母、数字和特定字符（.-_*#!&amp;+|^~&#39;\&quot;/:;,&#x3D;@?&lt;&gt;）。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 设置http响应头操作类型，取值“set/delete”。set代表设置，delete代表删除。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string action_;
    bool actionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_HttpResponseHeader_H_
