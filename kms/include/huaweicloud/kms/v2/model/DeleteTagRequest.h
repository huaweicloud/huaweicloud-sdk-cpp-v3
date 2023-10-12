
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_DeleteTagRequest_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_DeleteTagRequest_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  DeleteTagRequest
    : public ModelBase
{
public:
    DeleteTagRequest();
    virtual ~DeleteTagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteTagRequest members

    /// <summary>
    /// 密钥ID
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// 标签键的值
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string key_;
    bool keyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteTagRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteTagRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_DeleteTagRequest_H_
