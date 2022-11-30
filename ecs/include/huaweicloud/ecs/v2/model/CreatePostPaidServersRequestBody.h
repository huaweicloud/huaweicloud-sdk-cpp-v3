
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_CreatePostPaidServersRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_CreatePostPaidServersRequestBody_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/PostPaidServer.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  CreatePostPaidServersRequestBody
    : public ModelBase
{
public:
    CreatePostPaidServersRequestBody();
    virtual ~CreatePostPaidServersRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreatePostPaidServersRequestBody members

    /// <summary>
    /// 是否只预检此次请求。  true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数、请求格式等。 如果检查不通过，则返回对应错误。 如果检查通过，则返回202状态码。 false：发送正常请求，通过检查后并且执行创建云服务器请求。
    /// </summary>

    bool isDryRun() const;
    bool dryRunIsSet() const;
    void unsetdryRun();
    void setDryRun(bool value);

    /// <summary>
    /// 
    /// </summary>

    PostPaidServer getServer() const;
    bool serverIsSet() const;
    void unsetserver();
    void setServer(const PostPaidServer& value);


protected:
    bool dryRun_;
    bool dryRunIsSet_;
    PostPaidServer server_;
    bool serverIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_CreatePostPaidServersRequestBody_H_
