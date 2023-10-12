
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_DomainMigrateProjectStatus_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_DomainMigrateProjectStatus_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  DomainMigrateProjectStatus
    : public ModelBase
{
public:
    DomainMigrateProjectStatus();
    virtual ~DomainMigrateProjectStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DomainMigrateProjectStatus members

    /// <summary>
    /// 迁移状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 项目名称
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);

    /// <summary>
    /// 区域ID
    /// </summary>

    std::string getRegionId() const;
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::string& value);

    /// <summary>
    /// 迁移进度
    /// </summary>

    int32_t getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(int32_t value);

    /// <summary>
    /// 失败错误码（仅当项目状态为失败时才有该参数）。
    /// </summary>

    int32_t getFailCode() const;
    bool failCodeIsSet() const;
    void unsetfailCode();
    void setFailCode(int32_t value);

    /// <summary>
    /// 失败原因（仅当项目状态为失败时才有该参数）。
    /// </summary>

    std::string getFailReason() const;
    bool failReasonIsSet() const;
    void unsetfailReason();
    void setFailReason(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    std::string regionId_;
    bool regionIdIsSet_;
    int32_t progress_;
    bool progressIsSet_;
    int32_t failCode_;
    bool failCodeIsSet_;
    std::string failReason_;
    bool failReasonIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_DomainMigrateProjectStatus_H_
