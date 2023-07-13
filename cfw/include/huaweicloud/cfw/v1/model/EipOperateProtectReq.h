
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_EipOperateProtectReq_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_EipOperateProtectReq_H_

#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/EipOperateProtectReq_ip_infos.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// EIP操作防护请求体
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  EipOperateProtectReq
    : public ModelBase
{
public:
    EipOperateProtectReq();
    virtual ~EipOperateProtectReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// EipOperateProtectReq members

    /// <summary>
    /// 防护对象id，是创建云防火墙后用于区分互联网边界防护和VPC边界防护的标志id，可通过调用查询防火墙实例接口获得，注意type为0的为互联网边界防护对象id，type为1的为VPC边界防护对象id。具体可参考APIExlorer和帮助中心FAQ。
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// EIP状态，0表示防护中，1表示未防护
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// EIP信息列表
    /// </summary>

    std::vector<EipOperateProtectReq_ip_infos>& getIpInfos();
    bool ipInfosIsSet() const;
    void unsetipInfos();
    void setIpInfos(const std::vector<EipOperateProtectReq_ip_infos>& value);


protected:
    std::string objectId_;
    bool objectIdIsSet_;
    int32_t status_;
    bool statusIsSet_;
    std::vector<EipOperateProtectReq_ip_infos> ipInfos_;
    bool ipInfosIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_EipOperateProtectReq_H_
