
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListFlavorInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListFlavorInfo_H_

#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 规格信息。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListFlavorInfo
    : public ModelBase
{
public:
    ListFlavorInfo();
    virtual ~ListFlavorInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListFlavorInfo members

    /// <summary>
    /// cpu核数。
    /// </summary>

    int32_t getVcpu() const;
    bool vcpuIsSet() const;
    void unsetvcpu();
    void setVcpu(int32_t value);

    /// <summary>
    /// 内存大小。
    /// </summary>

    int32_t getMem() const;
    bool memIsSet() const;
    void unsetmem();
    void setMem(int32_t value);


protected:
    int32_t vcpu_;
    bool vcpuIsSet_;
    int32_t mem_;
    bool memIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListFlavorInfo_H_
