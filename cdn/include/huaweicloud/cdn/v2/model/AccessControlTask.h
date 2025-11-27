
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_AccessControlTask_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_AccessControlTask_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 具体任务信息。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  AccessControlTask
    : public ModelBase
{
public:
    AccessControlTask();
    virtual ~AccessControlTask();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AccessControlTask members

    /// <summary>
    /// 任务id。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// url列表。
    /// </summary>

    std::vector<std::string>& getUrls();
    bool urlsIsSet() const;
    void unseturls();
    void setUrls(const std::vector<std::string>& value);

    /// <summary>
    /// 任务状态，状态类型：processing：处理中；succeed：完成；failed：失败。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 任务类型，unban：解禁任务；ban：封禁任务。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 创建时间戳（毫秒）。
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::vector<std::string> urls_;
    bool urlsIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string action_;
    bool actionIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_AccessControlTask_H_
