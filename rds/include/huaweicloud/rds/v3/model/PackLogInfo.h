
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_PackLogInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_PackLogInfo_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// binlog合并下载文件信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  PackLogInfo
    : public ModelBase
{
public:
    PackLogInfo();
    virtual ~PackLogInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PackLogInfo members

    /// <summary>
    /// **参数解释**：  文件唯一ID标识。  **约束限制**：  不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：  实例id。  **约束限制**：  不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  文件大小。  **约束限制**：  不涉及。
    /// </summary>

    double getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(double value);

    /// <summary>
    /// **参数解释**：  文件大小单位。  **约束限制**：  不涉及。
    /// </summary>

    std::string getSizeUnit() const;
    bool sizeUnitIsSet() const;
    void unsetsizeUnit();
    void setSizeUnit(const std::string& value);

    /// <summary>
    /// **参数解释**：  状态。  **约束限制**：  不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：  合并时间段起始时间戳。  **约束限制**：  不涉及。
    /// </summary>

    int64_t getQueryStartTime() const;
    bool queryStartTimeIsSet() const;
    void unsetqueryStartTime();
    void setQueryStartTime(int64_t value);

    /// <summary>
    /// **参数解释**：  合并时间段结束时间戳。  **约束限制**：  不涉及。
    /// </summary>

    int64_t getQueryEndTime() const;
    bool queryEndTimeIsSet() const;
    void unsetqueryEndTime();
    void setQueryEndTime(int64_t value);

    /// <summary>
    /// **参数解释**：  文件名。  **约束限制**：  不涉及。
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    double size_;
    bool sizeIsSet_;
    std::string sizeUnit_;
    bool sizeUnitIsSet_;
    std::string status_;
    bool statusIsSet_;
    int64_t queryStartTime_;
    bool queryStartTimeIsSet_;
    int64_t queryEndTime_;
    bool queryEndTimeIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_PackLogInfo_H_
