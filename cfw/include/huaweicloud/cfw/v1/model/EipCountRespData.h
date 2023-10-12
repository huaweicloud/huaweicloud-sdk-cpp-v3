
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_EipCountRespData_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_EipCountRespData_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
    /// 防护对象id，是创建云防火墙后用于区分互联网边界防护和VPC边界防护的标志id，可通过调用查询防火墙实例接口获得，注意type为0的为互联网边界防护对象id，type为1的为VPC边界防护对象id。具体可参考APIExlorer和帮助中心FAQ。
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// EIP总数
    /// </summary>

    int32_t getEipTotal() const;
    bool eipTotalIsSet() const;
    void unseteipTotal();
    void setEipTotal(int32_t value);

    /// <summary>
    /// EIP防护数
    /// </summary>

    int32_t getEipProtected() const;
    bool eipProtectedIsSet() const;
    void unseteipProtected();
    void setEipProtected(int32_t value);


protected:
    std::string objectId_;
    bool objectIdIsSet_;
    int32_t eipTotal_;
    bool eipTotalIsSet_;
    int32_t eipProtected_;
    bool eipProtectedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_EipCountRespData_H_
