
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTestcasePlansResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTestcasePlansResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/ApiError.h>
#include <string>
#include <huaweicloud/cloudtest/v1/model/ResultValueListTestcasePlanVo.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListTestcasePlansResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTestcasePlansResponse();
    virtual ~ListTestcasePlansResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTestcasePlansResponse members

    /// <summary>
    /// success|error
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ResultValueListTestcasePlanVo getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const ResultValueListTestcasePlanVo& value);

    /// <summary>
    /// 
    /// </summary>

    ApiError getError() const;
    bool errorIsSet() const;
    void unseterror();
    void setError(const ApiError& value);


protected:
    std::string status_;
    bool statusIsSet_;
    ResultValueListTestcasePlanVo result_;
    bool resultIsSet_;
    ApiError error_;
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

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTestcasePlansResponse_H_
