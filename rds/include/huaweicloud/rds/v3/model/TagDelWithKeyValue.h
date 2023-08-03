
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_TagDelWithKeyValue_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_TagDelWithKeyValue_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 键值对标签。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  TagDelWithKeyValue
    : public ModelBase
{
public:
    TagDelWithKeyValue();
    virtual ~TagDelWithKeyValue();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// TagDelWithKeyValue members

    /// <summary>
    /// 标签键。最大长度127个unicode字符。 key不能为空，不能为空字符串。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 标签值。每个值最大长度255个unicode字符。 删除说明如下： - 如果“value”有值，按照“key”/“value”删除。 - 如果“value”没值，则按照“key”删除。
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_TagDelWithKeyValue_H_
