
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_PublicationResponseBase_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_PublicationResponseBase_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 发布响应信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  PublicationResponseBase
    : public ModelBase
{
public:
    PublicationResponseBase();
    virtual ~PublicationResponseBase();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PublicationResponseBase members

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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_PublicationResponseBase_H_
