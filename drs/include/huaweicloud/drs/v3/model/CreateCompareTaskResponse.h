
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateCompareTaskResponse_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateCompareTaskResponse_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/CreateCompareTaskResult.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  CreateCompareTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateCompareTaskResponse();
    virtual ~CreateCompareTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateCompareTaskResponse members

    /// <summary>
    /// 任务id。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateCompareTaskResult getObjectLevelCompareCreateResult() const;
    bool objectLevelCompareCreateResultIsSet() const;
    void unsetobjectLevelCompareCreateResult();
    void setObjectLevelCompareCreateResult(const CreateCompareTaskResult& value);

    /// <summary>
    /// 
    /// </summary>

    CreateCompareTaskResult getDataLevelCompareCreateResult() const;
    bool dataLevelCompareCreateResultIsSet() const;
    void unsetdataLevelCompareCreateResult();
    void setDataLevelCompareCreateResult(const CreateCompareTaskResult& value);

    /// <summary>
    /// 错误码。
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 错误信息。
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    CreateCompareTaskResult objectLevelCompareCreateResult_;
    bool objectLevelCompareCreateResultIsSet_;
    CreateCompareTaskResult dataLevelCompareCreateResult_;
    bool dataLevelCompareCreateResultIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string errorMsg_;
    bool errorMsgIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateCompareTaskResponse_H_
