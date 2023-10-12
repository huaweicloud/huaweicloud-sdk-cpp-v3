
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_Rules_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_Rules_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  Rules
    : public ModelBase
{
public:
    Rules();
    virtual ~Rules();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Rules members

    /// <summary>
    /// 0：全部类型，表示匹配所有文件，默认值。  1：文件类型，表示按文件后缀匹配。  2：文件夹类型，表示按目录匹配。  3：文件全路径类型，表示按文件全路径匹配。 5：缓存首页。
    /// </summary>

    int32_t getRuleType() const;
    bool ruleTypeIsSet() const;
    void unsetruleType();
    void setRuleType(int32_t value);

    /// <summary>
    /// 缓存匹配设置。  当rule_type为0时，为空。  当rule_type为1时，为文件后缀，输入首字符为“.”，以“;”进行分隔，如.jpg;.zip;.exe，并且输入的文件名后缀总数不超过20个。 当rule_type为2时，为目录，输入要求以“/”作为首字符，以“;”进行分隔，如/test/folder01;/test/folder02，并且输入的目录路径总数不超过20个。 当rule_type为3时，为全路径，输入要求以“/”作为首字符，支持匹配指定目录下的具体文件，或者带通配符“\\*”的文件，如/test/index.html或/test/\\*.jpg。
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);

    /// <summary>
    /// 缓存时间。最大支持365天。
    /// </summary>

    int32_t getTtl() const;
    bool ttlIsSet() const;
    void unsetttl();
    void setTtl(int32_t value);

    /// <summary>
    /// 缓存时间单位。1：秒；2：分；3：小时；4：天。
    /// </summary>

    int32_t getTtlType() const;
    bool ttlTypeIsSet() const;
    void unsetttlType();
    void setTtlType(int32_t value);

    /// <summary>
    /// 此条配置的优先级, 默认值1，数值越大，优先级越高。取值范围为1-100，优先级不能相同。
    /// </summary>

    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);


protected:
    int32_t ruleType_;
    bool ruleTypeIsSet_;
    std::string content_;
    bool contentIsSet_;
    int32_t ttl_;
    bool ttlIsSet_;
    int32_t ttlType_;
    bool ttlTypeIsSet_;
    int32_t priority_;
    bool priorityIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_Rules_H_
