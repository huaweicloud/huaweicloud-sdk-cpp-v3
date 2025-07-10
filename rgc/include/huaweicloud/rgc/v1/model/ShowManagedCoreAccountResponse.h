
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowManagedCoreAccountResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowManagedCoreAccountResponse_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ShowManagedCoreAccountResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowManagedCoreAccountResponse();
    virtual ~ShowManagedCoreAccountResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowManagedCoreAccountResponse members

    /// <summary>
    /// 纳管账号ID。
    /// </summary>

    std::string getAccountId() const;
    bool accountIdIsSet() const;
    void unsetaccountId();
    void setAccountId(const std::string& value);

    /// <summary>
    /// 纳管账号名称。
    /// </summary>

    std::string getAccountName() const;
    bool accountNameIsSet() const;
    void unsetaccountName();
    void setAccountName(const std::string& value);

    /// <summary>
    /// 核心资源映射。
    /// </summary>

    std::map<std::string, std::string>& getCoreResourceMappings();
    bool coreResourceMappingsIsSet() const;
    void unsetcoreResourceMappings();
    void setCoreResourceMappings(const std::map<std::string, std::string>& value);


protected:
    std::string accountId_;
    bool accountIdIsSet_;
    std::string accountName_;
    bool accountNameIsSet_;
    std::map<std::string, std::string> coreResourceMappings_;
    bool coreResourceMappingsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowManagedCoreAccountResponse_H_
