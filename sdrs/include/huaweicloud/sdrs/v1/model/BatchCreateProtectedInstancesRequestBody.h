
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_BatchCreateProtectedInstancesRequestBody_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_BatchCreateProtectedInstancesRequestBody_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/BatchCreateProtectedInstancesRequestParams.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量创建保护实例请求数据接口
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  BatchCreateProtectedInstancesRequestBody
    : public ModelBase
{
public:
    BatchCreateProtectedInstancesRequestBody();
    virtual ~BatchCreateProtectedInstancesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateProtectedInstancesRequestBody members

    /// <summary>
    /// 
    /// </summary>

    BatchCreateProtectedInstancesRequestParams getProtectedInstances() const;
    bool protectedInstancesIsSet() const;
    void unsetprotectedInstances();
    void setProtectedInstances(const BatchCreateProtectedInstancesRequestParams& value);


protected:
    BatchCreateProtectedInstancesRequestParams protectedInstances_;
    bool protectedInstancesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_BatchCreateProtectedInstancesRequestBody_H_
