
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_PublicationRequestBase_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_PublicationRequestBase_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 发布信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  PublicationRequestBase
    : public ModelBase
{
public:
    PublicationRequestBase();
    virtual ~PublicationRequestBase();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PublicationRequestBase members

    /// <summary>
    /// 发布名称。
    /// </summary>

    std::string getPublishName() const;
    bool publishNameIsSet() const;
    void unsetpublishName();
    void setPublishName(const std::string& value);

    /// <summary>
    /// 开始时间。
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 结束时间。
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 发布到部门编码列表。
    /// </summary>

    std::vector<std::string>& getDeptList();
    bool deptListIsSet() const;
    void unsetdeptList();
    void setDeptList(const std::vector<std::string>& value);

    /// <summary>
    /// 发布到设备用户ID列表。
    /// </summary>

    std::vector<std::string>& getDeviceList();
    bool deviceListIsSet() const;
    void unsetdeviceList();
    void setDeviceList(const std::vector<std::string>& value);


protected:
    std::string publishName_;
    bool publishNameIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::vector<std::string> deptList_;
    bool deptListIsSet_;
    std::vector<std::string> deviceList_;
    bool deviceListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_PublicationRequestBase_H_
