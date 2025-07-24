
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteRelationsByOneCaseResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteRelationsByOneCaseResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/ResultValueStringForOk.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  DeleteRelationsByOneCaseResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteRelationsByOneCaseResponse();
    virtual ~DeleteRelationsByOneCaseResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteRelationsByOneCaseResponse members

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

    ResultValueStringForOk getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const ResultValueStringForOk& value);


protected:
    std::string status_;
    bool statusIsSet_;
    ResultValueStringForOk result_;
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

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteRelationsByOneCaseResponse_H_
