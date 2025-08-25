
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_BatchEnableAccessKeysResponse_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_BatchEnableAccessKeysResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  BatchEnableAccessKeysResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchEnableAccessKeysResponse();
    virtual ~BatchEnableAccessKeysResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchEnableAccessKeysResponse members

    /// <summary>
    /// 启用的访问密钥id列表
    /// </summary>

    std::vector<std::string>& getAccessKeyIds();
    bool accessKeyIdsIsSet() const;
    void unsetaccessKeyIds();
    void setAccessKeyIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> accessKeyIds_;
    bool accessKeyIdsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_BatchEnableAccessKeysResponse_H_
