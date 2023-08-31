
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListSingleStreamDetailRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListSingleStreamDetailRequest_H_

#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_LIVE_V2_EXPORT  ListSingleStreamDetailRequest
    : public ModelBase
{
public:
    ListSingleStreamDetailRequest();
    virtual ~ListSingleStreamDetailRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListSingleStreamDetailRequest members

    /// <summary>
    /// 项目ID，获取方法请参考[获取项目ID](live_03_0023.xml)。 
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 推流域名。 
    /// </summary>

    std::string getPublishDomain() const;
    bool publishDomainIsSet() const;
    void unsetpublishDomain();
    void setPublishDomain(const std::string& value);

    /// <summary>
    /// 应用名。 
    /// </summary>

    std::string getApp() const;
    bool appIsSet() const;
    void unsetapp();
    void setApp(const std::string& value);

    /// <summary>
    /// 流名。 
    /// </summary>

    std::string getStream() const;
    bool streamIsSet() const;
    void unsetstream();
    void setStream(const std::string& value);

    /// <summary>
    /// 起始时间。日期格式按照ISO8601表示法，并使用UTC时间。  格式为：YYYY-MM-DDThh:mm:ssZ。最大查询跨度1天，最大查询周期1个月。  若参数为空，默认查询最近1小时数据。 
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间。日期格式按照ISO8601表示法，并使用UTC时间。  格式为：YYYY-MM-DDThh:mm:ssZ。最大查询跨度1天，最大查询周期1个月。  若参数为空，默认为当前时间。结束时间需大于起始时间。 
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string publishDomain_;
    bool publishDomainIsSet_;
    std::string app_;
    bool appIsSet_;
    std::string stream_;
    bool streamIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListSingleStreamDetailRequest& dereference_from_shared_ptr(std::shared_ptr<ListSingleStreamDetailRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListSingleStreamDetailRequest_H_
