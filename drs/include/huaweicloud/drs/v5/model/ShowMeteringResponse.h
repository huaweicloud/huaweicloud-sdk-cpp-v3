
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowMeteringResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowMeteringResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/ProductInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowMeteringResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowMeteringResponse();
    virtual ~ShowMeteringResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowMeteringResponse members

    /// <summary>
    /// 资源信息列表。
    /// </summary>

    std::vector<ProductInfo>& getProductInfoList();
    bool productInfoListIsSet() const;
    void unsetproductInfoList();
    void setProductInfoList(const std::vector<ProductInfo>& value);


protected:
    std::vector<ProductInfo> productInfoList_;
    bool productInfoListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowMeteringResponse_H_
