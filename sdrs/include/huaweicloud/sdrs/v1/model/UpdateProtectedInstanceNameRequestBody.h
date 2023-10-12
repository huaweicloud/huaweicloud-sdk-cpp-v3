
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_UpdateProtectedInstanceNameRequestBody_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_UpdateProtectedInstanceNameRequestBody_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/UpdateProtectedInstanceNameRequestParams.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新保护实例名称请求体
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  UpdateProtectedInstanceNameRequestBody
    : public ModelBase
{
public:
    UpdateProtectedInstanceNameRequestBody();
    virtual ~UpdateProtectedInstanceNameRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateProtectedInstanceNameRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpdateProtectedInstanceNameRequestParams getProtectedInstance() const;
    bool protectedInstanceIsSet() const;
    void unsetprotectedInstance();
    void setProtectedInstance(const UpdateProtectedInstanceNameRequestParams& value);


protected:
    UpdateProtectedInstanceNameRequestParams protectedInstance_;
    bool protectedInstanceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_UpdateProtectedInstanceNameRequestBody_H_
