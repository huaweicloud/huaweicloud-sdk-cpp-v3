
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AddResourceToIteratorRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AddResourceToIteratorRequest_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AddResourceToIteratorRequest
    : public ModelBase
{
public:
    AddResourceToIteratorRequest();
    virtual ~AddResourceToIteratorRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddResourceToIteratorRequest members

    /// <summary>
    /// 迭代uri
    /// </summary>

    std::string getIteratorUri() const;
    bool iteratorUriIsSet() const;
    void unsetiteratorUri();
    void setIteratorUri(const std::string& value);

    /// <summary>
    /// 是否异步返回, 默认false， 超过500时，前端传true
    /// </summary>

    bool isIsAsync() const;
    bool isAsyncIsSet() const;
    void unsetisAsync();
    void setIsAsync(bool value);

    /// <summary>
    /// 
    /// </summary>

    AddResourceInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AddResourceInfo& value);


protected:
    std::string iteratorUri_;
    bool iteratorUriIsSet_;
    bool isAsync_;
    bool isAsyncIsSet_;
    AddResourceInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddResourceToIteratorRequest& dereference_from_shared_ptr(std::shared_ptr<AddResourceToIteratorRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AddResourceToIteratorRequest_H_
