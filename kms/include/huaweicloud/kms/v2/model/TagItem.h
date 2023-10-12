
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_TagItem_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_TagItem_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 标签。
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  TagItem
    : public ModelBase
{
public:
    TagItem();
    virtual ~TagItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TagItem members

    /// <summary>
    /// 键。 最大长度36个unicode字符。 key不能为空。不能包含非打印字符“ASCII(0-31)”、“*”、“&lt;”、“&gt;”、“\\”、“&#x3D;”。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 值。 每个值最大长度43个unicode字符，可以为空字符串。 不能包含非打印字符“ASCII(0-31)”、“*”、“&lt;”、“&gt;”、“\\”、“&#x3D;”。
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

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_TagItem_H_
