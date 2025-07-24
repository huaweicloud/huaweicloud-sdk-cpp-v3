
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ApiError_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ApiError_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 失败时的error信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ApiError
    : public ModelBase
{
public:
    ApiError();
    virtual ~ApiError();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ApiError members

    /// <summary>
    /// 业务失败的错误码
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 业务失败的提示内容
    /// </summary>

    std::string getReason() const;
    bool reasonIsSet() const;
    void unsetreason();
    void setReason(const std::string& value);


protected:
    std::string code_;
    bool codeIsSet_;
    std::string reason_;
    bool reasonIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ApiError_H_
