
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_BatchEnableAccessKeysRequest_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_BatchEnableAccessKeysRequest_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cpcs/v1/model/BatchAccessKeysRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  BatchEnableAccessKeysRequest
    : public ModelBase
{
public:
    BatchEnableAccessKeysRequest();
    virtual ~BatchEnableAccessKeysRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchEnableAccessKeysRequest members

    /// <summary>
    /// 应用ID
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchAccessKeysRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchAccessKeysRequestBody& value);


protected:
    std::string appId_;
    bool appIdIsSet_;
    BatchAccessKeysRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchEnableAccessKeysRequest& dereference_from_shared_ptr(std::shared_ptr<BatchEnableAccessKeysRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_BatchEnableAccessKeysRequest_H_
