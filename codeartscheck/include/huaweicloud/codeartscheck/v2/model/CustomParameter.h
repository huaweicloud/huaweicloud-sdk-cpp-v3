
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CustomParameter_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CustomParameter_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 自定义参数。 **取值范围：** 不涉及。
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  CustomParameter
    : public ModelBase
{
public:
    CustomParameter();
    virtual ~CustomParameter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CustomParameter members

    /// <summary>
    /// **参数解释：** 是否是私密参数。 **取值范围：** - true：私密参数。 - false：非私密参数。
    /// </summary>

    bool isIsPrivate() const;
    bool isPrivateIsSet() const;
    void unsetisPrivate();
    void setIsPrivate(bool value);

    /// <summary>
    /// **参数解释：** 自定义参数的key。 **取值范围：** 长度为[1~128]个字符。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 自定义参数的Value。 **取值范围：** 长度为[1~8192]个字符。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    bool isPrivate_;
    bool isPrivateIsSet_;
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

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CustomParameter_H_
