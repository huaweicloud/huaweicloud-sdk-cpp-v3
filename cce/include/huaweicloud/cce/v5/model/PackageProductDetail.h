
#ifndef HUAWEICLOUD_SDK_CCE_V5_MODEL_PackageProductDetail_H_
#define HUAWEICLOUD_SDK_CCE_V5_MODEL_PackageProductDetail_H_


#include <huaweicloud/cce/v5/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 套餐包详情。
/// </summary>
class HUAWEICLOUD_CCE_V5_EXPORT  PackageProductDetail
    : public ModelBase
{
public:
    PackageProductDetail();
    virtual ~PackageProductDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PackageProductDetail members

    /// <summary>
    /// 套餐包名称。
    /// </summary>

    std::string getProductName() const;
    bool productNameIsSet() const;
    void unsetproductName();
    void setProductName(const std::string& value);

    /// <summary>
    /// 套餐包规格。
    /// </summary>

    std::string getResourceSpecCode() const;
    bool resourceSpecCodeIsSet() const;
    void unsetresourceSpecCode();
    void setResourceSpecCode(const std::string& value);

    /// <summary>
    /// 周期类型，如month（表示月包）、year（表示年包）。
    /// </summary>

    std::string getPeriodType() const;
    bool periodTypeIsSet() const;
    void unsetperiodType();
    void setPeriodType(const std::string& value);

    /// <summary>
    /// 实例类型，如general-computing。
    /// </summary>

    std::string getInstanceType() const;
    bool instanceTypeIsSet() const;
    void unsetinstanceType();
    void setInstanceType(const std::string& value);


protected:
    std::string productName_;
    bool productNameIsSet_;
    std::string resourceSpecCode_;
    bool resourceSpecCodeIsSet_;
    std::string periodType_;
    bool periodTypeIsSet_;
    std::string instanceType_;
    bool instanceTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V5_MODEL_PackageProductDetail_H_
