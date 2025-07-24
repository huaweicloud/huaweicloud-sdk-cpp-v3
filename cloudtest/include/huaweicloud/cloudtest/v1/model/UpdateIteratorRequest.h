
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateIteratorRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateIteratorRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/IteratorVersionInfo.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  UpdateIteratorRequest
    : public ModelBase
{
public:
    UpdateIteratorRequest();
    virtual ~UpdateIteratorRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateIteratorRequest members

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

    IteratorVersionInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const IteratorVersionInfo& value);


protected:
    std::string iteratorId_;
    bool iteratorIdIsSet_;
    IteratorVersionInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateIteratorRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateIteratorRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateIteratorRequest_H_
