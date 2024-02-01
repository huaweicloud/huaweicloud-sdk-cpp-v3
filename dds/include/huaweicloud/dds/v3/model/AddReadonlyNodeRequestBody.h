
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_AddReadonlyNodeRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_AddReadonlyNodeRequestBody_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  AddReadonlyNodeRequestBody
    : public ModelBase
{
public:
    AddReadonlyNodeRequestBody();
    virtual ~AddReadonlyNodeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddReadonlyNodeRequestBody members

    /// <summary>
    /// 资源规格编码。获取方法请参见[查询数据库规格](x-wc://file&#x3D;zh-cn_topic_0000001321087266.xml)中参数“spec_code”的值。  示例：dds.mongodb.c6.xlarge.2.shard
    /// </summary>

    std::string getSpecCode() const;
    bool specCodeIsSet() const;
    void unsetspecCode();
    void setSpecCode(const std::string& value);

    /// <summary>
    /// 待新增只读节点个数。 取值范围：1-5。
    /// </summary>

    int32_t getNum() const;
    bool numIsSet() const;
    void unsetnum();
    void setNum(int32_t value);

    /// <summary>
    /// 同步延迟时间。取值范围：0~1200毫秒。默认取值为0。
    /// </summary>

    int32_t getDelay() const;
    bool delayIsSet() const;
    void unsetdelay();
    void setDelay(int32_t value);

    /// <summary>
    /// 新增包年包月实例的只读节点时可指定，表示是否自动从账户中支付，此字段不影响自动续订的支付方式。 - true，表示自动从账户中支付。 - false，表示手动从账户中支付，默认为该方式。
    /// </summary>

    bool isIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(bool value);


protected:
    std::string specCode_;
    bool specCodeIsSet_;
    int32_t num_;
    bool numIsSet_;
    int32_t delay_;
    bool delayIsSet_;
    bool isAutoPay_;
    bool isAutoPayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_AddReadonlyNodeRequestBody_H_
