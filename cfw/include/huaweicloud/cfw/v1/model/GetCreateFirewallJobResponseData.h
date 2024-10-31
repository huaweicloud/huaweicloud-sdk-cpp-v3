
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_GetCreateFirewallJobResponseData_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_GetCreateFirewallJobResponseData_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

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
class HUAWEICLOUD_CFW_V1_EXPORT  GetCreateFirewallJobResponseData
    : public ModelBase
{
public:
    GetCreateFirewallJobResponseData();
    virtual ~GetCreateFirewallJobResponseData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetCreateFirewallJobResponseData members

    /// <summary>
    /// 创建按需防火墙任务ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 任务执行状态，用于向客户显示创建防火墙是否成功。  取值：  值为“Running”，表示任务正在执行。  值为“Success”，表示任务执行成功。  值为“Failed”，表示任务执行失败。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 创建时间，格式为“yyyy-mm-ddThh:mm:ssZ”。  其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。
    /// </summary>

    utility::datetime getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const utility::datetime& value);

    /// <summary>
    /// 结束时间，格式为“yyyy-mm-ddThh:mm:ssZ”。  其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。
    /// </summary>

    utility::datetime getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const utility::datetime& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string status_;
    bool statusIsSet_;
    utility::datetime beginTime_;
    bool beginTimeIsSet_;
    utility::datetime endTime_;
    bool endTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_GetCreateFirewallJobResponseData_H_
