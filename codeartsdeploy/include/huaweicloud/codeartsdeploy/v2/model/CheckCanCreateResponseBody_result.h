
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_CheckCanCreateResponseBody_result_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_CheckCanCreateResponseBody_result_H_


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
/// 是否具有创建应用的权限结果
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  CheckCanCreateResponseBody_result
    : public ModelBase
{
public:
    CheckCanCreateResponseBody_result();
    virtual ~CheckCanCreateResponseBody_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckCanCreateResponseBody_result members

    /// <summary>
    /// 是否具有创建应用的权限
    /// </summary>

    bool isCreatable() const;
    bool creatableIsSet() const;
    void unsetcreatable();
    void setCreatable(bool value);


protected:
    bool creatable_;
    bool creatableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_CheckCanCreateResponseBody_result_H_
