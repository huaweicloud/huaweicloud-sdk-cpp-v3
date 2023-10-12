
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_TagWithKeyValue_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_TagWithKeyValue_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  TagWithKeyValue
    : public ModelBase
{
public:
    TagWithKeyValue();
    virtual ~TagWithKeyValue();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TagWithKeyValue members

    /// <summary>
    /// 标签键。长度为1-128个unicode字符。 可以包含任何语种字母、数字、空格和_.:&#x3D;+-@， 但首尾不能含有空格，不能以sys开头。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 标签值。最大长度255个unicode字符。 可以为空字符串。可以包含任何语种字母、数字、空格和_.:&#x3D;+-@，
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_TagWithKeyValue_H_
