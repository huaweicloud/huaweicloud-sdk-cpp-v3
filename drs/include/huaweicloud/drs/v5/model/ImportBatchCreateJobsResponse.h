
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ImportBatchCreateJobsResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ImportBatchCreateJobsResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/ImportErrorMessageResp.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ImportBatchCreateJobsResponse
    : public ModelBase, public HttpResponse
{
public:
    ImportBatchCreateJobsResponse();
    virtual ~ImportBatchCreateJobsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImportBatchCreateJobsResponse members

    /// <summary>
    /// 批量导入任务id。
    /// </summary>

    std::string getAsyncJobId() const;
    bool asyncJobIdIsSet() const;
    void unsetasyncJobId();
    void setAsyncJobId(const std::string& value);

    /// <summary>
    /// 导入失败的错误信息。
    /// </summary>

    std::vector<ImportErrorMessageResp>& getImportErrorMessages();
    bool importErrorMessagesIsSet() const;
    void unsetimportErrorMessages();
    void setImportErrorMessages(const std::vector<ImportErrorMessageResp>& value);

    /// <summary>
    /// 错误码。
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 错误描述。
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);


protected:
    std::string asyncJobId_;
    bool asyncJobIdIsSet_;
    std::vector<ImportErrorMessageResp> importErrorMessages_;
    bool importErrorMessagesIsSet_;
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

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ImportBatchCreateJobsResponse_H_
