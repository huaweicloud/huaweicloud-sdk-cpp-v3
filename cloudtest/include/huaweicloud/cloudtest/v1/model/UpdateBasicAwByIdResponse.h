
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateBasicAwByIdResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateBasicAwByIdResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/cloudtest/v1/model/CommonResponseErrorObject.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  UpdateBasicAwByIdResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateBasicAwByIdResponse();
    virtual ~UpdateBasicAwByIdResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateBasicAwByIdResponse members

    /// <summary>
    /// 错误码
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CommonResponseErrorObject getError() const;
    bool errorIsSet() const;
    void unseterror();
    void setError(const CommonResponseErrorObject& value);

    /// <summary>
    /// 失败原因
    /// </summary>

    std::string getReason() const;
    bool reasonIsSet() const;
    void unsetreason();
    void setReason(const std::string& value);

    /// <summary>
    /// 结果
    /// </summary>

    Object getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const Object& value);

    /// <summary>
    /// 状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string code_;
    bool codeIsSet_;
    CommonResponseErrorObject error_;
    bool errorIsSet_;
    std::string reason_;
    bool reasonIsSet_;
    Object result_;
    bool resultIsSet_;
    std::string status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateBasicAwByIdResponse_H_
