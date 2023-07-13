
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogsResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogsResponse_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/lts/v2/model/LogContents.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ListLogsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListLogsResponse();
    virtual ~ListLogsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListLogsResponse members

    /// <summary>
    /// 日志条数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 日志信息。
    /// </summary>

    std::vector<LogContents>& getLogs();
    bool logsIsSet() const;
    void unsetlogs();
    void setLogs(const std::vector<LogContents>& value);

    /// <summary>
    /// 是否查询完成。
    /// </summary>

    bool isIsQueryComplete() const;
    bool isQueryCompleteIsSet() const;
    void unsetisQueryComplete();
    void setIsQueryComplete(bool value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<LogContents> logs_;
    bool logsIsSet_;
    bool isQueryComplete_;
    bool isQueryCompleteIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogsResponse_H_
