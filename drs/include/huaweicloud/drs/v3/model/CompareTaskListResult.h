
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_CompareTaskListResult_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_CompareTaskListResult_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v3/model/CompareTaskList.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  CompareTaskListResult
    : public ModelBase
{
public:
    CompareTaskListResult();
    virtual ~CompareTaskListResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CompareTaskListResult members

    /// <summary>
    /// 对比任务列表。
    /// </summary>

    std::vector<CompareTaskList>& getCompareTaskList();
    bool compareTaskListIsSet() const;
    void unsetcompareTaskList();
    void setCompareTaskList(const std::vector<CompareTaskList>& value);

    /// <summary>
    /// 对比任务列表总数。
    /// </summary>

    int32_t getCompareTaskListCount() const;
    bool compareTaskListCountIsSet() const;
    void unsetcompareTaskListCount();
    void setCompareTaskListCount(int32_t value);

    /// <summary>
    /// 错误信息
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);

    /// <summary>
    /// 错误码。
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);


protected:
    std::vector<CompareTaskList> compareTaskList_;
    bool compareTaskListIsSet_;
    int32_t compareTaskListCount_;
    bool compareTaskListCountIsSet_;
    std::string errorMsg_;
    bool errorMsgIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_CompareTaskListResult_H_
