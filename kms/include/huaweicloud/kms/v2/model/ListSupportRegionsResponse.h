
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ListSupportRegionsResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ListSupportRegionsResponse_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ListSupportRegionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSupportRegionsResponse();
    virtual ~ListSupportRegionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSupportRegionsResponse members

    /// <summary>
    /// 区域信息。
    /// </summary>

    std::vector<std::string>& getRegions();
    bool regionsIsSet() const;
    void unsetregions();
    void setRegions(const std::vector<std::string>& value);


protected:
    std::vector<std::string> regions_;
    bool regionsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ListSupportRegionsResponse_H_
