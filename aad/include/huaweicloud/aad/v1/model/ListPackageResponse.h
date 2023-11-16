
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_ListPackageResponse_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_ListPackageResponse_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v1/model/PackageResponse.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  ListPackageResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPackageResponse();
    virtual ~ListPackageResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPackageResponse members

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 数据
    /// </summary>

    std::vector<PackageResponse>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<PackageResponse>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<PackageResponse> items_;
    bool itemsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_ListPackageResponse_H_
