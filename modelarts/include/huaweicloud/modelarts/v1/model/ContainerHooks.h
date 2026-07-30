
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ContainerHooks_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ContainerHooks_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/Config.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ContainerHooks
    : public ModelBase
{
public:
    ContainerHooks();
    virtual ~ContainerHooks();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ContainerHooks members

    /// <summary>
    /// 
    /// </summary>

    Config getPostStart() const;
    bool postStartIsSet() const;
    void unsetpostStart();
    void setPostStart(const Config& value);

    /// <summary>
    /// 
    /// </summary>

    Config getPreStart() const;
    bool preStartIsSet() const;
    void unsetpreStart();
    void setPreStart(const Config& value);


protected:
    Config postStart_;
    bool postStartIsSet_;
    Config preStart_;
    bool preStartIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ContainerHooks_H_
