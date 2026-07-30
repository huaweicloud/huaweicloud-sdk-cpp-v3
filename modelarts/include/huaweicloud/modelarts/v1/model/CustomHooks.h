
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CustomHooks_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CustomHooks_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ContainerHooks.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 自定义启动脚本钩子配置。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CustomHooks
    : public ModelBase
{
public:
    CustomHooks();
    virtual ~CustomHooks();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CustomHooks members

    /// <summary>
    /// 
    /// </summary>

    ContainerHooks getContainerHooks() const;
    bool containerHooksIsSet() const;
    void unsetcontainerHooks();
    void setContainerHooks(const ContainerHooks& value);


protected:
    ContainerHooks containerHooks_;
    bool containerHooksIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CustomHooks_H_
