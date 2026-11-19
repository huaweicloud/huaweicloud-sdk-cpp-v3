
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListAvailableFlavorsDetailResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListAvailableFlavorsDetailResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/FlavorCategoryDetail.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListAvailableFlavorsDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAvailableFlavorsDetailResponse();
    virtual ~ListAvailableFlavorsDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAvailableFlavorsDetailResponse members

    /// <summary>
    /// 
    /// </summary>

    FlavorCategoryDetail getFlavorCategory() const;
    bool flavorCategoryIsSet() const;
    void unsetflavorCategory();
    void setFlavorCategory(const FlavorCategoryDetail& value);


protected:
    FlavorCategoryDetail flavorCategory_;
    bool flavorCategoryIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListAvailableFlavorsDetailResponse_H_
