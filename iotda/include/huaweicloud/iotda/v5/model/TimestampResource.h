
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_TimestampResource_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_TimestampResource_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 是否校验设备时间戳，若不为空则表示校验，如果设备连接参数（clientId、username）中包含时间戳建议开启校验。开启校验平台会对比设备携带时间戳与平台系统时间，若设备时间戳加一小时小于平台系统时间则校验失败。若想关闭校验则把value属性的值设置为空json:{}
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  TimestampResource
    : public ModelBase
{
public:
    TimestampResource();
    virtual ~TimestampResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TimestampResource members

    /// <summary>
    /// UNIX：表示为Unix时间戳秒级别长整数，FORMAT：表示为特定时间格式，需要在format字段中指定具体格式。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 时间日期格式。
    /// </summary>

    std::string getPattern() const;
    bool patternIsSet() const;
    void unsetpattern();
    void setPattern(const std::string& value);

    /// <summary>
    /// 设备连接时具体时间戳值，可使用FunctionDefinition下的函数编程时间戳的取值，若想关闭时间戳校验则该字段值设置为空json:{}。
    /// </summary>

    Object getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const Object& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string pattern_;
    bool patternIsSet_;
    Object value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_TimestampResource_H_
