
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_EIPSwitchStatusVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_EIPSwitchStatusVO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/FailedEipInfo.h>
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
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  EIPSwitchStatusVO
    : public ModelBase
{
public:
    EIPSwitchStatusVO();
    virtual ~EIPSwitchStatusVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EIPSwitchStatusVO members

    /// <summary>
    /// 防护对象id，是创建云防火墙后用于区分互联网边界防护和VPC边界防护的标志id，可通过调用[查询防火墙实例接口](ListFirewallDetail.xml)获得，通过返回值中的data.records.protect_objects.object_id（.表示各对象之间层级的区分）获得，type为0时，object_id为互联网边界防护对象ID，type为1时，object_id为VPC边界防护对象ID。此处仅取type为0的防护对象id，可通过data.records.protect_objects.type（.表示各对象之间层级的区分）获得
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// 修改eip防护状态失败状态列表，状态包括成功“successful”，失败“fail”
    /// </summary>

    std::vector<std::string>& getFailEipIdList();
    bool failEipIdListIsSet() const;
    void unsetfailEipIdList();
    void setFailEipIdList(const std::vector<std::string>& value);

    /// <summary>
    /// 修改eip防护状态失败信息列表
    /// </summary>

    std::vector<FailedEipInfo>& getFailEipList();
    bool failEipListIsSet() const;
    void unsetfailEipList();
    void setFailEipList(const std::vector<FailedEipInfo>& value);

    /// <summary>
    /// 防火墙ID，可通过[防火墙ID获取方式](cfw_02_0028.xml)获取
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string objectId_;
    bool objectIdIsSet_;
    std::vector<std::string> failEipIdList_;
    bool failEipIdListIsSet_;
    std::vector<FailedEipInfo> failEipList_;
    bool failEipListIsSet_;
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_EIPSwitchStatusVO_H_
