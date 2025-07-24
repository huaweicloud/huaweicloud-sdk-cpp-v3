
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BatchAddResourcesForIteratorRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BatchAddResourcesForIteratorRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/AddResourceInfo.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  BatchAddResourcesForIteratorRequest
    : public ModelBase
{
public:
    BatchAddResourcesForIteratorRequest();
    virtual ~BatchAddResourcesForIteratorRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchAddResourcesForIteratorRequest members

    /// <summary>
    /// 迭代uri
    /// </summary>

    std::string getIteratorId() const;
    bool iteratorIdIsSet() const;
    void unsetiteratorId();
    void setIteratorId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AddResourceInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AddResourceInfo& value);


protected:
    std::string iteratorId_;
    bool iteratorIdIsSet_;
    AddResourceInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchAddResourcesForIteratorRequest& dereference_from_shared_ptr(std::shared_ptr<BatchAddResourcesForIteratorRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BatchAddResourcesForIteratorRequest_H_
