
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_UploadDbObjectTemplateResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_UploadDbObjectTemplateResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  UploadDbObjectTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    UploadDbObjectTemplateResponse();
    virtual ~UploadDbObjectTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UploadDbObjectTemplateResponse members

    /// <summary>
    /// 是否上传完成。
    /// </summary>

    bool isSendSuccess() const;
    bool sendSuccessIsSet() const;
    void unsetsendSuccess();
    void setSendSuccess(bool value);

    /// <summary>
    /// 文件解析状态。 取值：success，failed
    /// </summary>

    std::string getProcessStatus() const;
    bool processStatusIsSet() const;
    void unsetprocessStatus();
    void setProcessStatus(const std::string& value);

    /// <summary>
    /// 解析成功的行数。
    /// </summary>

    std::string getParsedSuccessNumber() const;
    bool parsedSuccessNumberIsSet() const;
    void unsetparsedSuccessNumber();
    void setParsedSuccessNumber(const std::string& value);


protected:
    bool sendSuccess_;
    bool sendSuccessIsSet_;
    std::string processStatus_;
    bool processStatusIsSet_;
    std::string parsedSuccessNumber_;
    bool parsedSuccessNumberIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_UploadDbObjectTemplateResponse_H_
