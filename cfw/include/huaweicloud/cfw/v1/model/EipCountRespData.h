
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_EipCountRespData_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_EipCountRespData_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// EIP 数量查询反馈
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  EipCountRespData
    : public ModelBase
{
public:
    EipCountRespData();
    virtual ~EipCountRespData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EipCountRespData members

    /// <summary>
    /// 总体EIP数
    /// </summary>

    int32_t getEipTotal() const;
    bool eipTotalIsSet() const;
    void unseteipTotal();
    void setEipTotal(int32_t value);

    /// <summary>
    /// 该账号下所有墙防护EIP总数量
    /// </summary>

    int32_t getEipProtected() const;
    bool eipProtectedIsSet() const;
    void unseteipProtected();
    void setEipProtected(int32_t value);

    /// <summary>
    /// 当前防火墙防护EIP数量
    /// </summary>

    int32_t getEipProtectedSelf() const;
    bool eipProtectedSelfIsSet() const;
    void unseteipProtectedSelf();
    void setEipProtectedSelf(int32_t value);


protected:
    int32_t eipTotal_;
    bool eipTotalIsSet_;
    int32_t eipProtected_;
    bool eipProtectedIsSet_;
    int32_t eipProtectedSelf_;
    bool eipProtectedSelfIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_EipCountRespData_H_
