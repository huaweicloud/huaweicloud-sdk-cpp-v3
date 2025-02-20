
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_BatchImportSecretsResponse_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_BatchImportSecretsResponse_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/csms/v1/model/ErrorInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  BatchImportSecretsResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchImportSecretsResponse();
    virtual ~BatchImportSecretsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchImportSecretsResponse members

    /// <summary>
    /// 失败描述
    /// </summary>

    std::vector<ErrorInfo>& getErrorList();
    bool errorListIsSet() const;
    void unseterrorList();
    void setErrorList(const std::vector<ErrorInfo>& value);

    /// <summary>
    /// 总条数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 成功条数
    /// </summary>

    int32_t getSuccess() const;
    bool successIsSet() const;
    void unsetsuccess();
    void setSuccess(int32_t value);

    /// <summary>
    /// 失败条数
    /// </summary>

    int32_t getFailed() const;
    bool failedIsSet() const;
    void unsetfailed();
    void setFailed(int32_t value);


protected:
    std::vector<ErrorInfo> errorList_;
    bool errorListIsSet_;
    int32_t total_;
    bool totalIsSet_;
    int32_t success_;
    bool successIsSet_;
    int32_t failed_;
    bool failedIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_BatchImportSecretsResponse_H_
