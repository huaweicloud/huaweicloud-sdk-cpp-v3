
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowPublicationResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowPublicationResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/ProgramResponseBase.h>
#include <huaweicloud/meeting/v1/model/PublishDeptResponseDTO.h>
#include <string>
#include <huaweicloud/meeting/v1/model/PublishDeviceResponseDTO.h>
#include <huaweicloud/meeting/v1/model/PublicationResponseBase.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowPublicationResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowPublicationResponse();
    virtual ~ShowPublicationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPublicationResponse members

    /// <summary>
    /// 发布ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 更新者。
    /// </summary>

    std::string getLastUpdatedBy() const;
    bool lastUpdatedByIsSet() const;
    void unsetlastUpdatedBy();
    void setLastUpdatedBy(const std::string& value);

    /// <summary>
    /// 创建时间。
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 更新时间。
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);

    /// <summary>
    /// 发布名称。
    /// </summary>

    std::string getPublishName() const;
    bool publishNameIsSet() const;
    void unsetpublishName();
    void setPublishName(const std::string& value);

    /// <summary>
    /// 发布范围。
    /// </summary>

    std::string getPublishScope() const;
    bool publishScopeIsSet() const;
    void unsetpublishScope();
    void setPublishScope(const std::string& value);

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
    /// 根据当前时间确定发布状态。 - NOT_ONLINE-未上线 - PUBLISHING-发布中 - ALREADY_OFFLINE-已下线
    /// </summary>

    std::string getPublishStatus() const;
    bool publishStatusIsSet() const;
    void unsetpublishStatus();
    void setPublishStatus(const std::string& value);

    /// <summary>
    /// 发布节目ID列表。
    /// </summary>

    std::vector<ProgramResponseBase>& getProgramList();
    bool programListIsSet() const;
    void unsetprogramList();
    void setProgramList(const std::vector<ProgramResponseBase>& value);

    /// <summary>
    /// 发布部门列表。
    /// </summary>

    std::vector<PublishDeptResponseDTO>& getDeptList();
    bool deptListIsSet() const;
    void unsetdeptList();
    void setDeptList(const std::vector<PublishDeptResponseDTO>& value);

    /// <summary>
    /// 发布设备列表。
    /// </summary>

    std::vector<PublishDeviceResponseDTO>& getDeviceList();
    bool deviceListIsSet() const;
    void unsetdeviceList();
    void setDeviceList(const std::vector<PublishDeviceResponseDTO>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string lastUpdatedBy_;
    bool lastUpdatedByIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;
    std::string publishName_;
    bool publishNameIsSet_;
    std::string publishScope_;
    bool publishScopeIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::string publishStatus_;
    bool publishStatusIsSet_;
    std::vector<ProgramResponseBase> programList_;
    bool programListIsSet_;
    std::vector<PublishDeptResponseDTO> deptList_;
    bool deptListIsSet_;
    std::vector<PublishDeviceResponseDTO> deviceList_;
    bool deviceListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowPublicationResponse_H_
