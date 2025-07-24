
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListUserPopupInfoResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListUserPopupInfoResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/CommonResponseErrorOfAPITest.h>
#include <huaweicloud/cloudtest/v1/model/PopUpInfo.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListUserPopupInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ListUserPopupInfoResponse();
    virtual ~ListUserPopupInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListUserPopupInfoResponse members

    /// <summary>
    /// 是否请求成功
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PopUpInfo getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const PopUpInfo& value);

    /// <summary>
    /// 
    /// </summary>

    CommonResponseErrorOfAPITest getError() const;
    bool errorIsSet() const;
    void unseterror();
    void setError(const CommonResponseErrorOfAPITest& value);


protected:
    std::string status_;
    bool statusIsSet_;
    PopUpInfo result_;
    bool resultIsSet_;
    CommonResponseErrorOfAPITest error_;
    bool errorIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListUserPopupInfoResponse_H_
