
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ResizeInstanceOption_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ResizeInstanceOption_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ResizeInstanceOption
    : public ModelBase
{
public:
    ResizeInstanceOption();
    virtual ~ResizeInstanceOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResizeInstanceOption members

    /// <summary>
    /// 变更至新规格的资源规格编码。获取方法请参见查询数据库规格中响应参数“flavors.spec_code”的值。
    /// </summary>

    std::string getTargetSpecCode() const;
    bool targetSpecCodeIsSet() const;
    void unsettargetSpecCode();
    void setTargetSpecCode(const std::string& value);


protected:
    std::string targetSpecCode_;
    bool targetSpecCodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ResizeInstanceOption_H_
