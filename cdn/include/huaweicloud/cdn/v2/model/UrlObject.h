
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_UrlObject_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_UrlObject_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  UrlObject
    : public ModelBase
{
public:
    UrlObject();
    virtual ~UrlObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UrlObject members

    /// <summary>
    /// url的id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// url的地址。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// url的状态 processing 处理中，succeed 完成，failed 失败，waiting 等待，refreshing 刷新中，preheating 预热中。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// url创建时间，相对于UTC 1970-01-01到当前时间相隔的毫秒数。
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 任务id。
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 任务的类型， 其值可以为REFRESH：刷新任务、PREHEATING：预热任务、REFRESH_AFTER_PREHEATING：预热后刷新
    /// </summary>

    std::string getTaskType() const;
    bool taskTypeIsSet() const;
    void unsettaskType();
    void setTaskType(const std::string& value);

    /// <summary>
    /// 失败原因，url状态为failed时返回。   - ORIGIN_ERROR：源站错误。   - INNER_ERROR：内部错误。   - UNKNOWN_ERROR：未知错误。
    /// </summary>

    std::string getFailClassify() const;
    bool failClassifyIsSet() const;
    void unsetfailClassify();
    void setFailClassify(const std::string& value);

    /// <summary>
    /// 刷新预热失败描述。
    /// </summary>

    std::string getFailDesc() const;
    bool failDescIsSet() const;
    void unsetfailDesc();
    void setFailDesc(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string status_;
    bool statusIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    std::string taskType_;
    bool taskTypeIsSet_;
    std::string failClassify_;
    bool failClassifyIsSet_;
    std::string failDesc_;
    bool failDescIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_UrlObject_H_
