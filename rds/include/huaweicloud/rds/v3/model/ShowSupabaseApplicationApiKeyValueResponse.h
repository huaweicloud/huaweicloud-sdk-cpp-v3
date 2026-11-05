
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowSupabaseApplicationApiKeyValueResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowSupabaseApplicationApiKeyValueResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowSupabaseApplicationApiKeyValueResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSupabaseApplicationApiKeyValueResponse();
    virtual ~ShowSupabaseApplicationApiKeyValueResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSupabaseApplicationApiKeyValueResponse members

    /// <summary>
    /// ApiKey明文。
    /// </summary>

    std::string getApiKey() const;
    bool apiKeyIsSet() const;
    void unsetapiKey();
    void setApiKey(const std::string& value);


protected:
    std::string apiKey_;
    bool apiKeyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowSupabaseApplicationApiKeyValueResponse_H_
