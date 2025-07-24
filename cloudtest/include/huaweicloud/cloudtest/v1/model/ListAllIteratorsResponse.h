
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListAllIteratorsResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListAllIteratorsResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/ResultValueListTestVersionVo.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListAllIteratorsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAllIteratorsResponse();
    virtual ~ListAllIteratorsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAllIteratorsResponse members

    /// <summary>
    /// 对外时：success|error;
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ResultValueListTestVersionVo getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const ResultValueListTestVersionVo& value);


protected:
    std::string status_;
    bool statusIsSet_;
    ResultValueListTestVersionVo result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListAllIteratorsResponse_H_
