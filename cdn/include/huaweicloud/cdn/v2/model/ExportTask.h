
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ExportTask_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ExportTask_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 导出任务
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ExportTask
    : public ModelBase
{
public:
    ExportTask();
    virtual ~ExportTask();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExportTask members

    /// <summary>
    /// 导出任务id
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 导出任务名称
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);

    /// <summary>
    /// **参数解释：** 应用模板状态（域名粒度） **约束限制：** 不涉及 **取值范围：** - success: 应用模板成功 - fail: 应用模板失败 **默认取值：** 不涉及
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 下载链接
    /// </summary>

    std::string getDownloadLink() const;
    bool downloadLinkIsSet() const;
    void unsetdownloadLink();
    void setDownloadLink(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 最近更新时间
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string downloadLink_;
    bool downloadLinkIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ExportTask_H_
