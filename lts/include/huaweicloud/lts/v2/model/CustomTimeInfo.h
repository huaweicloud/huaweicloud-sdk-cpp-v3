
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CustomTimeInfo_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CustomTimeInfo_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  CustomTimeInfo
    : public ModelBase
{
public:
    CustomTimeInfo();
    virtual ~CustomTimeInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CustomTimeInfo members

    /// <summary>
    /// **参数解释：** 是否开启自定义时间字段。 **取值范围：** - true - fasle
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);

    /// <summary>
    /// **参数解释：** 从demoField中选取的作为日志系统时间的字段名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 从demoField中选取的作为日志系统时间的字段内容示例。 **取值范围：** 不涉及。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// **参数解释：** 用于解析字段为时间类型的时间格式参数。 **取值范围：** 不涉及。   
    /// </summary>

    std::string getTimeFormat() const;
    bool timeFormatIsSet() const;
    void unsettimeFormat();
    void setTimeFormat(const std::string& value);


protected:
    bool enable_;
    bool enableIsSet_;
    std::string key_;
    bool keyIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string timeFormat_;
    bool timeFormatIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CustomTimeInfo_H_
