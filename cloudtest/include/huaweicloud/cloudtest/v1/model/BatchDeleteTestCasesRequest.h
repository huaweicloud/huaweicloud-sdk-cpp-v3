
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BatchDeleteTestCasesRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BatchDeleteTestCasesRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/DeleteTestCaseInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  BatchDeleteTestCasesRequest
    : public ModelBase
{
public:
    BatchDeleteTestCasesRequest();
    virtual ~BatchDeleteTestCasesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteTestCasesRequest members

    /// <summary>
    /// 是否异步
    /// </summary>

    bool isIsAsync() const;
    bool isAsyncIsSet() const;
    void unsetisAsync();
    void setIsAsync(bool value);

    /// <summary>
    /// 
    /// </summary>

    DeleteTestCaseInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DeleteTestCaseInfo& value);


protected:
    bool isAsync_;
    bool isAsyncIsSet_;
    DeleteTestCaseInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteTestCasesRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteTestCasesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BatchDeleteTestCasesRequest_H_
