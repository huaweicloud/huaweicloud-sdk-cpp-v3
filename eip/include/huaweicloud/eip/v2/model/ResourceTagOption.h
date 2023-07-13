
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_ResourceTagOption_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_ResourceTagOption_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 标签
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  ResourceTagOption
    : public ModelBase
{
public:
    ResourceTagOption();
    virtual ~ResourceTagOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ResourceTagOption members

    /// <summary>
    /// 标签名称。不能为空。长度不超过36个字符。由英文字母、数字、下划线、中划线、中文字符组成。同一资源的key值不能重复。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 值列表。长度不超过43个字符。由英文字母、数字、下划线、点、中划线、中文字符组成。
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

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_ResourceTagOption_H_
