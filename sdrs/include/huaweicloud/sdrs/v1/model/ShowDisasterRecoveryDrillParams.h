
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowDisasterRecoveryDrillParams_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowDisasterRecoveryDrillParams_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/DrillServerParams.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询容灾演练数据结构
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ShowDisasterRecoveryDrillParams
    : public ModelBase
{
public:
    ShowDisasterRecoveryDrillParams();
    virtual ~ShowDisasterRecoveryDrillParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowDisasterRecoveryDrillParams members

    /// <summary>
    /// 容灾演练的ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 容灾演练的名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 容灾演练的状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 演练虚拟私有云id。
    /// </summary>

    std::string getDrillVpcId() const;
    bool drillVpcIdIsSet() const;
    void unsetdrillVpcId();
    void setDrillVpcId(const std::string& value);

    /// <summary>
    /// 创建时间。默认格式为：\&quot;yyyy-MM-dd HH:mm:ss.SSS\&quot;，例：\&quot;2019-04-01 12:00:00.000\&quot;。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 更新时间。默认格式为：\&quot;yyyy-MM-dd HH:mm:ss.SSS\&quot;，例：\&quot;2019-04-01 12:00:00.000\&quot;。
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 保护组的ID。
    /// </summary>

    std::string getServerGroupId() const;
    bool serverGroupIdIsSet() const;
    void unsetserverGroupId();
    void setServerGroupId(const std::string& value);

    /// <summary>
    /// 演练云服务器列表。
    /// </summary>

    std::vector<DrillServerParams>& getDrillServers();
    bool drillServersIsSet() const;
    void unsetdrillServers();
    void setDrillServers(const std::vector<DrillServerParams>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string drillVpcId_;
    bool drillVpcIdIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string serverGroupId_;
    bool serverGroupIdIsSet_;
    std::vector<DrillServerParams> drillServers_;
    bool drillServersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowDisasterRecoveryDrillParams_H_
