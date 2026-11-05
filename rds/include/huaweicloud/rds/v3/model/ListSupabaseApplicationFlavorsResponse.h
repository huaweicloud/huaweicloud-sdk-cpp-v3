
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSupabaseApplicationFlavorsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSupabaseApplicationFlavorsResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/SupabaseSpecFlavorInfo.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListSupabaseApplicationFlavorsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSupabaseApplicationFlavorsResponse();
    virtual ~ListSupabaseApplicationFlavorsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSupabaseApplicationFlavorsResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<SupabaseSpecFlavorInfo>& getFlavors();
    bool flavorsIsSet() const;
    void unsetflavors();
    void setFlavors(const std::vector<SupabaseSpecFlavorInfo>& value);


protected:
    std::vector<SupabaseSpecFlavorInfo> flavors_;
    bool flavorsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSupabaseApplicationFlavorsResponse_H_
