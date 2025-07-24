
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CommonResponseErrorOfAPITest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CommonResponseErrorOfAPITest_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CommonResponseErrorOfAPITest
    : public ModelBase
{
public:
    CommonResponseErrorOfAPITest();
    virtual ~CommonResponseErrorOfAPITest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommonResponseErrorOfAPITest members

    /// <summary>
    /// 错误码
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 错误原因
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

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CommonResponseErrorOfAPITest_H_
