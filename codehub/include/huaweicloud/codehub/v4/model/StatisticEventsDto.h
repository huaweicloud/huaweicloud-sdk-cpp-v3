
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_StatisticEventsDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_StatisticEventsDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  StatisticEventsDto
    : public ModelBase
{
public:
    StatisticEventsDto();
    virtual ~StatisticEventsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StatisticEventsDto members

    /// <summary>
    /// **参数解释：** 统计ID。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 用户ID。
    /// </summary>

    int32_t getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(int32_t value);

    /// <summary>
    /// **参数解释：** 仓库ID。
    /// </summary>

    int32_t getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(int32_t value);

    /// <summary>
    /// **参数解释：** 分支名。 **取值范围：** 最小1个字节，最大200字节
    /// </summary>

    std::string getBranch() const;
    bool branchIsSet() const;
    void unsetbranch();
    void setBranch(const std::string& value);

    /// <summary>
    /// **参数解释：** 统计状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 统计时间。
    /// </summary>

    std::string getStatDate() const;
    bool statDateIsSet() const;
    void unsetstatDate();
    void setStatDate(const std::string& value);

    /// <summary>
    /// **参数解释：** 统计创建时间。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 统计更新时间。
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    int32_t userId_;
    bool userIdIsSet_;
    int32_t projectId_;
    bool projectIdIsSet_;
    std::string branch_;
    bool branchIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string statDate_;
    bool statDateIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_StatisticEventsDto_H_
