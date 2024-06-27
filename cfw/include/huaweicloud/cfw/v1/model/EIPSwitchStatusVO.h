
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_EIPSwitchStatusVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_EIPSwitchStatusVO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
    /// 防护对象id，是创建云防火墙后用于区分互联网边界防护和VPC边界防护的标志id，可通过调用[查询防火墙实例接口](ListFirewallDetail.xml)，注意type为0的为互联网边界防护对象id，type为1的为VPC边界防护对象id。
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// 修改eip防护状态失败列表。
    /// </summary>

    std::vector<std::string>& getFailEipIdList();
    bool failEipIdListIsSet() const;
    void unsetfailEipIdList();
    void setFailEipIdList(const std::vector<std::string>& value);

    /// <summary>
    /// ID
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
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_EIPSwitchStatusVO_H_
