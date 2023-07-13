
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_TaskLogInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_TaskLogInfo_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 日志查询结果信息体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  TaskLogInfo
    : public ModelBase
{
public:
    TaskLogInfo();
    virtual ~TaskLogInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// TaskLogInfo members

    /// <summary>
    /// 日志级别。
    /// </summary>

    std::string getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(const std::string& value);

    /// <summary>
    /// 日志信息。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 日志时间。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);


protected:
    std::string level_;
    bool levelIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_TaskLogInfo_H_
