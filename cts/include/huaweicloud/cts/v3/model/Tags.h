
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_Tags_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_Tags_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 标签列表。
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  Tags
    : public ModelBase
{
public:
    Tags();
    virtual ~Tags();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Tags members

    /// <summary>
    /// 键。最大长度128个unicode字符。key不能为空。不能包含非打印字符ASCII(0-31)，“&#x3D;”,“*”,“&lt;”,“&gt;”,“\\”,“,”,“|”,“/”
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 值。每个值最大长度255个unicode字符，删除时如果value有值按照key/value删除，如果value没值，则按照key删除，可以为空字符串。,不能包含非打印字符ASCII(0-31), “&#x3D;”,“*”,“&lt;”,“&gt;”,“\\”,“,”,“|”,“/”
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

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_Tags_H_
