
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AuditResult_system_audit_result_errors_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AuditResult_system_audit_result_errors_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  AuditResult_system_audit_result_errors
    : public ModelBase
{
public:
    AuditResult_system_audit_result_errors();
    virtual ~AuditResult_system_audit_result_errors();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuditResult_system_audit_result_errors members

    /// <summary>
    /// 音频文件名。
    /// </summary>

    std::string getAudioName() const;
    bool audioNameIsSet() const;
    void unsetaudioName();
    void setAudioName(const std::string& value);

    /// <summary>
    /// 文本文件名。
    /// </summary>

    std::string getTextName() const;
    bool textNameIsSet() const;
    void unsettextName();
    void setTextName(const std::string& value);

    /// <summary>
    /// 异常错误码。
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 异常错误信息。
    /// </summary>

    std::string getErrorMessage() const;
    bool errorMessageIsSet() const;
    void unseterrorMessage();
    void setErrorMessage(const std::string& value);


protected:
    std::string audioName_;
    bool audioNameIsSet_;
    std::string textName_;
    bool textNameIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string errorMessage_;
    bool errorMessageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AuditResult_system_audit_result_errors_H_
