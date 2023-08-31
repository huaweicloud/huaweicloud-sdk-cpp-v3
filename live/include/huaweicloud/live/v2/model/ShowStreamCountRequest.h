
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_ShowStreamCountRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_ShowStreamCountRequest_H_

#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LIVE_V2_EXPORT  ShowStreamCountRequest
    : public ModelBase
{
public:
    ShowStreamCountRequest();
    virtual ~ShowStreamCountRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowStreamCountRequest members

    /// <summary>
    /// 项目ID，获取方法请参考[获取项目ID](live_03_0023.xml)。 
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 推流域名列表，最多支持查询100个域名，多个域名以逗号分隔，若查询多个域名，则返回的是多个域名合并数据。 
    /// </summary>

    std::vector<std::string>& getPublishDomains();
    bool publishDomainsIsSet() const;
    void unsetpublishDomains();
    void setPublishDomains(const std::vector<std::string>& value);

    /// <summary>
    /// 起始时间。日期格式按照ISO8601表示法，并使用UTC时间。  格式为：YYYY-MM-DDThh:mm:ssZ。最大查询跨度31天，最大查询周期1年。  若参数为空，默认查询7天数据。 
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间。日期格式按照ISO8601表示法，并使用UTC时间。 格式为：YYYY-MM-DDThh:mm:ssZ。  若参数为空，默认为当前时间，最大查询跨度31天， 最大查询跨度31天，最大查询周期1年。 
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::vector<std::string> publishDomains_;
    bool publishDomainsIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowStreamCountRequest& dereference_from_shared_ptr(std::shared_ptr<ShowStreamCountRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_ShowStreamCountRequest_H_
