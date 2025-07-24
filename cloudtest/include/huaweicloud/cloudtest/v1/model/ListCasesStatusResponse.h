
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListCasesStatusResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListCasesStatusResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/CommonResponseErrorOfobject.h>
#include <huaweicloud/cloudtest/v1/model/QueryCasesStatusResponseV2.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListCasesStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ListCasesStatusResponse();
    virtual ~ListCasesStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCasesStatusResponse members

    /// <summary>
    /// 
    /// </summary>

    CommonResponseErrorOfobject getError() const;
    bool errorIsSet() const;
    void unseterror();
    void setError(const CommonResponseErrorOfobject& value);

    /// <summary>
    /// 
    /// </summary>

    QueryCasesStatusResponseV2 getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const QueryCasesStatusResponseV2& value);

    /// <summary>
    /// 状态值，如success、error
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    CommonResponseErrorOfobject error_;
    bool errorIsSet_;
    QueryCasesStatusResponseV2 result_;
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

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListCasesStatusResponse_H_
