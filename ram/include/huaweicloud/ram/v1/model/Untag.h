
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_Untag_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_Untag_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 自定义键值对。
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  Untag
    : public ModelBase
{
public:
    Untag();
    virtual ~Untag();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Untag members

    /// <summary>
    /// 标签\&quot;键\&quot;的标识符或名称。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 标签\&quot;键\&quot;对应的\&quot;值\&quot;。您可以将标签的值设置为空字符串，但不能设置为null。
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

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_Untag_H_
