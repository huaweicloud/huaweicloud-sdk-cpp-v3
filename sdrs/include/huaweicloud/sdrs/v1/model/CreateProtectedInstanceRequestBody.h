
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_CreateProtectedInstanceRequestBody_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_CreateProtectedInstanceRequestBody_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/CreateProtectedInstanceRequestParams.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建保护实例请求体
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  CreateProtectedInstanceRequestBody
    : public ModelBase
{
public:
    CreateProtectedInstanceRequestBody();
    virtual ~CreateProtectedInstanceRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateProtectedInstanceRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreateProtectedInstanceRequestParams getProtectedInstance() const;
    bool protectedInstanceIsSet() const;
    void unsetprotectedInstance();
    void setProtectedInstance(const CreateProtectedInstanceRequestParams& value);


protected:
    CreateProtectedInstanceRequestParams protectedInstance_;
    bool protectedInstanceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_CreateProtectedInstanceRequestBody_H_
