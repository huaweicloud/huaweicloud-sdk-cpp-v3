
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_CheckBucketResponse_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_CheckBucketResponse_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  CheckBucketResponse
    : public ModelBase
{
public:
    CheckBucketResponse();
    virtual ~CheckBucketResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckBucketResponse members

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

    std::string getErrorMessage() const;
    bool errorMessageIsSet() const;
    void unseterrorMessage();
    void setErrorMessage(const std::string& value);

    /// <summary>
    /// 返回的http状态码。
    /// </summary>

    int32_t getResponseCode() const;
    bool responseCodeIsSet() const;
    void unsetresponseCode();
    void setResponseCode(int32_t value);

    /// <summary>
    /// 是否成功转储。
    /// </summary>

    bool isSuccess() const;
    bool successIsSet() const;
    void unsetsuccess();
    void setSuccess(bool value);


protected:
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string errorMessage_;
    bool errorMessageIsSet_;
    int32_t responseCode_;
    bool responseCodeIsSet_;
    bool success_;
    bool successIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_CheckBucketResponse_H_
