
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogContextResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogContextResponse_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
class HUAWEICLOUD_LTS_V2_EXPORT  ListLogContextResponse
    : public ModelBase, public HttpResponse
{
public:
    ListLogContextResponse();
    virtual ~ListLogContextResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLogContextResponse members

    /// <summary>
    /// 上下文日志信息。
    /// </summary>

    std::vector<LogContents>& getLogs();
    bool logsIsSet() const;
    void unsetlogs();
    void setLogs(const std::vector<LogContents>& value);

    /// <summary>
    /// 返回的总日志条数，包含请求参数中所指定的起始日志。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 向前查询到的日志条数。
    /// </summary>

    int32_t getBackwardsCount() const;
    bool backwardsCountIsSet() const;
    void unsetbackwardsCount();
    void setBackwardsCount(int32_t value);

    /// <summary>
    /// 向后查询到的日志条数。
    /// </summary>

    int32_t getForwardsCount() const;
    bool forwardsCountIsSet() const;
    void unsetforwardsCount();
    void setForwardsCount(int32_t value);

    /// <summary>
    /// 是否查询完成。
    /// </summary>

    bool isIsQueryComplete() const;
    bool isQueryCompleteIsSet() const;
    void unsetisQueryComplete();
    void setIsQueryComplete(bool value);


protected:
    std::vector<LogContents> logs_;
    bool logsIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;
    int32_t backwardsCount_;
    bool backwardsCountIsSet_;
    int32_t forwardsCount_;
    bool forwardsCountIsSet_;
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

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogContextResponse_H_
