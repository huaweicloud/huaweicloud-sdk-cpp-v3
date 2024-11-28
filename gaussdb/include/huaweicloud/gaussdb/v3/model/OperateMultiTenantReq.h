
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_OperateMultiTenantReq_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_OperateMultiTenantReq_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 开启/关闭多租特性请求体
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  OperateMultiTenantReq
    : public ModelBase
{
public:
    OperateMultiTenantReq();
    virtual ~OperateMultiTenantReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OperateMultiTenantReq members

    /// <summary>
    /// 实例多租特性开关。 - true:开启 - false:关闭。
    /// </summary>

    bool isMultiTenantSwitch() const;
    bool multiTenantSwitchIsSet() const;
    void unsetmultiTenantSwitch();
    void setMultiTenantSwitch(bool value);


protected:
    bool multiTenantSwitch_;
    bool multiTenantSwitchIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_OperateMultiTenantReq_H_
