
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_ShowVersionResponse_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_ShowVersionResponse_H_


#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ims/v2/model/OsVersionResponse.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  ShowVersionResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowVersionResponse();
    virtual ~ShowVersionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowVersionResponse members

    /// <summary>
    /// 版本信息
    /// </summary>

    std::vector<OsVersionResponse>& getVersions();
    bool versionsIsSet() const;
    void unsetversions();
    void setVersions(const std::vector<OsVersionResponse>& value);


protected:
    std::vector<OsVersionResponse> versions_;
    bool versionsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_ShowVersionResponse_H_
