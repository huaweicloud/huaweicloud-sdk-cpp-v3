
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_BaseJobDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_BaseJobDto_H_


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
/// 任务详情
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  BaseJobDto
    : public ModelBase
{
public:
    BaseJobDto();
    virtual ~BaseJobDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BaseJobDto members

    /// <summary>
    /// 任务ID
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 提交ID
    /// </summary>

    std::string getSha() const;
    bool shaIsSet() const;
    void unsetsha();
    void setSha(const std::string& value);

    /// <summary>
    /// 分支
    /// </summary>

    std::string getRef() const;
    bool refIsSet() const;
    void unsetref();
    void setRef(const std::string& value);

    /// <summary>
    /// 阶段状态, pending为排队，running为运行中，success为成功，failed为失败，canceled为取消，skipped为跳过，timedout为超时
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 任务名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 任务链接
    /// </summary>

    std::string getTargetUrl() const;
    bool targetUrlIsSet() const;
    void unsettargetUrl();
    void setTargetUrl(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 开始时间
    /// </summary>

    std::string getStartedAt() const;
    bool startedAtIsSet() const;
    void unsetstartedAt();
    void setStartedAt(const std::string& value);

    /// <summary>
    /// 结束时间
    /// </summary>

    std::string getFinishedAt() const;
    bool finishedAtIsSet() const;
    void unsetfinishedAt();
    void setFinishedAt(const std::string& value);

    /// <summary>
    /// 任务在构建系统中的ID
    /// </summary>

    std::string getThirdBuildId() const;
    bool thirdBuildIdIsSet() const;
    void unsetthirdBuildId();
    void setThirdBuildId(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string sha_;
    bool shaIsSet_;
    std::string ref_;
    bool refIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string targetUrl_;
    bool targetUrlIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string startedAt_;
    bool startedAtIsSet_;
    std::string finishedAt_;
    bool finishedAtIsSet_;
    std::string thirdBuildId_;
    bool thirdBuildIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_BaseJobDto_H_
