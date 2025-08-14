
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateAccessCodeResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateAccessCodeResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  CreateAccessCodeResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateAccessCodeResponse();
    virtual ~CreateAccessCodeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAccessCodeResponse members

    /// <summary>
    /// 接入名，随机生成8位字符串
    /// </summary>

    std::string getAccessKey() const;
    bool accessKeyIsSet() const;
    void unsetaccessKey();
    void setAccessKey(const std::string& value);

    /// <summary>
    /// 接入凭证。
    /// </summary>

    std::string getAccessCode() const;
    bool accessCodeIsSet() const;
    void unsetaccessCode();
    void setAccessCode(const std::string& value);


protected:
    std::string accessKey_;
    bool accessKeyIsSet_;
    std::string accessCode_;
    bool accessCodeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateAccessCodeResponse_H_
