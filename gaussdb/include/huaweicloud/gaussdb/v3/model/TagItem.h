
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TagItem_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TagItem_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  TagItem
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
    /// 标签键。最大长度36个unicode字符，不能为null或者空字符串，不能为空格。  字符集：0-9，A-Z，a-z，“_”，“-”，中文。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 标签值。最大长度43个unicode字符，可以为空字符串，不能为空格。  字符集：0-9，A-Z，a-z，“_”，“.”，“-”，中文。 - “action”值为“create”时，该参数必选。 - “action”值为“delete”时，如果value有值，按照key-value删除，如果value没值，则按照key删除。
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TagItem_H_
