
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteRelationsByOneCaseRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteRelationsByOneCaseRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/DeleteRelationsByOneCaseInfo.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  DeleteRelationsByOneCaseRequest
    : public ModelBase
{
public:
    DeleteRelationsByOneCaseRequest();
    virtual ~DeleteRelationsByOneCaseRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteRelationsByOneCaseRequest members

    /// <summary>
    /// 用例id
    /// </summary>

    std::string getCaseId() const;
    bool caseIdIsSet() const;
    void unsetcaseId();
    void setCaseId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DeleteRelationsByOneCaseInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DeleteRelationsByOneCaseInfo& value);


protected:
    std::string caseId_;
    bool caseIdIsSet_;
    DeleteRelationsByOneCaseInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteRelationsByOneCaseRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteRelationsByOneCaseRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteRelationsByOneCaseRequest_H_
