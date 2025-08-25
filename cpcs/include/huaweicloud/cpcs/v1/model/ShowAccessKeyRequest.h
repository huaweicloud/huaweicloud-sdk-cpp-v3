
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAccessKeyRequest_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAccessKeyRequest_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowAccessKeyRequest
    : public ModelBase
{
public:
    ShowAccessKeyRequest();
    virtual ~ShowAccessKeyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAccessKeyRequest members

    /// <summary>
    /// 访问密钥ID
    /// </summary>

    std::string getAccessKeyId() const;
    bool accessKeyIdIsSet() const;
    void unsetaccessKeyId();
    void setAccessKeyId(const std::string& value);

    /// <summary>
    /// 应用ID
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);


protected:
    std::string accessKeyId_;
    bool accessKeyIdIsSet_;
    std::string appId_;
    bool appIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAccessKeyRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAccessKeyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAccessKeyRequest_H_
