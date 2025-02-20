
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_TimelineInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_TimelineInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 时间轴信息。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  TimelineInfo
    : public ModelBase
{
public:
    TimelineInfo();
    virtual ~TimelineInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TimelineInfo members

    /// <summary>
    /// 时间轴名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 操作时间。
    /// </summary>

    std::string getOperationTime() const;
    bool operationTimeIsSet() const;
    void unsetoperationTime();
    void setOperationTime(const std::string& value);

    /// <summary>
    /// 用户名称。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string operationTime_;
    bool operationTimeIsSet_;
    std::string userName_;
    bool userNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_TimelineInfo_H_
