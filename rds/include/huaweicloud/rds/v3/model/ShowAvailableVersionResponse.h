
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowAvailableVersionResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowAvailableVersionResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_RDS_V3_EXPORT  ShowAvailableVersionResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAvailableVersionResponse();
    virtual ~ShowAvailableVersionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAvailableVersionResponse members

    /// <summary>
    /// 可选版本列表。
    /// </summary>

    std::vector<std::string>& getAvailableVersions();
    bool availableVersionsIsSet() const;
    void unsetavailableVersions();
    void setAvailableVersions(const std::vector<std::string>& value);


protected:
    std::vector<std::string> availableVersions_;
    bool availableVersionsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowAvailableVersionResponse_H_
