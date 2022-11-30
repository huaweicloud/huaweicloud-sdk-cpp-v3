
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ResizeProtectedInstanceRequestBody_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ResizeProtectedInstanceRequestBody_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/ResizeProtectedInstanceRequestParams.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 保护实例变更规格请求体
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ResizeProtectedInstanceRequestBody
    : public ModelBase
{
public:
    ResizeProtectedInstanceRequestBody();
    virtual ~ResizeProtectedInstanceRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ResizeProtectedInstanceRequestBody members

    /// <summary>
    /// 
    /// </summary>

    ResizeProtectedInstanceRequestParams getResize() const;
    bool resizeIsSet() const;
    void unsetresize();
    void setResize(const ResizeProtectedInstanceRequestParams& value);


protected:
    ResizeProtectedInstanceRequestParams resize_;
    bool resizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ResizeProtectedInstanceRequestBody_H_
