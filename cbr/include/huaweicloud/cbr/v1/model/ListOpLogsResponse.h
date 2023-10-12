
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ListOpLogsResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ListOpLogsResponse_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/OperationLog.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ListOpLogsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListOpLogsResponse();
    virtual ~ListOpLogsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListOpLogsResponse members

    /// <summary>
    /// 任务列表
    /// </summary>

    std::vector<OperationLog>& getOperationLogs();
    bool operationLogsIsSet() const;
    void unsetoperationLogs();
    void setOperationLogs(const std::vector<OperationLog>& value);

    /// <summary>
    /// 任务个数
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 每页显示的条目数量
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 偏移量，表示从此偏移量开始查询
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


protected:
    std::vector<OperationLog> operationLogs_;
    bool operationLogsIsSet_;
    int32_t count_;
    bool countIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ListOpLogsResponse_H_
