
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_InstanceItemTagItem_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_InstanceItemTagItem_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 标签列表。
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  InstanceItemTagItem
    : public ModelBase
{
public:
    InstanceItemTagItem();
    virtual ~InstanceItemTagItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstanceItemTagItem members

    /// <summary>
    /// 标签键。最大长度36个unicode字符，key不能为空。 字符集：0-9，A-Z，a-z，“_”，“-”，中文。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 标签值。最大长度43个unicode字符，可以为空字符串。 字符集：0-9，A-Z，a-z，“_”，“.”，“-”，中文。
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

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_InstanceItemTagItem_H_
