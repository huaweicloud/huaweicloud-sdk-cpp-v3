
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlChangeSpecificationRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlChangeSpecificationRequest_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/MysqlResizeFlavor.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  MysqlChangeSpecificationRequest
    : public ModelBase
{
public:
    MysqlChangeSpecificationRequest();
    virtual ~MysqlChangeSpecificationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MysqlChangeSpecificationRequest members

    /// <summary>
    /// 
    /// </summary>

    MysqlResizeFlavor getResizeFlavor() const;
    bool resizeFlavorIsSet() const;
    void unsetresizeFlavor();
    void setResizeFlavor(const MysqlResizeFlavor& value);

    /// <summary>
    /// 变更包周期实例规格时可指定，表示是否自动从客户的账户中支付。  - true，为自动支付，默认该方式。 - false，为手动支付。
    /// </summary>

    std::string getIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(const std::string& value);


protected:
    MysqlResizeFlavor resizeFlavor_;
    bool resizeFlavorIsSet_;
    std::string isAutoPay_;
    bool isAutoPayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlChangeSpecificationRequest_H_
