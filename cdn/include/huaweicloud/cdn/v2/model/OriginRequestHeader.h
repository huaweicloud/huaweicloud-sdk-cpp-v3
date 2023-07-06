
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_OriginRequestHeader_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_OriginRequestHeader_H_

#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 回源请求头
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  OriginRequestHeader
    : public ModelBase
{
public:
    OriginRequestHeader();
    virtual ~OriginRequestHeader();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// OriginRequestHeader members

    /// <summary>
    /// 设置回源请求头参数。格式要求：由数字，大小写字母，中划线组成，只能以字母开头。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 设置回源请求头参数的值。当为删除动作时，可不填。格式要求：长度1~512。不支持中文，不支持变量配置，如：$client_ip,$remote_port等。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 回源请求头设置类型。delete：删除，set：设置。同一个请求头字段只允许删除或者设置。设置：若原始回源请求中不存在该字段，先执行新增再执行设置。
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

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_OriginRequestHeader_H_
