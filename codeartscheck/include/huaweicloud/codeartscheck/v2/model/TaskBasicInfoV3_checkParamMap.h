
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_TaskBasicInfoV3_checkParamMap_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_TaskBasicInfoV3_checkParamMap_H_


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
/// **参数解释：** 自定义参数列表checkParamList的map格式，比如含有自定义参数key为param1，值为value1，则checkParamMap含有字段param1，值为value1。
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  TaskBasicInfoV3_checkParamMap
    : public ModelBase
{
public:
    TaskBasicInfoV3_checkParamMap();
    virtual ~TaskBasicInfoV3_checkParamMap();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskBasicInfoV3_checkParamMap members

    /// <summary>
    /// **参数解释：** 字段的name为自定义参数的Key，字段的值为自定义参数的Value。 **取值范围：** 长度为[1~8192]个字符。
    /// </summary>

    std::string getParam1() const;
    bool param1IsSet() const;
    void unsetparam1();
    void setParam1(const std::string& value);

    /// <summary>
    /// **参数解释：** 字段的name为自定义参数的Key，字段的值为自定义参数的Value。 **取值范围：** 长度为[1~8192]个字符。
    /// </summary>

    std::string getParam2() const;
    bool param2IsSet() const;
    void unsetparam2();
    void setParam2(const std::string& value);


protected:
    std::string param1_;
    bool param1IsSet_;
    std::string param2_;
    bool param2IsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_TaskBasicInfoV3_checkParamMap_H_
