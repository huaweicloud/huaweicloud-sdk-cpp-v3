
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchUpdateServersNameRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchUpdateServersNameRequestBody_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/ServerId.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  BatchUpdateServersNameRequestBody
    : public ModelBase
{
public:
    BatchUpdateServersNameRequestBody();
    virtual ~BatchUpdateServersNameRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpdateServersNameRequestBody members

    /// <summary>
    /// 弹性云服务器修改后的名称。  规则如下：  只能允许包含中文汉字、大小写字母、数字及 \&quot;-\&quot; 、 \&quot;_\&quot; 、\&quot;.\&quot; 等特殊字符，长度限制在64个字符以内。  批量修改弹性云服务器名称时，名不会自动按序增加数字尾缀。例如： 三个ECS的名称为test_0001，test_0002，test_0003，批量修改云服务器名称为develop，则修改后3个云服务器名称为develop，develop，develop。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 是否只预检此次请求。  - true：发送检查请求，不会修改云服务器名称。检查项包括是否填写了必需参数、请求格式、业务限制。如果检查不通过，则返回对应错误。如果检查通过，则返回正常响应信息。 - false：发送正常请求，通过检查后并且执行修改云服务器名称的请求。  默认值：false
    /// </summary>

    bool isDryRun() const;
    bool dryRunIsSet() const;
    void unsetdryRun();
    void setDryRun(bool value);

    /// <summary>
    /// 待修改的弹性云服务器ID信息。
    /// </summary>

    std::vector<ServerId>& getServers();
    bool serversIsSet() const;
    void unsetservers();
    void setServers(const std::vector<ServerId>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    bool dryRun_;
    bool dryRunIsSet_;
    std::vector<ServerId> servers_;
    bool serversIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchUpdateServersNameRequestBody_H_
