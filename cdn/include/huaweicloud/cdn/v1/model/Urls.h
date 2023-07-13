
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_Urls_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_Urls_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 具体url信息。
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  Urls
    : public ModelBase
{
public:
    Urls();
    virtual ~Urls();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Urls members

    /// <summary>
    /// urlid
    /// </summary>

    int64_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int64_t value);

    /// <summary>
    /// url具体值。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// url状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 任务类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 任务id。
    /// </summary>

    int64_t getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(int64_t value);

    /// <summary>
    /// 修改时间戳（毫秒）。
    /// </summary>

    int64_t getModifyTime() const;
    bool modifyTimeIsSet() const;
    void unsetmodifyTime();
    void setModifyTime(int64_t value);

    /// <summary>
    /// 创建时间戳（毫秒）。
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 文件类型，目录还是文件。
    /// </summary>

    std::string getFileType() const;
    bool fileTypeIsSet() const;
    void unsetfileType();
    void setFileType(const std::string& value);


protected:
    int64_t id_;
    bool idIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string type_;
    bool typeIsSet_;
    int64_t taskId_;
    bool taskIdIsSet_;
    int64_t modifyTime_;
    bool modifyTimeIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    std::string fileType_;
    bool fileTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_Urls_H_
