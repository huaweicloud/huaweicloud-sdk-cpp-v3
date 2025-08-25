
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_BatchAccessKeysRequestBody_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_BatchAccessKeysRequestBody_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  BatchAccessKeysRequestBody
    : public ModelBase
{
public:
    BatchAccessKeysRequestBody();
    virtual ~BatchAccessKeysRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchAccessKeysRequestBody members

    /// <summary>
    /// 所需要绑定的访问密钥ID
    /// </summary>

    std::vector<std::string>& getAccessKeyIds();
    bool accessKeyIdsIsSet() const;
    void unsetaccessKeyIds();
    void setAccessKeyIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> accessKeyIds_;
    bool accessKeyIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_BatchAccessKeysRequestBody_H_
