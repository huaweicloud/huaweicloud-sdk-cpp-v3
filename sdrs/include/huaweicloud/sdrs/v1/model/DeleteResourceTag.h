
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_DeleteResourceTag_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_DeleteResourceTag_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 删除单个标签资源结构
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  DeleteResourceTag
    : public ModelBase
{
public:
    DeleteResourceTag();
    virtual ~DeleteResourceTag();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteResourceTag members

    /// <summary>
    /// 键。同一资源的key值不能重复。最大长度为36个UNICODE字符。key不能为空，不允许为空字符串。不能包含以下字符：非打印字符ASCII(0-31)特殊字符“*”,“&lt;”,“&gt;”,“\\”,“&#x3D;”,“,”,“|”,“/”键。不能为空。对于同一资源键值唯一。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 值。最大长度为43个UNICODE字符。删除时如果value有值按照key/value删除，如果value没值，则按照key删除。当value存在时，不能为空，可以为空字符串。不能包含以下字符：非打印字符ASCII(0-31)特殊字符“*”,“&lt;”,“&gt;”,“\\”,“&#x3D;”,“,”,“|”,“/”。长度不超过43个字符。  
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

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_DeleteResourceTag_H_
