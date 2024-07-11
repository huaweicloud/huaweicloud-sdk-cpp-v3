
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_CheckWhetherHostGroupCanBeCreatedResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_CheckWhetherHostGroupCanBeCreatedResponse_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  CheckWhetherHostGroupCanBeCreatedResponse
    : public ModelBase, public HttpResponse
{
public:
    CheckWhetherHostGroupCanBeCreatedResponse();
    virtual ~CheckWhetherHostGroupCanBeCreatedResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckWhetherHostGroupCanBeCreatedResponse members

    /// <summary>
    /// 是否有创建主机集群权限，true 有权限 false 无权限
    /// </summary>

    bool isCanCreated() const;
    bool canCreatedIsSet() const;
    void unsetcanCreated();
    void setCanCreated(bool value);


protected:
    bool canCreated_;
    bool canCreatedIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_CheckWhetherHostGroupCanBeCreatedResponse_H_
